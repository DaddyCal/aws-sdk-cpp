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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>A list of node configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/NodeConfigurationOption">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API NodeConfigurationOption
  {
  public:
    NodeConfigurationOption();
    NodeConfigurationOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    NodeConfigurationOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline NodeConfigurationOption& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline NodeConfigurationOption& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline NodeConfigurationOption& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The number of nodes.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of nodes.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of nodes.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of nodes.</p>
     */
    inline NodeConfigurationOption& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>The estimated disk utilizaton percentage.</p>
     */
    inline double GetEstimatedDiskUtilizationPercent() const{ return m_estimatedDiskUtilizationPercent; }

    /**
     * <p>The estimated disk utilizaton percentage.</p>
     */
    inline bool EstimatedDiskUtilizationPercentHasBeenSet() const { return m_estimatedDiskUtilizationPercentHasBeenSet; }

    /**
     * <p>The estimated disk utilizaton percentage.</p>
     */
    inline void SetEstimatedDiskUtilizationPercent(double value) { m_estimatedDiskUtilizationPercentHasBeenSet = true; m_estimatedDiskUtilizationPercent = value; }

    /**
     * <p>The estimated disk utilizaton percentage.</p>
     */
    inline NodeConfigurationOption& WithEstimatedDiskUtilizationPercent(double value) { SetEstimatedDiskUtilizationPercent(value); return *this;}

  private:

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;

    double m_estimatedDiskUtilizationPercent;
    bool m_estimatedDiskUtilizationPercentHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
