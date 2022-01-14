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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/recommender_client.h"
#include "google/cloud/recommender/internal/recommender_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace recommender {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecommenderClient::RecommenderClient(
    std::shared_ptr<RecommenderConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(
          recommender_internal::RecommenderDefaultOptions(std::move(options))) {
}
RecommenderClient::~RecommenderClient() = default;

StreamRange<google::cloud::recommender::v1::Insight>
RecommenderClient::ListInsights(std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::ListInsightsRequest request;
  request.set_parent(parent);
  return connection_->ListInsights(request);
}

StreamRange<google::cloud::recommender::v1::Insight>
RecommenderClient::ListInsights(
    google::cloud::recommender::v1::ListInsightsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListInsights(std::move(request));
}

StatusOr<google::cloud::recommender::v1::Insight> RecommenderClient::GetInsight(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::GetInsightRequest request;
  request.set_name(name);
  return connection_->GetInsight(request);
}

StatusOr<google::cloud::recommender::v1::Insight> RecommenderClient::GetInsight(
    google::cloud::recommender::v1::GetInsightRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetInsight(request);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderClient::MarkInsightAccepted(
    std::string const& name,
    std::map<std::string, std::string> const& state_metadata,
    std::string const& etag, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::MarkInsightAcceptedRequest request;
  request.set_name(name);
  *request.mutable_state_metadata() = {state_metadata.begin(),
                                       state_metadata.end()};
  request.set_etag(etag);
  return connection_->MarkInsightAccepted(request);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderClient::MarkInsightAccepted(
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->MarkInsightAccepted(request);
}

StreamRange<google::cloud::recommender::v1::Recommendation>
RecommenderClient::ListRecommendations(std::string const& parent,
                                       Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::ListRecommendationsRequest request;
  request.set_parent(parent);
  return connection_->ListRecommendations(request);
}

StreamRange<google::cloud::recommender::v1::Recommendation>
RecommenderClient::ListRecommendations(std::string const& parent,
                                       std::string const& filter,
                                       Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::ListRecommendationsRequest request;
  request.set_parent(parent);
  request.set_filter(filter);
  return connection_->ListRecommendations(request);
}

StreamRange<google::cloud::recommender::v1::Recommendation>
RecommenderClient::ListRecommendations(
    google::cloud::recommender::v1::ListRecommendationsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListRecommendations(std::move(request));
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::GetRecommendation(std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::GetRecommendationRequest request;
  request.set_name(name);
  return connection_->GetRecommendation(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::GetRecommendation(
    google::cloud::recommender::v1::GetRecommendationRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetRecommendation(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::MarkRecommendationClaimed(
    std::string const& name,
    std::map<std::string, std::string> const& state_metadata,
    std::string const& etag, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::MarkRecommendationClaimedRequest request;
  request.set_name(name);
  *request.mutable_state_metadata() = {state_metadata.begin(),
                                       state_metadata.end()};
  request.set_etag(etag);
  return connection_->MarkRecommendationClaimed(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::MarkRecommendationClaimed(
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->MarkRecommendationClaimed(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::MarkRecommendationSucceeded(
    std::string const& name,
    std::map<std::string, std::string> const& state_metadata,
    std::string const& etag, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::MarkRecommendationSucceededRequest request;
  request.set_name(name);
  *request.mutable_state_metadata() = {state_metadata.begin(),
                                       state_metadata.end()};
  request.set_etag(etag);
  return connection_->MarkRecommendationSucceeded(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::MarkRecommendationSucceeded(
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->MarkRecommendationSucceeded(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::MarkRecommendationFailed(
    std::string const& name,
    std::map<std::string, std::string> const& state_metadata,
    std::string const& etag, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::recommender::v1::MarkRecommendationFailedRequest request;
  request.set_name(name);
  *request.mutable_state_metadata() = {state_metadata.begin(),
                                       state_metadata.end()};
  request.set_etag(etag);
  return connection_->MarkRecommendationFailed(request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderClient::MarkRecommendationFailed(
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->MarkRecommendationFailed(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender
}  // namespace cloud
}  // namespace google