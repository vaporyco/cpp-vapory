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
/** @file BlockDetails.cpp
 * @author Gav Wood <i@gavwood.com>
 * @date 2014
 */

#include "BlockDetails.h"

#include <libdevcore/Common.h>
using namespace std;
using namespace dev;
using namespace dev::vap;

BlockDetails::BlockDetails(RLP const& _r)
{
	number = _r[0].toInt<unsigned>();
	totalDifficulty = _r[1].toInt<u256>();
	parent = _r[2].toHash<h256>();
	children = _r[3].toVector<h256>();
	size = _r.size();
}

bytes BlockDetails::rlp() const
{
	auto ret = rlpList(number, totalDifficulty, parent, children);
	size = ret.size();
	return ret;
}