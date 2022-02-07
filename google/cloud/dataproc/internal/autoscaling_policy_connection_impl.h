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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_INTERNAL_AUTOSCALING_POLICY_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_INTERNAL_AUTOSCALING_POLICY_CONNECTION_IMPL_H

#include "google/cloud/dataproc/autoscaling_policy_connection.h"
#include "google/cloud/dataproc/autoscaling_policy_connection_idempotency_policy.h"
#include "google/cloud/dataproc/autoscaling_policy_options.h"
#include "google/cloud/dataproc/internal/autoscaling_policy_retry_traits.h"
#include "google/cloud/dataproc/internal/autoscaling_policy_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoscalingPolicyServiceConnectionImpl
    : public dataproc::AutoscalingPolicyServiceConnection {
 public:
  ~AutoscalingPolicyServiceConnectionImpl() override = default;

  AutoscalingPolicyServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dataproc_internal::AutoscalingPolicyServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  CreateAutoscalingPolicy(
      google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
          request) override;

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  UpdateAutoscalingPolicy(
      google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
          request) override;

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy> GetAutoscalingPolicy(
      google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request)
      override;

  StreamRange<google::cloud::dataproc::v1::AutoscalingPolicy>
  ListAutoscalingPolicies(
      google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest request)
      override;

  Status DeleteAutoscalingPolicy(
      google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
          request) override;

 private:
  std::unique_ptr<dataproc::AutoscalingPolicyServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dataproc::AutoscalingPolicyServiceRetryPolicyOption>()) {
      return options.get<dataproc::AutoscalingPolicyServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<dataproc::AutoscalingPolicyServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dataproc::AutoscalingPolicyServiceBackoffPolicyOption>()) {
      return options
          .get<dataproc::AutoscalingPolicyServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<dataproc::AutoscalingPolicyServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<dataproc::AutoscalingPolicyServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            dataproc::
                AutoscalingPolicyServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dataproc::
                   AutoscalingPolicyServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dataproc::
                 AutoscalingPolicyServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dataproc_internal::AutoscalingPolicyServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_INTERNAL_AUTOSCALING_POLICY_CONNECTION_IMPL_H
