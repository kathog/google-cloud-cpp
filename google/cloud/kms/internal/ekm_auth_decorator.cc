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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/internal/ekm_auth_decorator.h"
#include <google/cloud/kms/v1/ekm_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EkmServiceAuth::EkmServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EkmServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::kms::v1::ListEkmConnectionsResponse>
EkmServiceAuth::ListEkmConnections(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListEkmConnectionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEkmConnections(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceAuth::GetEkmConnection(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEkmConnection(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceAuth::CreateEkmConnection(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEkmConnection(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceAuth::UpdateEkmConnection(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateEkmConnection(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_internal
}  // namespace cloud
}  // namespace google