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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHCLOUDBASERUNSERVERREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHCLOUDBASERUNSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseEsInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * EstablishCloudBaseRunServer请求参数结构体
                */
                class EstablishCloudBaseRunServerRequest : public AbstractModel
                {
                public:
                    EstablishCloudBaseRunServerRequest();
                    ~EstablishCloudBaseRunServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param EnvId 环境id
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param ServiceName 服务名称
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取是否开通外网访问
                     * @return IsPublic 是否开通外网访问
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置是否开通外网访问
                     * @param IsPublic 是否开通外网访问
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取镜像仓库
                     * @return ImageRepo 镜像仓库
                     */
                    std::string GetImageRepo() const;

                    /**
                     * 设置镜像仓库
                     * @param ImageRepo 镜像仓库
                     */
                    void SetImageRepo(const std::string& _imageRepo);

                    /**
                     * 判断参数 ImageRepo 是否已赋值
                     * @return ImageRepo 是否已赋值
                     */
                    bool ImageRepoHasBeenSet() const;

                    /**
                     * 获取服务描述
                     * @return Remark 服务描述
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置服务描述
                     * @param Remark 服务描述
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取es信息
                     * @return EsInfo es信息
                     */
                    CloudBaseEsInfo GetEsInfo() const;

                    /**
                     * 设置es信息
                     * @param EsInfo es信息
                     */
                    void SetEsInfo(const CloudBaseEsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取日志类型; es/cls
                     * @return LogType 日志类型; es/cls
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型; es/cls
                     * @param LogType 日志类型; es/cls
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 是否开通外网访问
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 镜像仓库
                     */
                    std::string m_imageRepo;
                    bool m_imageRepoHasBeenSet;

                    /**
                     * 服务描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * es信息
                     */
                    CloudBaseEsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * 日志类型; es/cls
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHCLOUDBASERUNSERVERREQUEST_H_
