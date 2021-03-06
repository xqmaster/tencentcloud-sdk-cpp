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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_OBJECTDETAIL_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_OBJECTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 实体检测结果明细，当检测场景为政治实体、广告台标、二维码和人脸属性时表示模型检测目标框的标签名称、标签值、标签分数以及检测框的位置信息。
                */
                class ObjectDetail : public AbstractModel
                {
                public:
                    ObjectDetail();
                    ~ObjectDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取序号
                     * @return Id 序号
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置序号
                     * @param Id 序号
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return Name 标签名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称
                     * @param Name 标签名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
当标签为人脸属性，表示属性值，如Name为Age时 Value为18
                     * @return Value 标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
当标签为人脸属性，表示属性值，如Name为Age时 Value为18
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
当标签为人脸属性，表示属性值，如Name为Age时 Value为18
                     * @param Value 标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
当标签为人脸属性，表示属性值，如Name为Age时 Value为18
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取分数
                     * @return Score 分数
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置分数
                     * @param Score 分数
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取检测框坐标
                     * @return Location 检测框坐标
                     */
                    Location GetLocation() const;

                    /**
                     * 设置检测框坐标
                     * @param Location 检测框坐标
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 序号
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
当标签为人脸属性，表示属性值，如Name为Age时 Value为18
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 分数
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 检测框坐标
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_OBJECTDETAIL_H_
