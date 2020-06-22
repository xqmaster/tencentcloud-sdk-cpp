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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DELETEDICTREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DELETEDICTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * DeleteDict请求参数结构体
                */
                class DeleteDictRequest : public AbstractModel
                {
                public:
                    DeleteDictRequest();
                    ~DeleteDictRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的自定义词库ID。
                     * @return DictId 要删除的自定义词库ID。
                     */
                    std::string GetDictId() const;

                    /**
                     * 设置要删除的自定义词库ID。
                     * @param DictId 要删除的自定义词库ID。
                     */
                    void SetDictId(const std::string& _dictId);

                    /**
                     * 判断参数 DictId 是否已赋值
                     * @return DictId 是否已赋值
                     */
                    bool DictIdHasBeenSet() const;

                private:

                    /**
                     * 要删除的自定义词库ID。
                     */
                    std::string m_dictId;
                    bool m_dictIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DELETEDICTREQUEST_H_
