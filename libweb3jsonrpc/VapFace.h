/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_DEV_RPC_VAPFACE_H_
#define JSONRPC_CPP_STUB_DEV_RPC_VAPFACE_H_

#include "ModularServer.h"

namespace dev {
    namespace rpc {
        class VapFace : public ServerInterface<VapFace>
        {
            public:
                VapFace()
                {
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_protocolVersion", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_protocolVersionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_hashrate", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_hashrateI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_coinbase", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_coinbaseI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_mining", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN,  NULL), &dev::rpc::VapFace::vap_miningI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_gasPrice", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_gasPriceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_accounts", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &dev::rpc::VapFace::vap_accountsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_blockNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_blockNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getBalance", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getBalanceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getStorageAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getStorageAtI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getStorageRoot", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getStorageRootI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getTransactionCount", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getTransactionCountI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_pendingTransactions", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_pendingTransactionsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getBlockTransactionCountByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getBlockTransactionCountByHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getBlockTransactionCountByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getBlockTransactionCountByNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getUncleCountByBlockHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getUncleCountByBlockHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getUncleCountByBlockNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getUncleCountByBlockNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getCode", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getCodeI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_sendTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_sendTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_call", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_callI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_flush", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN,  NULL), &dev::rpc::VapFace::vap_flushI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getBlockByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_BOOLEAN, NULL), &dev::rpc::VapFace::vap_getBlockByHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getBlockByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_BOOLEAN, NULL), &dev::rpc::VapFace::vap_getBlockByNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getTransactionByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getTransactionByHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getTransactionByBlockHashAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getTransactionByBlockHashAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getTransactionByBlockNumberAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getTransactionByBlockNumberAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getTransactionReceipt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getTransactionReceiptI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getUncleByBlockHashAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getUncleByBlockHashAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getUncleByBlockNumberAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getUncleByBlockNumberAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_newFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_newFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_newFilterEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_newFilterExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_newBlockFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_newBlockFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_newPendingTransactionFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::VapFace::vap_newPendingTransactionFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_uninstallFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_uninstallFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getFilterChanges", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getFilterChangesI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getFilterChangesEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getFilterChangesExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getFilterLogs", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getFilterLogsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getFilterLogsEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_getFilterLogsExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getLogs", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_getLogsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getLogsEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_getLogsExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_getWork", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &dev::rpc::VapFace::vap_getWorkI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_submitWork", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_submitWorkI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_submitHashrate", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_submitHashrateI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_register", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_registerI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_unregister", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_unregisterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_fetchQueuedTransactions", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_fetchQueuedTransactionsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_signTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_signTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_inspectTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_inspectTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_sendRawTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_sendRawTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_notePassword", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::VapFace::vap_notePasswordI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_syncing", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT,  NULL), &dev::rpc::VapFace::vap_syncingI);
                    this->bindAndAddMethod(jsonrpc::Procedure("vap_estimateGas", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::VapFace::vap_estimateGasI);
                }

