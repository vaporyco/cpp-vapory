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
/** @file
 * Helper functions to work with json::spirit and test files
 */

#pragma once

#include <thread>
#include <future>
#include <set>
#include <functional>
#include <boost/test/unit_test.hpp>
#include <boost/filesystem.hpp>
#include <boost/progress.hpp>

#include <libvapashseal/Vapash.h>
#include <libvapory/State.h>
#include <libvapashseal/GenesisInfo.h>
#include <test/tools/libtestutils/Common.h>

#include <test/tools/libtestvap/JsonSpiritHeaders.h>
#include <test/tools/libtestvap/Options.h>
#include <test/tools/libtestvap/ImportTest.h>
#include <test/tools/libtestvap/TestOutputHelper.h>
#include <test/tools/libtestvap/TestSuite.h>

namespace dev
{

namespace vap
{

class Client;
class State;

void mine(Client& c, int numBlocks);
void connectClients(Client& c1, Client& c2);
void mine(Block& _s, BlockChain const& _bc, SealEngineFace* _sealer);
void mine(BlockHeader& _bi, SealEngineFace* _sealer, bool _verify = true);
}

namespace test
{

struct ValueTooLarge: virtual Exception {};
struct MissingFields : virtual Exception {};
bigint const c_max256plus1 = bigint(1) << 256;
typedef json_spirit::Value_type jsonVType;

class ZeroGasPricer: public vap::GasPricer
{
protected:
	u256 ask(vap::Block const&) const override { return 0; }
	u256 bid(vap::TransactionPriority = vap::TransactionPriority::Medium) const override { return 0; }
};

// helping functions
std::string prepareVersionString();
std::string prepareLLLCVersionString();
std::vector<boost::filesystem::path> getFiles(boost::filesystem::path const& _dirPath, std::set<std::string> _extentionMask, std::string const& _particularFile = {});
std::string netIdToString(vap::Network _netId);
vap::Network stringToNetId(std::string const& _netname);
bool isDisabledNetwork(vap::Network _net);
std::vector<vap::Network> const& getNetworks();
u256 toInt(json_spirit::mValue const& _v);
byte toByte(json_spirit::mValue const& _v);
bytes processDataOrCode(json_spirit::mObject const& _o, std::string const& nodeName);
std::string replaceCode(std::string const& _code);
void replaceCodeInState(json_spirit::mObject& _o);
std::string compileLLL(std::string const& _code);
std::string executeCmd(std::string const& _command);
json_spirit::mValue parseYamlToJson(std::string const& _string);
bytes importCode(json_spirit::mObject const& _o);
bytes importData(json_spirit::mObject const& _o);
bytes importByteArray(std::string const& _str);
void requireJsonFields(json_spirit::mObject const& _o, std::string const& _section,
    std::map<std::string, json_spirit::Value_type> const& _validationMap);
void checkHexHasEvenLength(std::string const&);
void copyFile(boost::filesystem::path const& _source, boost::filesystem::path const& _destination);
vap::LogEntries importLog(json_spirit::mArray const& _o);
std::string exportLog(vap::LogEntries const& _logs);
void checkOutput(bytesConstRef _output, json_spirit::mObject const& _o);
void checkStorage(std::map<u256, u256> _expectedStore, std::map<u256, u256> _resultStore, Address _expectedAddr);
void checkCallCreates(vap::Transactions const& _resultCallCreates, vap::Transactions const& _expectedCallCreates);
dev::vap::BlockHeader constructHeader(
	h256 const& _parentHash,
	h256 const& _sha3Uncles,
	Address const& _author,
	h256 const& _stateRoot,
	h256 const& _transactionsRoot,
	h256 const& _receiptsRoot,
	dev::vap::LogBloom const& _logBloom,
	u256 const& _difficulty,
	u256 const& _number,
	u256 const& _gasLimit,
	u256 const& _gasUsed,
	u256 const& _timestamp,
	bytes const& _extraData);
void updateVapashSeal(dev::vap::BlockHeader& _header, h256 const& _mixHash, dev::vap::Nonce const& _nonce);
RLPStream createRLPStreamFromTransactionFields(json_spirit::mObject const& _tObj);
json_spirit::mObject fillJsonWithStateChange(vap::State const& _stateOrig, vap::State const& _statePost, vap::ChangeLog const& _changeLog);
json_spirit::mObject fillJsonWithState(vap::State const& _state);
json_spirit::mObject fillJsonWithState(vap::State const& _state, vap::AccountMaskMap const& _map);
json_spirit::mObject fillJsonWithTransaction(vap::Transaction const& _txn);

//Fill Test Functions
bool createRandomTest();	//returns true if succeed, false if there was an error;
void doRlpTests(json_spirit::mValue const& _input);

/// Allows observing test execution process.
/// This class also provides mvapods for registering and notifying the listener
class Listener
{
public:
	virtual ~Listener() = default;

	virtual void suiteStarted(std::string const&) {}
	virtual void testStarted(std::string const& _name) = 0;
	virtual void testFinished(int64_t _gasUsed) = 0;

	static void registerListener(Listener& _listener);
	static void notifySuiteStarted(std::string const& _name);
	static void notifyTestStarted(std::string const& _name);
	static void notifyTestFinished(int64_t _gasUsed);

	/// Test started/finished notification RAII helper
	class ExecTimeGuard
	{
		int64_t m_gasUsed = -1;
	public:
		ExecTimeGuard(std::string const& _testName) { notifyTestStarted(_testName);	}
		~ExecTimeGuard() { notifyTestFinished(m_gasUsed); }
		ExecTimeGuard(ExecTimeGuard const&) = delete;
		ExecTimeGuard& operator=(ExecTimeGuard) = delete;
		void setGasUsed(int64_t _gas) { m_gasUsed = _gas; }
	};
};

}
}
