/*
	This file is part of cpp-vapory.

	cpp-vapory is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-vapory is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-vapory.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "SmartVM.h"
#include "VVMC.h"
#include "VMFactory.h"
#include <libdevcore/Log.h>
#include <libdevcore/concurrent_queue.h>
#include <vvmjit.h>
#include <thread>

namespace dev
{
namespace vap
{
namespace
{
	struct JitInfo: LogChannel { static const char* name() { return "JIT"; }; static const int verbosity = 11; };

	using HitMap = std::unordered_map<h256, uint64_t>;

	HitMap& getHitMap()
	{
		static HitMap s_hitMap;
		return s_hitMap;
	}

	struct JitTask
	{
		bytes code;
		h256 codeHash;
		vvm_revision mode;
		uint32_t flags;

		static JitTask createStopSentinel() { return JitTask(); }

		bool isStopSentinel()
		{
			assert((!code.empty() || !codeHash) && "'empty code => empty hash' invariant failed");
			return code.empty();
		}
	};

	class JitWorker
	{
        VVMC& m_jit;
		concurrent_queue<JitTask> m_queue;
		std::thread m_worker; // Worker must be last to initialize

		void work()
		{
			clog(JitInfo) << "JIT worker started.";
			JitTask task;
			while (!(task = m_queue.pop()).isStopSentinel())
			{
				clog(JitInfo) << "Compilation... " << task.codeHash;
				m_jit.compile(task.mode, task.flags, {task.code.data(), task.code.size()}, task.codeHash);
				clog(JitInfo) << "   ...finished " << task.codeHash;
			}
			clog(JitInfo) << "JIT worker finished.";
		}

	public:
        explicit JitWorker(VVMC& _jit) noexcept : m_jit(_jit), m_worker([this] { work(); }) {}

        ~JitWorker()
		{
			push(JitTask::createStopSentinel());
			m_worker.join();
		}

		void push(JitTask&& _task) { m_queue.push(std::move(_task)); }
	};
}

owning_bytes_ref SmartVM::exec(u256& io_gas, ExtVMFace& _ext, OnOpFunc const& _onOp)
{
    // Keep the JIT instance.
    static VVMC jit{vvmjit_create()};

    auto mode = toRevision(_ext.vvmSchedule());
    uint32_t flags = _ext.staticCall ? VVM_STATIC : 0;

    if (jit.isCodeReady(mode, flags, _ext.codeHash))
    {
        // Jitted code already in memory -- execute quicly.
        clog(JitInfo) << "JIT:           " << _ext.codeHash;
        return jit.exec(io_gas, _ext, _onOp);
    }

    if (!_ext.code.empty())  // This check is needed for VM tests
    {
        static JitWorker s_worker(jit);

        // Check VVM code hit count
        static const uint64_t c_hitTreshold = 2;
        auto& hits = getHitMap()[_ext.codeHash];
        ++hits;
        if (hits == c_hitTreshold)
        {
            clog(JitInfo) << "Schedule:      " << _ext.codeHash;
            s_worker.push({_ext.code, _ext.codeHash, mode, flags});
        }
    }


    clog(JitInfo) << "Interpreter:   " << _ext.codeHash;
    return VMFactory::create(VMKind::Interpreter)->exec(io_gas, _ext, _onOp);
}
}
}