                inline virtual void vap_protocolVersionI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_protocolVersion();
                }
                inline virtual void vap_hashrateI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_hashrate();
                }
                inline virtual void vap_coinbaseI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_coinbase();
                }
                inline virtual void vap_miningI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_mining();
                }
                inline virtual void vap_gasPriceI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_gasPrice();
                }
                inline virtual void vap_accountsI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_accounts();
                }
                inline virtual void vap_blockNumberI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_blockNumber();
                }
                inline virtual void vap_getBalanceI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getBalance(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_getStorageAtI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getStorageAt(request[0u].asString(), request[1u].asString(), request[2u].asString());
                }
                inline virtual void vap_getStorageRootI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getStorageRoot(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_getTransactionCountI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getTransactionCount(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_pendingTransactionsI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_pendingTransactions();
                }
                inline virtual void vap_getBlockTransactionCountByHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getBlockTransactionCountByHash(request[0u].asString());
                }
                inline virtual void vap_getBlockTransactionCountByNumberI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getBlockTransactionCountByNumber(request[0u].asString());
                }
                inline virtual void vap_getUncleCountByBlockHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getUncleCountByBlockHash(request[0u].asString());
                }
                inline virtual void vap_getUncleCountByBlockNumberI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getUncleCountByBlockNumber(request[0u].asString());
                }
                inline virtual void vap_getCodeI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getCode(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_sendTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_sendTransaction(request[0u]);
                }
                inline virtual void vap_callI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_call(request[0u], request[1u].asString());
                }
                inline virtual void vap_flushI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_flush();
                }
                inline virtual void vap_getBlockByHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getBlockByHash(request[0u].asString(), request[1u].asBool());
                }
                inline virtual void vap_getBlockByNumberI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getBlockByNumber(request[0u].asString(), request[1u].asBool());
                }
                inline virtual void vap_getTransactionByHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getTransactionByHash(request[0u].asString());
                }
                inline virtual void vap_getTransactionByBlockHashAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getTransactionByBlockHashAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_getTransactionByBlockNumberAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getTransactionByBlockNumberAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_getTransactionReceiptI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getTransactionReceipt(request[0u].asString());
                }
                inline virtual void vap_getUncleByBlockHashAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getUncleByBlockHashAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_getUncleByBlockNumberAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getUncleByBlockNumberAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_newFilterI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_newFilter(request[0u]);
                }
                inline virtual void vap_newFilterExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_newFilterEx(request[0u]);
                }
                inline virtual void vap_newBlockFilterI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_newBlockFilter();
                }
                inline virtual void vap_newPendingTransactionFilterI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_newPendingTransactionFilter();
                }
                inline virtual void vap_uninstallFilterI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_uninstallFilter(request[0u].asString());
                }
                inline virtual void vap_getFilterChangesI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getFilterChanges(request[0u].asString());
                }
                inline virtual void vap_getFilterChangesExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getFilterChangesEx(request[0u].asString());
                }
                inline virtual void vap_getFilterLogsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getFilterLogs(request[0u].asString());
                }
                inline virtual void vap_getFilterLogsExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getFilterLogsEx(request[0u].asString());
                }
                inline virtual void vap_getLogsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getLogs(request[0u]);
                }
                inline virtual void vap_getLogsExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_getLogsEx(request[0u]);
                }
                inline virtual void vap_getWorkI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_getWork();
                }
                inline virtual void vap_submitWorkI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_submitWork(request[0u].asString(), request[1u].asString(), request[2u].asString());
                }
                inline virtual void vap_submitHashrateI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_submitHashrate(request[0u].asString(), request[1u].asString());
                }
                inline virtual void vap_registerI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_register(request[0u].asString());
                }
                inline virtual void vap_unregisterI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_unregister(request[0u].asString());
                }
                inline virtual void vap_fetchQueuedTransactionsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_fetchQueuedTransactions(request[0u].asString());
                }
                inline virtual void vap_signTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_signTransaction(request[0u]);
                }
                inline virtual void vap_inspectTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_inspectTransaction(request[0u].asString());
                }
                inline virtual void vap_sendRawTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_sendRawTransaction(request[0u].asString());
                }
                inline virtual void vap_notePasswordI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_notePassword(request[0u].asString());
                }
                inline virtual void vap_syncingI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->vap_syncing();
                }
                inline virtual void vap_estimateGasI(const Json::Value &request, Json::Value &response)
                {
                    response = this->vap_estimateGas(request[0u]);
                }
                virtual std::string vap_protocolVersion() = 0;
                virtual std::string vap_hashrate() = 0;
                virtual std::string vap_coinbase() = 0;
                virtual bool vap_mining() = 0;
                virtual std::string vap_gasPrice() = 0;
                virtual Json::Value vap_accounts() = 0;
                virtual std::string vap_blockNumber() = 0;
                virtual std::string vap_getBalance(const std::string& param1, const std::string& param2) = 0;
                virtual std::string vap_getStorageAt(const std::string& param1, const std::string& param2, const std::string& param3) = 0;
                virtual std::string vap_getStorageRoot(const std::string& param1, const std::string& param2) = 0;
                virtual std::string vap_getTransactionCount(const std::string& param1, const std::string& param2) = 0;
                virtual std::string vap_pendingTransactions() = 0;
                virtual Json::Value vap_getBlockTransactionCountByHash(const std::string& param1) = 0;
                virtual Json::Value vap_getBlockTransactionCountByNumber(const std::string& param1) = 0;
                virtual Json::Value vap_getUncleCountByBlockHash(const std::string& param1) = 0;
                virtual Json::Value vap_getUncleCountByBlockNumber(const std::string& param1) = 0;
                virtual std::string vap_getCode(const std::string& param1, const std::string& param2) = 0;
                virtual std::string vap_sendTransaction(const Json::Value& param1) = 0;
                virtual std::string vap_call(const Json::Value& param1, const std::string& param2) = 0;
                virtual bool vap_flush() = 0;
                virtual Json::Value vap_getBlockByHash(const std::string& param1, bool param2) = 0;
                virtual Json::Value vap_getBlockByNumber(const std::string& param1, bool param2) = 0;
                virtual Json::Value vap_getTransactionByHash(const std::string& param1) = 0;
                virtual Json::Value vap_getTransactionByBlockHashAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value vap_getTransactionByBlockNumberAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value vap_getTransactionReceipt(const std::string& param1) = 0;
                virtual Json::Value vap_getUncleByBlockHashAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value vap_getUncleByBlockNumberAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual std::string vap_newFilter(const Json::Value& param1) = 0;
                virtual std::string vap_newFilterEx(const Json::Value& param1) = 0;
                virtual std::string vap_newBlockFilter() = 0;
                virtual std::string vap_newPendingTransactionFilter() = 0;
                virtual bool vap_uninstallFilter(const std::string& param1) = 0;
                virtual Json::Value vap_getFilterChanges(const std::string& param1) = 0;
                virtual Json::Value vap_getFilterChangesEx(const std::string& param1) = 0;
                virtual Json::Value vap_getFilterLogs(const std::string& param1) = 0;
                virtual Json::Value vap_getFilterLogsEx(const std::string& param1) = 0;
                virtual Json::Value vap_getLogs(const Json::Value& param1) = 0;
                virtual Json::Value vap_getLogsEx(const Json::Value& param1) = 0;
                virtual Json::Value vap_getWork() = 0;
                virtual bool vap_submitWork(const std::string& param1, const std::string& param2, const std::string& param3) = 0;
                virtual bool vap_submitHashrate(const std::string& param1, const std::string& param2) = 0;
                virtual std::string vap_register(const std::string& param1) = 0;
                virtual bool vap_unregister(const std::string& param1) = 0;
                virtual Json::Value vap_fetchQueuedTransactions(const std::string& param1) = 0;
                virtual std::string vap_signTransaction(const Json::Value& param1) = 0;
                virtual Json::Value vap_inspectTransaction(const std::string& param1) = 0;
                virtual std::string vap_sendRawTransaction(const std::string& param1) = 0;
                virtual bool vap_notePassword(const std::string& param1) = 0;
                virtual Json::Value vap_syncing() = 0;
                virtual std::string vap_estimateGas(const Json::Value& param1) = 0;
        };

    }
}
#endif //JSONRPC_CPP_STUB_DEV_RPC_VAPFACE_H_
