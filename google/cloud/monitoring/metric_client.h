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
// source: google/monitoring/v3/metric_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRIC_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRIC_CLIENT_H

#include "google/cloud/monitoring/metric_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages metric descriptors, monitored resource descriptors, and
/// time series data.
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
class MetricServiceClient {
 public:
  explicit MetricServiceClient(
      std::shared_ptr<MetricServiceConnection> connection,
      Options options = {});
  ~MetricServiceClient();

  //@{
  // @name Copy and move support
  MetricServiceClient(MetricServiceClient const&) = default;
  MetricServiceClient& operator=(MetricServiceClient const&) = default;
  MetricServiceClient(MetricServiceClient&&) = default;
  MetricServiceClient& operator=(MetricServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(MetricServiceClient const& a,
                         MetricServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(MetricServiceClient const& a,
                         MetricServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists monitored resource descriptors that match a filter. This method does
  /// not require a Workspace.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name) on
  ///  which to execute the request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MonitoredResourceDescriptor,google/api/monitored_resource.proto#L40}
  ///
  /// [google.monitoring.v3.ListMonitoredResourceDescriptorsRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L177}
  /// [google.api.MonitoredResourceDescriptor]:
  /// @googleapis_reference_link{google/api/monitored_resource.proto#L40}
  ///
  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(std::string const& name,
                                   Options options = {});

  ///
  /// Lists monitored resource descriptors that match a filter. This method does
  /// not require a Workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::ListMonitoredResourceDescriptorsRequest,google/monitoring/v3/metric_service.proto#L177}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MonitoredResourceDescriptor,google/api/monitored_resource.proto#L40}
  ///
  /// [google.monitoring.v3.ListMonitoredResourceDescriptorsRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L177}
  /// [google.api.MonitoredResourceDescriptor]:
  /// @googleapis_reference_link{google/api/monitored_resource.proto#L40}
  ///
  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::monitoring::v3::ListMonitoredResourceDescriptorsRequest request,
      Options options = {});

  ///
  /// Gets a single monitored resource descriptor. This method does not require
  /// a Workspace.
  ///
  /// @param name  Required. The monitored resource descriptor to get.  The
  /// format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]/monitoredResourceDescriptors/[RESOURCE_TYPE]
  ///  The `[RESOURCE_TYPE]` is a predefined type, such as
  ///  `cloudsql_database`.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MonitoredResourceDescriptor,google/api/monitored_resource.proto#L40}
  ///
  /// [google.monitoring.v3.GetMonitoredResourceDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L219}
  /// [google.api.MonitoredResourceDescriptor]:
  /// @googleapis_reference_link{google/api/monitored_resource.proto#L40}
  ///
  StatusOr<google::api::MonitoredResourceDescriptor>
  GetMonitoredResourceDescriptor(std::string const& name, Options options = {});

  ///
  /// Gets a single monitored resource descriptor. This method does not require
  /// a Workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::GetMonitoredResourceDescriptorRequest,google/monitoring/v3/metric_service.proto#L219}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MonitoredResourceDescriptor,google/api/monitored_resource.proto#L40}
  ///
  /// [google.monitoring.v3.GetMonitoredResourceDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L219}
  /// [google.api.MonitoredResourceDescriptor]:
  /// @googleapis_reference_link{google/api/monitored_resource.proto#L40}
  ///
  StatusOr<google::api::MonitoredResourceDescriptor>
  GetMonitoredResourceDescriptor(
      google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
          request,
      Options options = {});

  ///
  /// Lists metric descriptors that match a filter. This method does not require
  /// a Workspace.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name) on
  ///  which to execute the request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MetricDescriptor,google/api/metric.proto#L33}
  ///
  /// [google.monitoring.v3.ListMetricDescriptorsRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L235}
  /// [google.api.MetricDescriptor]:
  /// @googleapis_reference_link{google/api/metric.proto#L33}
  ///
  StreamRange<google::api::MetricDescriptor> ListMetricDescriptors(
      std::string const& name, Options options = {});

  ///
  /// Lists metric descriptors that match a filter. This method does not require
  /// a Workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::ListMetricDescriptorsRequest,google/monitoring/v3/metric_service.proto#L235}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MetricDescriptor,google/api/metric.proto#L33}
  ///
  /// [google.monitoring.v3.ListMetricDescriptorsRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L235}
  /// [google.api.MetricDescriptor]:
  /// @googleapis_reference_link{google/api/metric.proto#L33}
  ///
  StreamRange<google::api::MetricDescriptor> ListMetricDescriptors(
      google::monitoring::v3::ListMetricDescriptorsRequest request,
      Options options = {});

  ///
  /// Gets a single metric descriptor. This method does not require a Workspace.
  ///
  /// @param name  Required. The metric descriptor on which to execute the
  /// request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]/metricDescriptors/[METRIC_ID]
  ///  An example value of `[METRIC_ID]` is
  ///  `"compute.googleapis.com/instance/disk/read_bytes_count"`.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MetricDescriptor,google/api/metric.proto#L33}
  ///
  /// [google.monitoring.v3.GetMetricDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L279}
  /// [google.api.MetricDescriptor]:
  /// @googleapis_reference_link{google/api/metric.proto#L33}
  ///
  StatusOr<google::api::MetricDescriptor> GetMetricDescriptor(
      std::string const& name, Options options = {});

  ///
  /// Gets a single metric descriptor. This method does not require a Workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::GetMetricDescriptorRequest,google/monitoring/v3/metric_service.proto#L279}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MetricDescriptor,google/api/metric.proto#L33}
  ///
  /// [google.monitoring.v3.GetMetricDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L279}
  /// [google.api.MetricDescriptor]:
  /// @googleapis_reference_link{google/api/metric.proto#L33}
  ///
  StatusOr<google::api::MetricDescriptor> GetMetricDescriptor(
      google::monitoring::v3::GetMetricDescriptorRequest const& request,
      Options options = {});

  ///
  /// Creates a new metric descriptor.
  /// The creation is executed asynchronously and callers may check the returned
  /// operation to track its progress.
  /// User-created metric descriptors define
  /// [custom metrics](https://cloud.google.com/monitoring/custom-metrics).
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name) on
  ///  which to execute the request. The format is:
  ///  4
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param metric_descriptor  Required. The new [custom
  /// metric](https://cloud.google.com/monitoring/custom-metrics)
  ///  descriptor.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MetricDescriptor,google/api/metric.proto#L33}
  ///
  /// [google.monitoring.v3.CreateMetricDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L295}
  /// [google.api.MetricDescriptor]:
  /// @googleapis_reference_link{google/api/metric.proto#L33}
  ///
  StatusOr<google::api::MetricDescriptor> CreateMetricDescriptor(
      std::string const& name,
      google::api::MetricDescriptor const& metric_descriptor,
      Options options = {});

  ///
  /// Creates a new metric descriptor.
  /// The creation is executed asynchronously and callers may check the returned
  /// operation to track its progress.
  /// User-created metric descriptors define
  /// [custom metrics](https://cloud.google.com/monitoring/custom-metrics).
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::CreateMetricDescriptorRequest,google/monitoring/v3/metric_service.proto#L295}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::api::MetricDescriptor,google/api/metric.proto#L33}
  ///
  /// [google.monitoring.v3.CreateMetricDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L295}
  /// [google.api.MetricDescriptor]:
  /// @googleapis_reference_link{google/api/metric.proto#L33}
  ///
  StatusOr<google::api::MetricDescriptor> CreateMetricDescriptor(
      google::monitoring::v3::CreateMetricDescriptorRequest const& request,
      Options options = {});

  ///
  /// Deletes a metric descriptor. Only user-created
  /// [custom metrics](https://cloud.google.com/monitoring/custom-metrics) can
  /// be deleted.
  ///
  /// @param name  Required. The metric descriptor on which to execute the
  /// request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]/metricDescriptors/[METRIC_ID]
  ///  An example of `[METRIC_ID]` is:
  ///  `"custom.googleapis.com/my_test_metric"`.
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.DeleteMetricDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L313}
  ///
  Status DeleteMetricDescriptor(std::string const& name, Options options = {});

  ///
  /// Deletes a metric descriptor. Only user-created
  /// [custom metrics](https://cloud.google.com/monitoring/custom-metrics) can
  /// be deleted.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::DeleteMetricDescriptorRequest,google/monitoring/v3/metric_service.proto#L313}
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.DeleteMetricDescriptorRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L313}
  ///
  Status DeleteMetricDescriptor(
      google::monitoring::v3::DeleteMetricDescriptorRequest const& request,
      Options options = {});

