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
// source: google/cloud/dialogflow/cx/v3/page.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_PAGES_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_PAGES_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/internal/pages_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/pages_stub.h"
#include "google/cloud/dialogflow_cx/pages_connection.h"
#include "google/cloud/dialogflow_cx/pages_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/pages_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PagesConnectionImpl : public dialogflow_cx::PagesConnection {
 public:
  ~PagesConnectionImpl() override = default;

  PagesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::PagesStub> stub, Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::cx::v3::Page> ListPages(
      google::cloud::dialogflow::cx::v3::ListPagesRequest request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Page> GetPage(
      google::cloud::dialogflow::cx::v3::GetPageRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Page> CreatePage(
      google::cloud::dialogflow::cx::v3::CreatePageRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Page> UpdatePage(
      google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request)
      override;

  Status DeletePage(google::cloud::dialogflow::cx::v3::DeletePageRequest const&
                        request) override;

 private:
  std::unique_ptr<dialogflow_cx::PagesRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_cx::PagesRetryPolicyOption>()) {
      return options.get<dialogflow_cx::PagesRetryPolicyOption>()->clone();
    }
    return options_.get<dialogflow_cx::PagesRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_cx::PagesBackoffPolicyOption>()) {
      return options.get<dialogflow_cx::PagesBackoffPolicyOption>()->clone();
    }
    return options_.get<dialogflow_cx::PagesBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<dialogflow_cx::PagesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_cx::PagesConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_cx::PagesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_cx::PagesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::PagesStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_PAGES_CONNECTION_IMPL_H