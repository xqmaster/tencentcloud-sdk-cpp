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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATEALIASREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATEALIASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RoutingConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateAlias请求参数结构体
                */
                class CreateAliasRequest : public AbstractModel
                {
                public:
                    CreateAliasRequest();
                    ~CreateAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取别名的名称，在函数级别中唯一，只能包含字母、数字、'_'和‘-’，且必须以字母开头，长度限制为1-64
                     * @return Name 别名的名称，在函数级别中唯一，只能包含字母、数字、'_'和‘-’，且必须以字母开头，长度限制为1-64
                     */
                    std::string GetName() const;

                    /**
                     * 设置别名的名称，在函数级别中唯一，只能包含字母、数字、'_'和‘-’，且必须以字母开头，长度限制为1-64
                     * @param Name 别名的名称，在函数级别中唯一，只能包含字母、数字、'_'和‘-’，且必须以字母开头，长度限制为1-64
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param FunctionName 函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取别名指向的主版本
                     * @return FunctionVersion 别名指向的主版本
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置别名指向的主版本
                     * @param FunctionVersion 别名指向的主版本
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取函数所在的命名空间
                     * @return Namespace 函数所在的命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所在的命名空间
                     * @param Namespace 函数所在的命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取别名的请求路由配置
                     * @return RoutingConfig 别名的请求路由配置
                     */
                    RoutingConfig GetRoutingConfig() const;

                    /**
                     * 设置别名的请求路由配置
                     * @param RoutingConfig 别名的请求路由配置
                     */
                    void SetRoutingConfig(const RoutingConfig& _routingConfig);

                    /**
                     * 判断参数 RoutingConfig 是否已赋值
                     * @return RoutingConfig 是否已赋值
                     */
                    bool RoutingConfigHasBeenSet() const;

                    /**
                     * 获取别名的描述信息
                     * @return Description 别名的描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置别名的描述信息
                     * @param Description 别名的描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 别名的名称，在函数级别中唯一，只能包含字母、数字、'_'和‘-’，且必须以字母开头，长度限制为1-64
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 别名指向的主版本
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * 函数所在的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 别名的请求路由配置
                     */
                    RoutingConfig m_routingConfig;
                    bool m_routingConfigHasBeenSet;

                    /**
                     * 别名的描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATEALIASREQUEST_H_
