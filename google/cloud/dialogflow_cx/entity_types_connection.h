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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H

#include "google/cloud/dialogflow_cx/entity_types_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/internal/entity_types_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/entity_types_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using EntityTypesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_cx_internal::EntityTypesRetryTraits>;

using EntityTypesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_cx_internal::EntityTypesRetryTraits>;

using EntityTypesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_cx_internal::EntityTypesRetryTraits>;

class EntityTypesConnection {
 public:
  virtual ~EntityTypesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::EntityType>
  ListEntityTypes(
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
  CreateEntityType(
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
  UpdateEntityType(
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const&
          request);

  virtual Status DeleteEntityType(
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const&
          request);
};

std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<dialogflow_cx::EntityTypesConnection> MakeEntityTypesConnection(
    std::shared_ptr<EntityTypesStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H