  ///
  /// Lists time series that match a filter. This method does not require a
  /// Workspace.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name),
  ///  organization or folder on which to execute the request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  ///      organizations/[ORGANIZATION_ID]
  ///      folders/[FOLDER_ID]
  /// @param filter  Required. A [monitoring
  /// filter](https://cloud.google.com/monitoring/api/v3/filters)
  ///  that specifies which time series should be returned.  The filter must
  ///  specify a single metric type, and can additionally specify metric labels
  ///  and other information. For example:
  ///      metric.type = "compute.googleapis.com/instance/cpu/usage_time" AND
  ///          metric.labels.instance_name = "my-instance-name"
  /// @param interval  Required. The time interval for which results should be
  /// returned. Only time series
  ///  that contain data points in the specified interval are included
  ///  in the response.
  /// @param view  Required. Specifies which information is returned about the
  /// time series.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::TimeSeries,google/monitoring/v3/metric.proto#L55}
  ///
  /// [google.monitoring.v3.ListTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L329}
  /// [google.monitoring.v3.TimeSeries]:
  /// @googleapis_reference_link{google/monitoring/v3/metric.proto#L55}
  ///
  StreamRange<google::monitoring::v3::TimeSeries> ListTimeSeries(
      std::string const& name, std::string const& filter,
      google::monitoring::v3::TimeInterval const& interval,
      google::monitoring::v3::ListTimeSeriesRequest::TimeSeriesView view,
      Options options = {});

