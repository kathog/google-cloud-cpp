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
// source: google/api/servicecontrol/v1/service_controller.proto

#include "google/cloud/servicecontrol/service_controller_client.h"
#include "google/cloud/servicecontrol/internal/service_controller_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicecontrol {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceControllerClient::ServiceControllerClient(
    std::shared_ptr<ServiceControllerConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(servicecontrol_internal::ServiceControllerDefaultOptions(
          std::move(options))) {}
ServiceControllerClient::~ServiceControllerClient() = default;

StatusOr<google::api::servicecontrol::v1::CheckResponse>
ServiceControllerClient::Check(
    google::api::servicecontrol::v1::CheckRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->Check(request);
}

StatusOr<google::api::servicecontrol::v1::ReportResponse>
ServiceControllerClient::Report(
    google::api::servicecontrol::v1::ReportRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->Report(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol
}  // namespace cloud
}  // namespace google