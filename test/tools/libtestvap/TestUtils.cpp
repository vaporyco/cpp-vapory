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

#include <thread>
#include <boost/test/unit_test.hpp>
#include <boost/filesystem.hpp>
#include <test/tools/libtestutils/Common.h>
#include <test/tools/libtestutils/BlockChainLoader.h>
#include <test/tools/libtestutils/FixedClient.h>
#include <test/tools/libtestvap/TestUtils.h>

using namespace std;
using namespace dev;
using namespace dev::vap;
using namespace dev::test;

namespace dev
{
namespace test
{

bool getCommandLineOption(std::string const& _name);
std::string getCommandLineArgument(std::string const& _name, bool _require = false);

}
}

bool dev::test::getCommandLineOption(string const& _name)
{
	auto argc = boost::unit_test::framework::master_test_suite().argc;
	auto argv = boost::unit_test::framework::master_test_suite().argv;
	bool result = false;
	for (auto i = 0; !result && i < argc; ++i)
		result = _name == argv[i];
	return result;
}

std::string dev::test::getCommandLineArgument(string const& _name, bool _require)
{
	auto argc = boost::unit_test::framework::master_test_suite().argc;
	auto argv = boost::unit_test::framework::master_test_suite().argv;
	for (auto i = 1; i < argc; ++i)
	{
		string str = argv[i];
		if (_name == str.substr(0, _name.size()))
			return str.substr(str.find("=") + 1);
	}
	if (_require)
		BOOST_ERROR("Failed getting command line argument: " << _name << " from: " << argv);
	return "";
}

LoadTestFileFixture::LoadTestFileFixture()
{
	m_json = loadJsonFromFile(toTestFilePath(getCommandLineArgument("--vap_testfile")));
}

void ParallelFixture::enumerateThreads(std::function<void()> callback) const
{
	size_t threadsCount = std::stoul(getCommandLineArgument("--vap_threads"), nullptr, 10);
	
	std::vector<std::thread> workers;
	for (size_t i = 0; i < threadsCount; i++)
		workers.emplace_back(callback);

	for (std::thread& t : workers)
		t.join();
}

void BlockChainFixture::enumerateBlockchains(std::function<void(Json::Value const&, dev::vap::BlockChain const&, State state)> callback) const
{
	for (string const& name: m_json.getMemberNames())
	{
		BlockChainLoader bcl(m_json[name]);
		callback(m_json[name], bcl.bc(), bcl.state());
	}
}

void ClientBaseFixture::enumerateClients(std::function<void(Json::Value const&, dev::vap::ClientBase&)> callback) const
{
	enumerateBlockchains([&callback](Json::Value const& _json, BlockChain const& _bc, State _state) -> void
	{
		cerr << "void ClientBaseFixture::enumerateClients. FixedClient now accepts block not sate!" << endl;
		_state.commit(State::CommitBehaviour::KeepEmptyAccounts); //unused variable. remove this line
		vap::Block b(Block::Null);
		b.noteChain(_bc);
		FixedClient client(_bc, b);
		callback(_json, client);
	});
}

void ParallelClientBaseFixture::enumerateClients(std::function<void(Json::Value const&, dev::vap::ClientBase&)> callback) const
{
	ClientBaseFixture::enumerateClients([this, &callback](Json::Value const& _json, dev::vap::ClientBase& _client) -> void
	{
		// json is being copied here
		enumerateThreads([callback, _json, &_client]() -> void
		{
			callback(_json, _client);
		});
	});
}

