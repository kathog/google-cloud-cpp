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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_INTERNAL_CONTACT_CENTER_INSIGHTS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_INTERNAL_CONTACT_CENTER_INSIGHTS_LOGGING_DECORATOR_H

#include "google/cloud/contactcenterinsights/internal/contact_center_insights_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace contactcenterinsights_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContactCenterInsightsLogging : public ContactCenterInsightsStub {
 public:
  ~ContactCenterInsightsLogging() override = default;
  ContactCenterInsightsLogging(std::shared_ptr<ContactCenterInsightsStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  CreateConversation(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  UpdateConversation(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  GetConversation(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListConversationsResponse>
  ListConversations(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::ListConversationsRequest const&
          request) override;

  Status DeleteConversation(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAnalysis(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Analysis> GetAnalysis(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysesResponse>
  ListAnalyses(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
          request) override;

  Status DeleteAnalysis(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportInsightsData(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateIssueModel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
  UpdateIssueModel(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::IssueModel> GetIssueModel(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
  ListIssueModels(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteIssueModel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployIssueModel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeployIssueModel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Issue> GetIssue(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetIssueRequest const& request)
      override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
  ListIssues(grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
                 request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Issue> UpdateIssue(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::
               CalculateIssueModelStatsResponse>
  CalculateIssueModelStats(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::
          CalculateIssueModelStatsRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  CreatePhraseMatcher(grpc::ClientContext& context,
                      google::cloud::contactcenterinsights::v1::
                          CreatePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  GetPhraseMatcher(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse>
  ListPhraseMatchers(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest const&
          request) override;

  Status DeletePhraseMatcher(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::
          DeletePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  UpdatePhraseMatcher(grpc::ClientContext& context,
                      google::cloud::contactcenterinsights::v1::
                          UpdatePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
  CalculateStats(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Settings> GetSettings(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Settings> UpdateSettings(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> CreateView(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::CreateViewRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> GetView(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::GetViewRequest const& request)
      override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListViewsResponse>
  ListViews(grpc::ClientContext& context,
            google::cloud::contactcenterinsights::v1::ListViewsRequest const&
                request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> UpdateView(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
          request) override;

  Status DeleteView(
      grpc::ClientContext& context,
      google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ContactCenterInsightsStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ContactCenterInsightsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_INTERNAL_CONTACT_CENTER_INSIGHTS_LOGGING_DECORATOR_H