  ///
  /// Lists time series that match a filter. This method does not require a
  /// Workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::ListTimeSeriesRequest,google/monitoring/v3/metric_service.proto#L329}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::TimeSeries,google/monitoring/v3/metric.proto#L55}
  ///
  /// [google.monitoring.v3.ListTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L329}
  /// [google.monitoring.v3.TimeSeries]:
  /// @googleapis_reference_link{google/monitoring/v3/metric.proto#L55}
  ///
  StreamRange<google::monitoring::v3::TimeSeries> ListTimeSeries(
      google::monitoring::v3::ListTimeSeriesRequest request,
      Options options = {});

  ///
  /// Creates or adds data to one or more time series.
  /// The response is empty if all time series in the request were written.
  /// If any time series could not be written, a corresponding failure message
  /// is included in the error response.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name) on
  ///  which to execute the request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param time_series  Required. The new data to be added to a list of time
  /// series.
  ///  Adds at most one data point to each of several time series.  The new data
  ///  point must be more recent than any other point in its time series.  Each
  ///  `TimeSeries` value must fully specify a unique time series by supplying
  ///  all label values for the metric and the monitored resource.
  ///  The maximum number of `TimeSeries` objects per `Create` request is 200.
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.CreateTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L423}
  ///
  Status CreateTimeSeries(
      std::string const& name,
      std::vector<google::monitoring::v3::TimeSeries> const& time_series,
      Options options = {});

  ///
  /// Creates or adds data to one or more time series.
  /// The response is empty if all time series in the request were written.
  /// If any time series could not be written, a corresponding failure message
  /// is included in the error response.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::CreateTimeSeriesRequest,google/monitoring/v3/metric_service.proto#L423}
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.CreateTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L423}
  ///
  Status CreateTimeSeries(
      google::monitoring::v3::CreateTimeSeriesRequest const& request,
      Options options = {});

  ///
  /// Creates or adds data to one or more service time series. A service time
  /// series is a time series for a metric from a Google Cloud service. The
  /// response is empty if all time series in the request were written. If any
  /// time series could not be written, a corresponding failure message is
  /// included in the error response. This endpoint rejects writes to
  /// user-defined metrics.
  /// This method is only for use by Google Cloud services. Use
  /// [projects.timeSeries.create][google.monitoring.v3.MetricService.CreateTimeSeries]
  /// instead.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name) on
  ///  which to execute the request. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param time_series  Required. The new data to be added to a list of time
  /// series.
  ///  Adds at most one data point to each of several time series.  The new data
  ///  point must be more recent than any other point in its time series.  Each
  ///  `TimeSeries` value must fully specify a unique time series by supplying
  ///  all label values for the metric and the monitored resource.
  ///  The maximum number of `TimeSeries` objects per `Create` request is 200.
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.CreateTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L423}
  ///
  Status CreateServiceTimeSeries(
      std::string const& name,
      std::vector<google::monitoring::v3::TimeSeries> const& time_series,
      Options options = {});

  ///
  /// Creates or adds data to one or more service time series. A service time
  /// series is a time series for a metric from a Google Cloud service. The
  /// response is empty if all time series in the request were written. If any
  /// time series could not be written, a corresponding failure message is
  /// included in the error response. This endpoint rejects writes to
  /// user-defined metrics.
  /// This method is only for use by Google Cloud services. Use
  /// [projects.timeSeries.create][google.monitoring.v3.MetricService.CreateTimeSeries]
  /// instead.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::CreateTimeSeriesRequest,google/monitoring/v3/metric_service.proto#L423}
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.CreateTimeSeriesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/metric_service.proto#L423}
  ///
  Status CreateServiceTimeSeries(
      google::monitoring::v3::CreateTimeSeriesRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<MetricServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRIC_CLIENT_H