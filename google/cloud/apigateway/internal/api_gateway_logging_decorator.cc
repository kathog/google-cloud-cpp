// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/internal/api_gateway_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/apigateway/v1/apigateway_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace apigateway_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiGatewayServiceLogging::ApiGatewayServiceLogging(
    std::shared_ptr<ApiGatewayServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>
ApiGatewayServiceLogging::ListGateways(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListGatewaysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::apigateway::v1::ListGatewaysRequest const& request) {
        return child_->ListGateways(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceLogging::GetGateway(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::apigateway::v1::GetGatewayRequest const& request) {
        return child_->GetGateway(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
        return child_->AsyncCreateGateway(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
        return child_->AsyncUpdateGateway(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
        return child_->AsyncDeleteGateway(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::apigateway::v1::ListApisResponse>
ApiGatewayServiceLogging::ListApis(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListApisRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::apigateway::v1::ListApisRequest const& request) {
        return child_->ListApis(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apigateway::v1::Api> ApiGatewayServiceLogging::GetApi(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetApiRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::apigateway::v1::GetApiRequest const& request) {
        return child_->GetApi(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncCreateApi(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::CreateApiRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::apigateway::v1::CreateApiRequest const& request) {
        return child_->AsyncCreateApi(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncUpdateApi(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::UpdateApiRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::apigateway::v1::UpdateApiRequest const& request) {
        return child_->AsyncUpdateApi(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncDeleteApi(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::DeleteApiRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::apigateway::v1::DeleteApiRequest const& request) {
        return child_->AsyncDeleteApi(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
ApiGatewayServiceLogging::ListApiConfigs(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListApiConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::apigateway::v1::ListApiConfigsRequest const& request) {
        return child_->ListApiConfigs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceLogging::GetApiConfig(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
        return child_->GetApiConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncCreateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::CreateApiConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::apigateway::v1::CreateApiConfigRequest const&
                 request) {
        return child_->AsyncCreateApiConfig(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncUpdateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::apigateway::v1::UpdateApiConfigRequest const&
                 request) {
        return child_->AsyncUpdateApiConfig(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncDeleteApiConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::apigateway::v1::DeleteApiConfigRequest const&
                 request) {
        return child_->AsyncDeleteApiConfig(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> ApiGatewayServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_internal
}  // namespace cloud
}  // namespace google