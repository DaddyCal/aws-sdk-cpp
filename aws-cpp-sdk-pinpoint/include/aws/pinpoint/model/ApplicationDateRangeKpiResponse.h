﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint/model/BaseKpiResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the results of a query that retrieved the data for a standard metric
   * that applies to an application, and provides information about that
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationDateRangeKpiResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ApplicationDateRangeKpiResponse
  {
  public:
    ApplicationDateRangeKpiResponse();
    ApplicationDateRangeKpiResponse(Aws::Utils::Json::JsonView jsonValue);
    ApplicationDateRangeKpiResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::String& GetKpiName() const{ return m_kpiName; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline bool KpiNameHasBeenSet() const { return m_kpiNameHasBeenSet; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(const Aws::String& value) { m_kpiNameHasBeenSet = true; m_kpiName = value; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(Aws::String&& value) { m_kpiNameHasBeenSet = true; m_kpiName = std::move(value); }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(const char* value) { m_kpiNameHasBeenSet = true; m_kpiName.assign(value); }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithKpiName(const Aws::String& value) { SetKpiName(value); return *this;}

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithKpiName(Aws::String&& value) { SetKpiName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of valid values, see
     * the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithKpiName(const char* value) { SetKpiName(value); return *this;}


    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline const BaseKpiResult& GetKpiResult() const{ return m_kpiResult; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline bool KpiResultHasBeenSet() const { return m_kpiResultHasBeenSet; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline void SetKpiResult(const BaseKpiResult& value) { m_kpiResultHasBeenSet = true; m_kpiResult = value; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline void SetKpiResult(BaseKpiResult&& value) { m_kpiResultHasBeenSet = true; m_kpiResult = std::move(value); }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithKpiResult(const BaseKpiResult& value) { SetKpiResult(value); return *this;}

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithKpiResult(BaseKpiResult&& value) { SetKpiResult(std::move(value)); return *this;}


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Application Metrics resource.
     * The Application Metrics resource returns all results in a single page.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline ApplicationDateRangeKpiResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_kpiName;
    bool m_kpiNameHasBeenSet;

    BaseKpiResult m_kpiResult;
    bool m_kpiResultHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
