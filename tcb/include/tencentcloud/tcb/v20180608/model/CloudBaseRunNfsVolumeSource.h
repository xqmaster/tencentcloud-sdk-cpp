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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNNFSVOLUMESOURCE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNNFSVOLUMESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * nfs挂载资源
                */
                class CloudBaseRunNfsVolumeSource : public AbstractModel
                {
                public:
                    CloudBaseRunNfsVolumeSource();
                    ~CloudBaseRunNfsVolumeSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NFS挂载Server
                     * @return Server NFS挂载Server
                     */
                    std::string GetServer() const;

                    /**
                     * 设置NFS挂载Server
                     * @param Server NFS挂载Server
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取Server路径
                     * @return Path Server路径
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Server路径
                     * @param Path Server路径
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取是否只读
                     * @return ReadOnly 是否只读
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否只读
                     * @param ReadOnly 是否只读
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * NFS挂载Server
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * Server路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 是否只读
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNNFSVOLUMESOURCE_H_
