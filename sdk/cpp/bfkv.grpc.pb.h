// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: bfkv.proto
#ifndef GRPC_bfkv_2eproto__INCLUDED
#define GRPC_bfkv_2eproto__INCLUDED

#include "bfkv.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace bftrader {

class BfKvService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Ping(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::bftrader::BfPingData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfPingData>> AsyncPing(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfPingData>>(AsyncPingRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::protobuf::Any, ::google::protobuf::Any>> PingStreamCS(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::protobuf::Any, ::google::protobuf::Any>>(PingStreamCSRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::protobuf::Any, ::google::protobuf::Any>> AsyncPingStreamCS(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::protobuf::Any, ::google::protobuf::Any>>(AsyncPingStreamCSRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientWriterInterface< ::google::protobuf::Any>> PingStreamC(::grpc::ClientContext* context, ::google::protobuf::Any* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::google::protobuf::Any>>(PingStreamCRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::google::protobuf::Any>> AsyncPingStreamC(::grpc::ClientContext* context, ::google::protobuf::Any* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::google::protobuf::Any>>(AsyncPingStreamCRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::google::protobuf::Any>> PingStreamS(::grpc::ClientContext* context, const ::google::protobuf::Any& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::google::protobuf::Any>>(PingStreamSRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::protobuf::Any>> AsyncPingStreamS(::grpc::ClientContext* context, const ::google::protobuf::Any& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::google::protobuf::Any>>(AsyncPingStreamSRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status SetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncSetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncSetKvRaw(context, request, cq));
    }
    virtual ::grpc::Status GetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>> AsyncGetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>>(AsyncGetKvRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfPingData>* AsyncPingRaw(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::google::protobuf::Any, ::google::protobuf::Any>* PingStreamCSRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::google::protobuf::Any, ::google::protobuf::Any>* AsyncPingStreamCSRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientWriterInterface< ::google::protobuf::Any>* PingStreamCRaw(::grpc::ClientContext* context, ::google::protobuf::Any* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::google::protobuf::Any>* AsyncPingStreamCRaw(::grpc::ClientContext* context, ::google::protobuf::Any* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderInterface< ::google::protobuf::Any>* PingStreamSRaw(::grpc::ClientContext* context, const ::google::protobuf::Any& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::google::protobuf::Any>* AsyncPingStreamSRaw(::grpc::ClientContext* context, const ::google::protobuf::Any& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncSetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>* AsyncGetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Ping(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::bftrader::BfPingData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfPingData>> AsyncPing(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfPingData>>(AsyncPingRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>> PingStreamCS(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>>(PingStreamCSRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>> AsyncPingStreamCS(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>>(AsyncPingStreamCSRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::google::protobuf::Any>> PingStreamC(::grpc::ClientContext* context, ::google::protobuf::Any* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::google::protobuf::Any>>(PingStreamCRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::google::protobuf::Any>> AsyncPingStreamC(::grpc::ClientContext* context, ::google::protobuf::Any* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::google::protobuf::Any>>(AsyncPingStreamCRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReader< ::google::protobuf::Any>> PingStreamS(::grpc::ClientContext* context, const ::google::protobuf::Any& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::google::protobuf::Any>>(PingStreamSRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::google::protobuf::Any>> AsyncPingStreamS(::grpc::ClientContext* context, const ::google::protobuf::Any& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::google::protobuf::Any>>(AsyncPingStreamSRaw(context, request, cq, tag));
    }
    ::grpc::Status SetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncSetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncSetKvRaw(context, request, cq));
    }
    ::grpc::Status GetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>> AsyncGetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>>(AsyncGetKvRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfPingData>* AsyncPingRaw(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>* PingStreamCSRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>* AsyncPingStreamCSRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientWriter< ::google::protobuf::Any>* PingStreamCRaw(::grpc::ClientContext* context, ::google::protobuf::Any* response) GRPC_OVERRIDE;
    ::grpc::ClientAsyncWriter< ::google::protobuf::Any>* AsyncPingStreamCRaw(::grpc::ClientContext* context, ::google::protobuf::Any* response, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::google::protobuf::Any>* PingStreamSRaw(::grpc::ClientContext* context, const ::google::protobuf::Any& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::google::protobuf::Any>* AsyncPingStreamSRaw(::grpc::ClientContext* context, const ::google::protobuf::Any& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncSetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>* AsyncGetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_Ping_;
    const ::grpc::RpcMethod rpcmethod_PingStreamCS_;
    const ::grpc::RpcMethod rpcmethod_PingStreamC_;
    const ::grpc::RpcMethod rpcmethod_PingStreamS_;
    const ::grpc::RpcMethod rpcmethod_SetKv_;
    const ::grpc::RpcMethod rpcmethod_GetKv_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Ping(::grpc::ServerContext* context, const ::bftrader::BfPingData* request, ::bftrader::BfPingData* response);
    virtual ::grpc::Status PingStreamCS(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>* stream);
    virtual ::grpc::Status PingStreamC(::grpc::ServerContext* context, ::grpc::ServerReader< ::google::protobuf::Any>* reader, ::google::protobuf::Any* response);
    virtual ::grpc::Status PingStreamS(::grpc::ServerContext* context, const ::google::protobuf::Any* request, ::grpc::ServerWriter< ::google::protobuf::Any>* writer);
    virtual ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Ping : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_Ping() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Ping() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ping(::grpc::ServerContext* context, const ::bftrader::BfPingData* request, ::bftrader::BfPingData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPing(::grpc::ServerContext* context, ::bftrader::BfPingData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfPingData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PingStreamCS : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_PingStreamCS() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_PingStreamCS() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PingStreamCS(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPingStreamCS(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PingStreamC : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_PingStreamC() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_PingStreamC() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PingStreamC(::grpc::ServerContext* context, ::grpc::ServerReader< ::google::protobuf::Any>* reader, ::google::protobuf::Any* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPingStreamC(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::google::protobuf::Any, ::google::protobuf::Any>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(2, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PingStreamS : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_PingStreamS() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_PingStreamS() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PingStreamS(::grpc::ServerContext* context, const ::google::protobuf::Any* request, ::grpc::ServerWriter< ::google::protobuf::Any>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPingStreamS(::grpc::ServerContext* context, ::google::protobuf::Any* request, ::grpc::ServerAsyncWriter< ::google::protobuf::Any>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(3, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SetKv() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_SetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetKv(::grpc::ServerContext* context, ::bftrader::BfKvData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetKv() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_GetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetKv(::grpc::ServerContext* context, ::bftrader::BfKvData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfKvData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Ping<WithAsyncMethod_PingStreamCS<WithAsyncMethod_PingStreamC<WithAsyncMethod_PingStreamS<WithAsyncMethod_SetKv<WithAsyncMethod_GetKv<Service > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Ping : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_Ping() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Ping() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ping(::grpc::ServerContext* context, const ::bftrader::BfPingData* request, ::bftrader::BfPingData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PingStreamCS : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_PingStreamCS() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_PingStreamCS() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PingStreamCS(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::protobuf::Any, ::google::protobuf::Any>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PingStreamC : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_PingStreamC() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_PingStreamC() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PingStreamC(::grpc::ServerContext* context, ::grpc::ServerReader< ::google::protobuf::Any>* reader, ::google::protobuf::Any* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PingStreamS : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_PingStreamS() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_PingStreamS() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PingStreamS(::grpc::ServerContext* context, const ::google::protobuf::Any* request, ::grpc::ServerWriter< ::google::protobuf::Any>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SetKv() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_SetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetKv() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_GetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace bftrader


#endif  // GRPC_bfkv_2eproto__INCLUDED
