// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tn_communication.proto

#include "tn_communication.pb.h"
#include "tn_communication.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace tn_communication {

static const char* TNCommunication_method_names[] = {
  "/tn_communication.TNCommunication/Add",
  "/tn_communication.TNCommunication/Sub",
  "/tn_communication.TNCommunication/Mul",
  "/tn_communication.TNCommunication/Div",
  "/tn_communication.TNCommunication/Mod",
};

std::unique_ptr< TNCommunication::Stub> TNCommunication::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TNCommunication::Stub> stub(new TNCommunication::Stub(channel, options));
  return stub;
}

TNCommunication::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Add_(TNCommunication_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Sub_(TNCommunication_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Mul_(TNCommunication_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Div_(TNCommunication_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Mod_(TNCommunication_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TNCommunication::Stub::Add(::grpc::ClientContext* context, const ::tn_communication::AddRequest& request, ::tn_communication::AddResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tn_communication::AddRequest, ::tn_communication::AddResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Add_, context, request, response);
}

void TNCommunication::Stub::async::Add(::grpc::ClientContext* context, const ::tn_communication::AddRequest* request, ::tn_communication::AddResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tn_communication::AddRequest, ::tn_communication::AddResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Add_, context, request, response, std::move(f));
}

void TNCommunication::Stub::async::Add(::grpc::ClientContext* context, const ::tn_communication::AddRequest* request, ::tn_communication::AddResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Add_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::AddResponse>* TNCommunication::Stub::PrepareAsyncAddRaw(::grpc::ClientContext* context, const ::tn_communication::AddRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tn_communication::AddResponse, ::tn_communication::AddRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Add_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::AddResponse>* TNCommunication::Stub::AsyncAddRaw(::grpc::ClientContext* context, const ::tn_communication::AddRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAddRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TNCommunication::Stub::Sub(::grpc::ClientContext* context, const ::tn_communication::SubRequest& request, ::tn_communication::SubResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tn_communication::SubRequest, ::tn_communication::SubResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Sub_, context, request, response);
}

void TNCommunication::Stub::async::Sub(::grpc::ClientContext* context, const ::tn_communication::SubRequest* request, ::tn_communication::SubResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tn_communication::SubRequest, ::tn_communication::SubResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Sub_, context, request, response, std::move(f));
}

void TNCommunication::Stub::async::Sub(::grpc::ClientContext* context, const ::tn_communication::SubRequest* request, ::tn_communication::SubResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Sub_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::SubResponse>* TNCommunication::Stub::PrepareAsyncSubRaw(::grpc::ClientContext* context, const ::tn_communication::SubRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tn_communication::SubResponse, ::tn_communication::SubRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Sub_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::SubResponse>* TNCommunication::Stub::AsyncSubRaw(::grpc::ClientContext* context, const ::tn_communication::SubRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSubRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TNCommunication::Stub::Mul(::grpc::ClientContext* context, const ::tn_communication::MulRequest& request, ::tn_communication::MulResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tn_communication::MulRequest, ::tn_communication::MulResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Mul_, context, request, response);
}

void TNCommunication::Stub::async::Mul(::grpc::ClientContext* context, const ::tn_communication::MulRequest* request, ::tn_communication::MulResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tn_communication::MulRequest, ::tn_communication::MulResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Mul_, context, request, response, std::move(f));
}

void TNCommunication::Stub::async::Mul(::grpc::ClientContext* context, const ::tn_communication::MulRequest* request, ::tn_communication::MulResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Mul_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::MulResponse>* TNCommunication::Stub::PrepareAsyncMulRaw(::grpc::ClientContext* context, const ::tn_communication::MulRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tn_communication::MulResponse, ::tn_communication::MulRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Mul_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::MulResponse>* TNCommunication::Stub::AsyncMulRaw(::grpc::ClientContext* context, const ::tn_communication::MulRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMulRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TNCommunication::Stub::Div(::grpc::ClientContext* context, const ::tn_communication::DivRequest& request, ::tn_communication::DivResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tn_communication::DivRequest, ::tn_communication::DivResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Div_, context, request, response);
}

void TNCommunication::Stub::async::Div(::grpc::ClientContext* context, const ::tn_communication::DivRequest* request, ::tn_communication::DivResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tn_communication::DivRequest, ::tn_communication::DivResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Div_, context, request, response, std::move(f));
}

void TNCommunication::Stub::async::Div(::grpc::ClientContext* context, const ::tn_communication::DivRequest* request, ::tn_communication::DivResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Div_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::DivResponse>* TNCommunication::Stub::PrepareAsyncDivRaw(::grpc::ClientContext* context, const ::tn_communication::DivRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tn_communication::DivResponse, ::tn_communication::DivRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Div_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::DivResponse>* TNCommunication::Stub::AsyncDivRaw(::grpc::ClientContext* context, const ::tn_communication::DivRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDivRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TNCommunication::Stub::Mod(::grpc::ClientContext* context, const ::tn_communication::ModRequest& request, ::tn_communication::ModResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tn_communication::ModRequest, ::tn_communication::ModResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Mod_, context, request, response);
}

void TNCommunication::Stub::async::Mod(::grpc::ClientContext* context, const ::tn_communication::ModRequest* request, ::tn_communication::ModResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tn_communication::ModRequest, ::tn_communication::ModResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Mod_, context, request, response, std::move(f));
}

void TNCommunication::Stub::async::Mod(::grpc::ClientContext* context, const ::tn_communication::ModRequest* request, ::tn_communication::ModResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Mod_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::ModResponse>* TNCommunication::Stub::PrepareAsyncModRaw(::grpc::ClientContext* context, const ::tn_communication::ModRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tn_communication::ModResponse, ::tn_communication::ModRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Mod_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tn_communication::ModResponse>* TNCommunication::Stub::AsyncModRaw(::grpc::ClientContext* context, const ::tn_communication::ModRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncModRaw(context, request, cq);
  result->StartCall();
  return result;
}

TNCommunication::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TNCommunication_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TNCommunication::Service, ::tn_communication::AddRequest, ::tn_communication::AddResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TNCommunication::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tn_communication::AddRequest* req,
             ::tn_communication::AddResponse* resp) {
               return service->Add(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TNCommunication_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TNCommunication::Service, ::tn_communication::SubRequest, ::tn_communication::SubResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TNCommunication::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tn_communication::SubRequest* req,
             ::tn_communication::SubResponse* resp) {
               return service->Sub(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TNCommunication_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TNCommunication::Service, ::tn_communication::MulRequest, ::tn_communication::MulResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TNCommunication::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tn_communication::MulRequest* req,
             ::tn_communication::MulResponse* resp) {
               return service->Mul(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TNCommunication_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TNCommunication::Service, ::tn_communication::DivRequest, ::tn_communication::DivResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TNCommunication::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tn_communication::DivRequest* req,
             ::tn_communication::DivResponse* resp) {
               return service->Div(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TNCommunication_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TNCommunication::Service, ::tn_communication::ModRequest, ::tn_communication::ModResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TNCommunication::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tn_communication::ModRequest* req,
             ::tn_communication::ModResponse* resp) {
               return service->Mod(ctx, req, resp);
             }, this)));
}

TNCommunication::Service::~Service() {
}

::grpc::Status TNCommunication::Service::Add(::grpc::ServerContext* context, const ::tn_communication::AddRequest* request, ::tn_communication::AddResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TNCommunication::Service::Sub(::grpc::ServerContext* context, const ::tn_communication::SubRequest* request, ::tn_communication::SubResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TNCommunication::Service::Mul(::grpc::ServerContext* context, const ::tn_communication::MulRequest* request, ::tn_communication::MulResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TNCommunication::Service::Div(::grpc::ServerContext* context, const ::tn_communication::DivRequest* request, ::tn_communication::DivResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TNCommunication::Service::Mod(::grpc::ServerContext* context, const ::tn_communication::ModRequest* request, ::tn_communication::ModResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tn_communication

