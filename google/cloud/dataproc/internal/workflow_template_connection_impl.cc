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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/internal/workflow_template_connection_impl.h"
#include "google/cloud/dataproc/internal/workflow_template_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowTemplateServiceConnectionImpl::WorkflowTemplateServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dataproc_internal::WorkflowTemplateServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          dataproc_internal::WorkflowTemplateServiceDefaultOptions(
              WorkflowTemplateServiceConnection::options()))) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const&
                 request) {
        return stub_->CreateWorkflowTemplate(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::GetWorkflowTemplateRequest const&
                 request) {
        return stub_->GetWorkflowTemplate(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceConnectionImpl::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::WorkflowMetadata>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
              request) {
        return stub->AsyncInstantiateWorkflowTemplate(cq, std::move(context),
                                                      request);
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
          google::cloud::dataproc::v1::WorkflowMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->InstantiateWorkflowTemplate(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceConnectionImpl::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::WorkflowMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::
                 InstantiateInlineWorkflowTemplateRequest const& request) {
        return stub->AsyncInstantiateInlineWorkflowTemplate(
            cq, std::move(context), request);
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
          google::cloud::dataproc::v1::WorkflowMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->InstantiateInlineWorkflowTemplate(request),
      polling_policy(), __func__);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const&
                 request) {
        return stub_->UpdateWorkflowTemplate(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::ListWorkflowTemplates(
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<dataproc::WorkflowTemplateServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListWorkflowTemplates(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const&
                    request) {
              return stub->ListWorkflowTemplates(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dataproc::v1::ListWorkflowTemplatesResponse r) {
        std::vector<google::cloud::dataproc::v1::WorkflowTemplate> result(
            r.templates().size());
        auto& messages = *r.mutable_templates();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status WorkflowTemplateServiceConnectionImpl::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const&
                 request) {
        return stub_->DeleteWorkflowTemplate(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google
