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
// source: google/cloud/dialogflow/v2/agent.proto

#include "google/cloud/dialogflow_es/internal/agents_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/agents_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsConnectionImpl::AgentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::AgentsStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), dialogflow_es_internal::AgentsDefaultOptions(
                                  AgentsConnection::options()))) {}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsConnectionImpl::GetAgent(
    google::cloud::dialogflow::v2::GetAgentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetAgentRequest const& request) {
        return stub_->GetAgent(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsConnectionImpl::SetAgent(
    google::cloud::dialogflow::v2::SetAgentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->SetAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::SetAgentRequest const& request) {
        return stub_->SetAgent(context, request);
      },
      request, __func__);
}

Status AgentsConnectionImpl::DeleteAgent(
    google::cloud::dialogflow::v2::DeleteAgentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::DeleteAgentRequest const& request) {
        return stub_->DeleteAgent(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::dialogflow::v2::Agent>
AgentsConnectionImpl::SearchAgents(
    google::cloud::dialogflow::v2::SearchAgentsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<dialogflow_es::AgentsRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->SearchAgents(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Agent>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dialogflow::v2::SearchAgentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::v2::SearchAgentsRequest const&
                       request) {
              return stub->SearchAgents(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::v2::SearchAgentsResponse r) {
        std::vector<google::cloud::dialogflow::v2::Agent> result(
            r.agents().size());
        auto& messages = *r.mutable_agents();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::protobuf::Struct>> AgentsConnectionImpl::TrainAgent(
    google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
        return stub->AsyncTrainAgent(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::protobuf::Struct>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->TrainAgent(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
AgentsConnectionImpl::ExportAgent(
    google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::ExportAgentResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
        return stub->AsyncExportAgent(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::v2::ExportAgentResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ExportAgent(request), polling_policy(), __func__);
}

future<StatusOr<google::protobuf::Struct>> AgentsConnectionImpl::ImportAgent(
    google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
        return stub->AsyncImportAgent(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::protobuf::Struct>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ImportAgent(request), polling_policy(), __func__);
}

future<StatusOr<google::protobuf::Struct>> AgentsConnectionImpl::RestoreAgent(
    google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
        return stub->AsyncRestoreAgent(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::protobuf::Struct>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->RestoreAgent(request), polling_policy(), __func__);
}

StatusOr<google::cloud::dialogflow::v2::ValidationResult>
AgentsConnectionImpl::GetValidationResult(
    google::cloud::dialogflow::v2::GetValidationResultRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetValidationResult(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetValidationResultRequest const&
                 request) {
        return stub_->GetValidationResult(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google