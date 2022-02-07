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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/workflow_template_client.h"
#include "google/cloud/dataproc/internal/workflow_template_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowTemplateServiceClient::WorkflowTemplateServiceClient(
    std::shared_ptr<WorkflowTemplateServiceConnection> connection,
    Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options),
          dataproc_internal::WorkflowTemplateServiceDefaultOptions(
              connection_->options()))) {}
WorkflowTemplateServiceClient::~WorkflowTemplateServiceClient() = default;

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::CreateWorkflowTemplate(
    std::string const& parent,
    google::cloud::dataproc::v1::WorkflowTemplate const& template_,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::CreateWorkflowTemplateRequest request;
  request.set_parent(parent);
  *request.mutable_template_() = template_;
  return connection_->CreateWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::GetWorkflowTemplate(std::string const& name,
                                                   Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::GetWorkflowTemplateRequest request;
  request.set_name(name);
  return connection_->GetWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceClient::InstantiateWorkflowTemplate(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest request;
  request.set_name(name);
  return connection_->InstantiateWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceClient::InstantiateWorkflowTemplate(
    std::string const& name,
    std::map<std::string, std::string> const& parameters, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest request;
  request.set_name(name);
  *request.mutable_parameters() = {parameters.begin(), parameters.end()};
  return connection_->InstantiateWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceClient::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->InstantiateWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceClient::InstantiateInlineWorkflowTemplate(
    std::string const& parent,
    google::cloud::dataproc::v1::WorkflowTemplate const& template_,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest request;
  request.set_parent(parent);
  *request.mutable_template_() = template_;
  return connection_->InstantiateInlineWorkflowTemplate(request);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceClient::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->InstantiateInlineWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::WorkflowTemplate const& template_,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest request;
  *request.mutable_template_() = template_;
  return connection_->UpdateWorkflowTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateWorkflowTemplate(request);
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::ListWorkflowTemplates(std::string const& parent,
                                                     Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request;
  request.set_parent(parent);
  return connection_->ListWorkflowTemplates(request);
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceClient::ListWorkflowTemplates(
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListWorkflowTemplates(std::move(request));
}

Status WorkflowTemplateServiceClient::DeleteWorkflowTemplate(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest request;
  request.set_name(name);
  return connection_->DeleteWorkflowTemplate(request);
}

Status WorkflowTemplateServiceClient::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteWorkflowTemplate(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google
