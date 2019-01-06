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
/** @file FixedClient.h
 * @author Marek Kotewicz <marek@ethdev.com>
 * @date 2015
 */

#pragma once

#include <libvapory/ClientBase.h>
#include <libvapory/BlockChain.h>

namespace dev
{
namespace test
{

/**
 * @brief mvp implementation of ClientBase
 * Doesn't support mining interface
 */
class FixedClient: public dev::vap::ClientBase
{
public:
	FixedClient(vap::BlockChain const& _bc, vap::Block const& _block) :  m_bc(_bc), m_block(_block) {}
	virtual ~FixedClient() {}
	
	// stub
	virtual void flushTransactions() override {}
	virtual vap::BlockChain& bc() override { BOOST_THROW_EXCEPTION(InterfaceNotSupported("FixedClient::bc()")); }
	virtual vap::BlockChain const& bc() const override { return m_bc; }
	using ClientBase::block;
	virtual vap::Block block(h256 const& _h) const override;
	virtual vap::Block preSeal() const override { ReadGuard l(x_stateDB); return m_block; }
	virtual vap::Block postSeal() const override { ReadGuard l(x_stateDB); return m_block; }
	virtual void setAuthor(Address const& _us) override { WriteGuard l(x_stateDB); m_block.setAuthor(_us); }
	virtual void prepareForTransaction() override {}

private:
	vap::BlockChain const& m_bc;
	vap::Block m_block;
	mutable SharedMutex x_stateDB;			///< Lock on the state DB, effectively a lock on m_postSeal.
};

}
}
