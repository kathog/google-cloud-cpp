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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/os_config_connection.h"
#include "google/cloud/osconfig/internal/os_config_connection_impl.h"
#include "google/cloud/osconfig/internal/os_config_option_defaults.h"
#include "google/cloud/osconfig/internal/os_config_stub_factory.h"
#include "google/cloud/osconfig/os_config_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigServiceConnection::~OsConfigServiceConnection() = default;

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceConnection::ExecutePatchJob(
    google::cloud::osconfig::v1::ExecutePatchJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceConnection::GetPatchJob(
    google::cloud::osconfig::v1::GetPatchJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceConnection::CancelPatchJob(
    google::cloud::osconfig::v1::CancelPatchJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceConnection::ListPatchJobs(
    google::cloud::osconfig::v1::ListPatchJobsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::PatchJob>>(
      std::move(request),
      [](google::cloud::osconfig::v1::ListPatchJobsRequest const&) {
        return StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse>{};
      },
      [](google::cloud::osconfig::v1::ListPatchJobsResponse const&) {
        return std::vector<google::cloud::osconfig::v1::PatchJob>();
      });
}

StreamRange<google::cloud::osconfig::v1::PatchJobInstanceDetails>
OsConfigServiceConnection::ListPatchJobInstanceDetails(
    google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::PatchJobInstanceDetails>>(
      std::move(request),
      [](google::cloud::osconfig::v1::
             ListPatchJobInstanceDetailsRequest const&) {
        return StatusOr<
            google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>{};
      },
      [](google::cloud::osconfig::v1::
             ListPatchJobInstanceDetailsResponse const&) {
        return std::vector<
            google::cloud::osconfig::v1::PatchJobInstanceDetails>();
      });
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceConnection::CreatePatchDeployment(
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceConnection::GetPatchDeployment(
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceConnection::ListPatchDeployments(
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::osconfig::v1::PatchDeployment>>(
      std::move(request),
      [](google::cloud::osconfig::v1::ListPatchDeploymentsRequest const&) {
        return StatusOr<
            google::cloud::osconfig::v1::ListPatchDeploymentsResponse>{};
      },
      [](google::cloud::osconfig::v1::ListPatchDeploymentsResponse const&) {
        return std::vector<google::cloud::osconfig::v1::PatchDeployment>();
      });
}

Status OsConfigServiceConnection::DeletePatchDeployment(
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<OsConfigServiceConnection> MakeOsConfigServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 OsConfigServicePolicyOptionList>(options,
                                                                  __func__);
  options =
      osconfig_internal::OsConfigServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = osconfig_internal::CreateDefaultOsConfigServiceStub(
      background->cq(), options);
  return std::make_shared<osconfig_internal::OsConfigServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace osconfig_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<osconfig::OsConfigServiceConnection>
MakeOsConfigServiceConnection(std::shared_ptr<OsConfigServiceStub> stub,
                              Options options) {
  options = OsConfigServiceDefaultOptions(std::move(options));
  return std::make_shared<osconfig_internal::OsConfigServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_internal
}  // namespace cloud
}  // namespace google