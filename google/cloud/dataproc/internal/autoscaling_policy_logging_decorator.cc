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
// source: google/cloud/dataproc/v1/autoscaling_policies.proto

#include "google/cloud/dataproc/internal/autoscaling_policy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/autoscaling_policies.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalingPolicyServiceLogging::AutoscalingPolicyServiceLogging(
    std::shared_ptr<AutoscalingPolicyServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceLogging::CreateAutoscalingPolicy(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
                 request) {
        return child_->CreateAutoscalingPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceLogging::UpdateAutoscalingPolicy(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
                 request) {
        return child_->UpdateAutoscalingPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceLogging::GetAutoscalingPolicy(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const&
                 request) {
        return child_->GetAutoscalingPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::ListAutoscalingPoliciesResponse>
AutoscalingPolicyServiceLogging::ListAutoscalingPolicies(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest const&
                 request) {
        return child_->ListAutoscalingPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status AutoscalingPolicyServiceLogging::DeleteAutoscalingPolicy(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
                 request) {
        return child_->DeleteAutoscalingPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google
