/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSAGENTINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSAGENTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePrometheusAgentInstances请求参数结构体
                */
                class DescribePrometheusAgentInstancesRequest : public AbstractModel
                {
                public:
                    DescribePrometheusAgentInstancesRequest();
                    ~DescribePrometheusAgentInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
可以是tke, eks, edge的集群id
                     * @return ClusterId 集群id
可以是tke, eks, edge的集群id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
可以是tke, eks, edge的集群id
                     * @param ClusterId 集群id
可以是tke, eks, edge的集群id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 集群id
可以是tke, eks, edge的集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSAGENTINSTANCESREQUEST_H_
