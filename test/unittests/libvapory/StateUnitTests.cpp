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
/// @file
/// State unit tests.

#include <test/tools/libtestvap/TestHelper.h>
#include <libvapory/BlockChain.h>
#include <libvapory/Block.h>
#include <libvapcore/BasicAuthority.h>
#include <libvapory/Defaults.h>

using namespace std;
using namespace dev;
using namespace dev::vap;

namespace dev
{
namespace test
{

BOOST_FIXTURE_TEST_SUITE(StateUnitTests, TestOutputHelperFixture)

BOOST_AUTO_TEST_CASE(Basic)
{
	Block s(Block::Null);
}

BOOST_AUTO_TEST_CASE(LoadAccountCode)
{
	Address addr{"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
	State s{0};
	s.createContract(addr);
	uint8_t codeData[] = {'c', 'o', 'd', 'e'};
	s.setCode(addr, {std::begin(codeData), std::end(codeData)});
	s.commit(State::CommitBehaviour::RemoveEmptyAccounts);

	auto& loadedCode = s.code(addr);
	BOOST_CHECK(std::equal(
			std::begin(codeData), std::end(codeData), std::begin(loadedCode)
	));
}

BOOST_AUTO_TEST_SUITE_END()

}
}
