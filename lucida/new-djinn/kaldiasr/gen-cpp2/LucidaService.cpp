/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "LucidaService.h"

#include "LucidaService.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

std::unique_ptr<apache::thrift::AsyncProcessor> LucidaServiceSvIf::getProcessor() {
  return folly::make_unique<LucidaServiceAsyncProcessor>(this);
}

void LucidaServiceSvIf::create(std::unique_ptr<std::string> /*LUCID*/, std::unique_ptr< ::cpp2::QuerySpec> /*spec*/) {
  throw apache::thrift::TApplicationException("Function create is unimplemented");
}

folly::Future<folly::Unit> LucidaServiceSvIf::future_create(std::unique_ptr<std::string> LUCID, std::unique_ptr< ::cpp2::QuerySpec> spec) {
  return apache::thrift::detail::si::future([&] { return create(std::move(LUCID), std::move(spec)); });
}

void LucidaServiceSvIf::async_tm_create(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::string> LUCID, std::unique_ptr< ::cpp2::QuerySpec> spec) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_create(std::move(LUCID), std::move(spec)); });
}

void LucidaServiceSvIf::learn(std::unique_ptr<std::string> /*LUCID*/, std::unique_ptr< ::cpp2::QuerySpec> /*knowledge*/) {
  throw apache::thrift::TApplicationException("Function learn is unimplemented");
}

folly::Future<folly::Unit> LucidaServiceSvIf::future_learn(std::unique_ptr<std::string> LUCID, std::unique_ptr< ::cpp2::QuerySpec> knowledge) {
  return apache::thrift::detail::si::future([&] { return learn(std::move(LUCID), std::move(knowledge)); });
}

void LucidaServiceSvIf::async_tm_learn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::string> LUCID, std::unique_ptr< ::cpp2::QuerySpec> knowledge) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_learn(std::move(LUCID), std::move(knowledge)); });
}

void LucidaServiceSvIf::infer(std::string& /*_return*/, std::unique_ptr<std::string> /*LUCID*/, std::unique_ptr< ::cpp2::QuerySpec> /*query*/) {
  throw apache::thrift::TApplicationException("Function infer is unimplemented");
}

folly::Future<std::unique_ptr<std::string>> LucidaServiceSvIf::future_infer(std::unique_ptr<std::string> LUCID, std::unique_ptr< ::cpp2::QuerySpec> query) {
  return apache::thrift::detail::si::future_returning_uptr([&](std::string& _return) { infer(_return, std::move(LUCID), std::move(query)); });
}

void LucidaServiceSvIf::async_tm_infer(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback, std::unique_ptr<std::string> LUCID, std::unique_ptr< ::cpp2::QuerySpec> query) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_infer(std::move(LUCID), std::move(query)); });
}

void LucidaServiceSvNull::create(std::unique_ptr<std::string> /*LUCID*/, std::unique_ptr< ::cpp2::QuerySpec> /*spec*/) {}

void LucidaServiceSvNull::learn(std::unique_ptr<std::string> /*LUCID*/, std::unique_ptr< ::cpp2::QuerySpec> /*knowledge*/) {}

void LucidaServiceSvNull::infer(std::string& /*_return*/, std::unique_ptr<std::string> /*LUCID*/, std::unique_ptr< ::cpp2::QuerySpec> /*query*/) {}

const char* LucidaServiceAsyncProcessor::getServiceName() {
  return "LucidaService";
}

folly::Optional<std::string> LucidaServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void LucidaServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool LucidaServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> LucidaServiceAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> LucidaServiceAsyncProcessor::cacheKeyMap_ {};
const LucidaServiceAsyncProcessor::BinaryProtocolProcessMap& LucidaServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

LucidaServiceAsyncProcessor::BinaryProtocolProcessMap LucidaServiceAsyncProcessor::binaryProcessMap_ {
  {"create", &LucidaServiceAsyncProcessor::_processInThread_create<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"learn", &LucidaServiceAsyncProcessor::_processInThread_learn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"infer", &LucidaServiceAsyncProcessor::_processInThread_infer<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}
};
const LucidaServiceAsyncProcessor::CompactProtocolProcessMap& LucidaServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

LucidaServiceAsyncProcessor::CompactProtocolProcessMap LucidaServiceAsyncProcessor::compactProcessMap_ {
  {"create", &LucidaServiceAsyncProcessor::_processInThread_create<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"learn", &LucidaServiceAsyncProcessor::_processInThread_learn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"infer", &LucidaServiceAsyncProcessor::_processInThread_infer<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift