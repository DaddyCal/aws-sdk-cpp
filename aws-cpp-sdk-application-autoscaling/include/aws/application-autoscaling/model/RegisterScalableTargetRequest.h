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
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/SuspendedState.h>
#include <utility>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetRequest : public ApplicationAutoScalingRequest
  {
  public:
    RegisterScalableTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterScalableTarget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The namespace of the AWS service that provides the resource or
     * <code>custom-resource</code> for a resource provided by your own application or
     * service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>. </p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the AWS service that provides the resource or
     * <code>custom-resource</code> for a resource provided by your own application or
     * service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>. </p>
     */
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the AWS service that provides the resource or
     * <code>custom-resource</code> for a resource provided by your own application or
     * service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>. </p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service that provides the resource or
     * <code>custom-resource</code> for a resource provided by your own application or
     * service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>. </p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the AWS service that provides the resource or
     * <code>custom-resource</code> for a resource provided by your own application or
     * service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>. </p>
     */
    inline RegisterScalableTargetRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service that provides the resource or
     * <code>custom-resource</code> for a resource provided by your own application or
     * service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>. </p>
     */
    inline RegisterScalableTargetRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline RegisterScalableTargetRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline RegisterScalableTargetRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource that is associated with the scalable target.
     * This string consists of the resource type and unique identifier.</p> <ul> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> </ul>
     */
    inline RegisterScalableTargetRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> </ul>
     */
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> </ul>
     */
    inline RegisterScalableTargetRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> </ul>
     */
    inline RegisterScalableTargetRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}


    /**
     * <p>The minimum value to scale to in response to a scale-in event.
     * <code>MinCapacity</code> is required to register a scalable target.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum value to scale to in response to a scale-in event.
     * <code>MinCapacity</code> is required to register a scalable target.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The minimum value to scale to in response to a scale-in event.
     * <code>MinCapacity</code> is required to register a scalable target.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum value to scale to in response to a scale-in event.
     * <code>MinCapacity</code> is required to register a scalable target.</p>
     */
    inline RegisterScalableTargetRequest& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum value to scale to in response to a scale-out event.
     * <code>MaxCapacity</code> is required to register a scalable target.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum value to scale to in response to a scale-out event.
     * <code>MaxCapacity</code> is required to register a scalable target.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum value to scale to in response to a scale-out event.
     * <code>MaxCapacity</code> is required to register a scalable target.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum value to scale to in response to a scale-out event.
     * <code>MaxCapacity</code> is required to register a scalable target.</p>
     */
    inline RegisterScalableTargetRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline RegisterScalableTargetRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline RegisterScalableTargetRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>Application Auto Scaling creates a service-linked role that grants it
     * permissions to modify the scalable target on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-service-linked-roles.html">Service-Linked
     * Roles for Application Auto Scaling</a>.</p> <p>For Amazon EMR, this parameter is
     * required, and it must specify the ARN of an IAM role that allows Application
     * Auto Scaling to modify the scalable target on your behalf.</p>
     */
    inline RegisterScalableTargetRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and Resume Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline const SuspendedState& GetSuspendedState() const{ return m_suspendedState; }

    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and Resume Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool SuspendedStateHasBeenSet() const { return m_suspendedStateHasBeenSet; }

    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and Resume Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetSuspendedState(const SuspendedState& value) { m_suspendedStateHasBeenSet = true; m_suspendedState = value; }

    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and Resume Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetSuspendedState(SuspendedState&& value) { m_suspendedStateHasBeenSet = true; m_suspendedState = std::move(value); }

    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and Resume Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline RegisterScalableTargetRequest& WithSuspendedState(const SuspendedState& value) { SetSuspendedState(value); return *this;}

    /**
     * <p>An embedded object that contains attributes and attribute values that are
     * used to suspend and resume automatic scaling. Setting the value of an attribute
     * to <code>true</code> suspends the specified scaling activities. Setting it to
     * <code>false</code> (default) resumes the specified scaling activities. </p> <p>
     * <b>Suspension Outcomes</b> </p> <ul> <li> <p>For
     * <code>DynamicScalingInSuspended</code>, while a suspension is in effect, all
     * scale-in activities that are triggered by a scaling policy are suspended.</p>
     * </li> <li> <p>For <code>DynamicScalingOutSuspended</code>, while a suspension is
     * in effect, all scale-out activities that are triggered by a scaling policy are
     * suspended.</p> </li> <li> <p>For <code>ScheduledScalingSuspended</code>, while a
     * suspension is in effect, all scaling activities that involve scheduled actions
     * are suspended. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-suspend-resume-scaling.html">Suspend
     * and Resume Application Auto Scaling</a> in the <i>Application Auto Scaling User
     * Guide</i>.</p>
     */
    inline RegisterScalableTargetRequest& WithSuspendedState(SuspendedState&& value) { SetSuspendedState(std::move(value)); return *this;}

  private:

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;

    int m_minCapacity;
    bool m_minCapacityHasBeenSet;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    SuspendedState m_suspendedState;
    bool m_suspendedStateHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
