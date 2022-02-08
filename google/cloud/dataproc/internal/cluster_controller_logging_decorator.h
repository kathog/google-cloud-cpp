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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_INTERNAL_CLUSTER_CONTROLLER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_INTERNAL_CLUSTER_CONTROLLER_LOGGING_DECORATOR_H

#include "google/cloud/dataproc/internal/cluster_controller_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClusterControllerLogging : public ClusterControllerStub {
 public:
  ~ClusterControllerLogging() override = default;
  ClusterControllerLogging(std::shared_ptr<ClusterControllerStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::StopClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::StartClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::Cluster> GetCluster(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::GetClusterRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::ListClustersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDiagnoseCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ClusterControllerStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ClusterControllerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_INTERNAL_CLUSTER_CONTROLLER_LOGGING_DECORATOR_H