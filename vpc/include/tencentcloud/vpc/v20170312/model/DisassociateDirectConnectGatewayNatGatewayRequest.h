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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEDIRECTCONNECTGATEWAYNATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEDIRECTCONNECTGATEWAYNATGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DisassociateDirectConnectGatewayNatGateway请求参数结构体
                */
                class DisassociateDirectConnectGatewayNatGatewayRequest : public AbstractModel
                {
                public:
                    DisassociateDirectConnectGatewayNatGatewayRequest();
                    ~DisassociateDirectConnectGatewayNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关ID。
                     * @return VpcId 专线网关ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置专线网关ID。
                     * @param VpcId 专线网关ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取NAT网关ID。
                     * @return NatGatewayId NAT网关ID。
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关ID。
                     * @param NatGatewayId NAT网关ID。
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return DirectConnectGatewayId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param DirectConnectGatewayId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                private:

                    /**
                     * 专线网关ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT网关ID。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEDIRECTCONNECTGATEWAYNATGATEWAYREQUEST_H_
