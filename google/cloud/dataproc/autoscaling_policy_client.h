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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_AUTOSCALING_POLICY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_AUTOSCALING_POLICY_CLIENT_H

#include "google/cloud/dataproc/autoscaling_policy_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The API interface for managing autoscaling policies in the
/// Dataproc API.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class AutoscalingPolicyServiceClient {
 public:
  explicit AutoscalingPolicyServiceClient(
      std::shared_ptr<AutoscalingPolicyServiceConnection> connection,
      Options options = {});
  ~AutoscalingPolicyServiceClient();

  //@{
  // @name Copy and move support
  AutoscalingPolicyServiceClient(AutoscalingPolicyServiceClient const&) =
      default;
  AutoscalingPolicyServiceClient& operator=(
      AutoscalingPolicyServiceClient const&) = default;
  AutoscalingPolicyServiceClient(AutoscalingPolicyServiceClient&&) = default;
  AutoscalingPolicyServiceClient& operator=(AutoscalingPolicyServiceClient&&) =
      default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(AutoscalingPolicyServiceClient const& a,
                         AutoscalingPolicyServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AutoscalingPolicyServiceClient const& a,
                         AutoscalingPolicyServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Creates new autoscaling policy.
  ///
  /// @param parent  Required. The "resource name" of the region or location, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.autoscalingPolicies.create`, the resource name
  ///    of the region has the following format:
  ///    `projects/{project_id}/regions/{region}`
  ///  * For `projects.locations.autoscalingPolicies.create`, the resource name
  ///    of the location has the following format:
  ///    `projects/{project_id}/locations/{location}`
  /// @param policy  Required. The autoscaling policy to create.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.CreateAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L258}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  CreateAutoscalingPolicy(
      std::string const& parent,
      google::cloud::dataproc::v1::AutoscalingPolicy const& policy,
      Options options = {});

  ///
  /// Creates new autoscaling policy.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest,google/cloud/dataproc/v1/autoscaling_policies.proto#L258}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.CreateAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L258}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  CreateAutoscalingPolicy(
      google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
          request,
      Options options = {});

  ///
  /// Updates (replaces) autoscaling policy.
  ///
  /// Disabled check for update_mask, because all updates will be full
  /// replacements.
  ///
  /// @param policy  Required. The updated autoscaling policy.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.UpdateAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L301}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  UpdateAutoscalingPolicy(
      google::cloud::dataproc::v1::AutoscalingPolicy const& policy,
      Options options = {});

  ///
  /// Updates (replaces) autoscaling policy.
  ///
  /// Disabled check for update_mask, because all updates will be full
  /// replacements.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest,google/cloud/dataproc/v1/autoscaling_policies.proto#L301}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.UpdateAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L301}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  UpdateAutoscalingPolicy(
      google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
          request,
      Options options = {});

  ///
  /// Retrieves autoscaling policy.
  ///
  /// @param name  Required. The "resource name" of the autoscaling policy, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.autoscalingPolicies.get`, the resource name
  ///    of the policy has the following format:
  ///    `projects/{project_id}/regions/{region}/autoscalingPolicies/{policy_id}`
  ///  * For `projects.locations.autoscalingPolicies.get`, the resource name
  ///    of the policy has the following format:
  ///    `projects/{project_id}/locations/{location}/autoscalingPolicies/{policy_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.GetAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L281}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy> GetAutoscalingPolicy(
      std::string const& name, Options options = {});

  ///
  /// Retrieves autoscaling policy.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::GetAutoscalingPolicyRequest,google/cloud/dataproc/v1/autoscaling_policies.proto#L281}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.GetAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L281}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy> GetAutoscalingPolicy(
      google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request,
      Options options = {});

  ///
  /// Lists autoscaling policies in the project.
  ///
  /// @param parent  Required. The "resource name" of the region or location, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.autoscalingPolicies.list`, the resource name
  ///    of the region has the following format:
  ///    `projects/{project_id}/regions/{region}`
  ///  * For `projects.locations.autoscalingPolicies.list`, the resource name
  ///    of the location has the following format:
  ///    `projects/{project_id}/locations/{location}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.ListAutoscalingPoliciesRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L329}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StreamRange<google::cloud::dataproc::v1::AutoscalingPolicy>
  ListAutoscalingPolicies(std::string const& parent, Options options = {});

  ///
  /// Lists autoscaling policies in the project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest,google/cloud/dataproc/v1/autoscaling_policies.proto#L329}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::AutoscalingPolicy,google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  /// [google.cloud.dataproc.v1.ListAutoscalingPoliciesRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L329}
  /// [google.cloud.dataproc.v1.AutoscalingPolicy]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L106}
  ///
  StreamRange<google::cloud::dataproc::v1::AutoscalingPolicy>
  ListAutoscalingPolicies(
      google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest request,
      Options options = {});

  ///
  /// Deletes an autoscaling policy. It is an error to delete an autoscaling
  /// policy that is in use by one or more clusters.
  ///
  /// @param name  Required. The "resource name" of the autoscaling policy, as
  /// described
  ///  in https://cloud.google.com/apis/design/resource_names.
  ///  * For `projects.regions.autoscalingPolicies.delete`, the resource name
  ///    of the policy has the following format:
  ///    `projects/{project_id}/regions/{region}/autoscalingPolicies/{policy_id}`
  ///  * For `projects.locations.autoscalingPolicies.delete`, the resource name
  ///    of the policy has the following format:
  ///    `projects/{project_id}/locations/{location}/autoscalingPolicies/{policy_id}`
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.dataproc.v1.DeleteAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L309}
  ///
  Status DeleteAutoscalingPolicy(std::string const& name, Options options = {});

  ///
  /// Deletes an autoscaling policy. It is an error to delete an autoscaling
  /// policy that is in use by one or more clusters.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest,google/cloud/dataproc/v1/autoscaling_policies.proto#L309}
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.dataproc.v1.DeleteAutoscalingPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/autoscaling_policies.proto#L309}
  ///
  Status DeleteAutoscalingPolicy(
      google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
          request,
      Options options = {});

 private:
  std::shared_ptr<AutoscalingPolicyServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_AUTOSCALING_POLICY_CLIENT_H
