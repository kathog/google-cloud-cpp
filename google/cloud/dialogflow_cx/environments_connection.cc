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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#include "google/cloud/dialogflow_cx/environments_connection.h"
#include "google/cloud/dialogflow_cx/environments_options.h"
#include "google/cloud/dialogflow_cx/internal/environments_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/environments_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/environments_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsConnection::~EnvironmentsConnection() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsConnection::ListEnvironments(
    google::cloud::dialogflow::cx::v3::
        ListEnvironmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Environment>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsConnection::GetEnvironment(
    google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
EnvironmentsConnection::CreateEnvironment(
    google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
EnvironmentsConnection::UpdateEnvironment(
    google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

Status EnvironmentsConnection::DeleteEnvironment(
    google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsConnection::LookupEnvironmentHistory(
    google::cloud::dialogflow::cx::v3::
        LookupEnvironmentHistoryRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Environment>>();
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>>
EnvironmentsConnection::RunContinuousTest(
    google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::dialogflow::cx::v3::ContinuousTestResult>
EnvironmentsConnection::ListContinuousTestResults(
    google::cloud::dialogflow::cx::v3::
        ListContinuousTestResultsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::ContinuousTestResult>>();
}

future<StatusOr<google::cloud::dialogflow::cx::v3::DeployFlowResponse>>
EnvironmentsConnection::DeployFlow(
    google::cloud::dialogflow::cx::v3::DeployFlowRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::DeployFlowResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<EnvironmentsConnection> MakeEnvironmentsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 EnvironmentsPolicyOptionList>(options,
                                                               __func__);
  options =
      dialogflow_cx_internal::EnvironmentsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_cx_internal::CreateDefaultEnvironmentsStub(
      background->cq(), options);
  return std::make_shared<dialogflow_cx_internal::EnvironmentsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<dialogflow_cx::EnvironmentsConnection>
MakeEnvironmentsConnection(std::shared_ptr<EnvironmentsStub> stub,
                           Options options) {
  options = EnvironmentsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<dialogflow_cx_internal::EnvironmentsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google