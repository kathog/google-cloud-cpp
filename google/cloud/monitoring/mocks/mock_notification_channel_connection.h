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
// source: google/monitoring/v3/notification_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_NOTIFICATION_CHANNEL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_NOTIFICATION_CHANNEL_CONNECTION_H

#include "google/cloud/monitoring/notification_channel_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace monitoring_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockNotificationChannelServiceConnection
    : public monitoring::NotificationChannelServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::monitoring::v3::NotificationChannelDescriptor>,
      ListNotificationChannelDescriptors,
      (google::monitoring::v3::ListNotificationChannelDescriptorsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::NotificationChannelDescriptor>,
      GetNotificationChannelDescriptor,
      (google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
           request),
      (override));

  MOCK_METHOD(StreamRange<google::monitoring::v3::NotificationChannel>,
              ListNotificationChannels,
              (google::monitoring::v3::ListNotificationChannelsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::NotificationChannel>,
      GetNotificationChannel,
      (google::monitoring::v3::GetNotificationChannelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::NotificationChannel>,
      CreateNotificationChannel,
      (google::monitoring::v3::CreateNotificationChannelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::NotificationChannel>,
      UpdateNotificationChannel,
      (google::monitoring::v3::UpdateNotificationChannelRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteNotificationChannel,
      (google::monitoring::v3::DeleteNotificationChannelRequest const& request),
      (override));

  MOCK_METHOD(
      Status, SendNotificationChannelVerificationCode,
      (google::monitoring::v3::
           SendNotificationChannelVerificationCodeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::
                   GetNotificationChannelVerificationCodeResponse>,
      GetNotificationChannelVerificationCode,
      (google::monitoring::v3::
           GetNotificationChannelVerificationCodeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::NotificationChannel>,
      VerifyNotificationChannel,
      (google::monitoring::v3::VerifyNotificationChannelRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_NOTIFICATION_CHANNEL_CONNECTION_H