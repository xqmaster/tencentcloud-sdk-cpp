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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERRESOURCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 集群内资源类型
                */
                class ClusterResource : public AbstractModel
                {
                public:
                    ClusterResource();
                    ~ClusterResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群唯一ID，如tgw-12345678。
                     * @return ClusterId 集群唯一ID，如tgw-12345678。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群唯一ID，如tgw-12345678。
                     * @param ClusterId 集群唯一ID，如tgw-12345678。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ip地址。
                     * @return Vip ip地址。
                     */
                    std::string GetVip() const;

                    /**
                     * 设置ip地址。
                     * @param Vip ip地址。
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取负载均衡唯一ID，如lb-12345678。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerId 负载均衡唯一ID，如lb-12345678。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡唯一ID，如lb-12345678。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerId 负载均衡唯一ID，如lb-12345678。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取资源是否闲置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Idle 资源是否闲置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIdle() const;

                    /**
                     * 设置资源是否闲置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Idle 资源是否闲置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIdle(const std::string& _idle);

                    /**
                     * 判断参数 Idle 是否已赋值
                     * @return Idle 是否已赋值
                     */
                    bool IdleHasBeenSet() const;

                    /**
                     * 获取集群名称。
                     * @return ClusterName 集群名称。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称。
                     * @param ClusterName 集群名称。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 集群唯一ID，如tgw-12345678。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ip地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 负载均衡唯一ID，如lb-12345678。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 资源是否闲置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idle;
                    bool m_idleHasBeenSet;

                    /**
                     * 集群名称。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERRESOURCE_H_
