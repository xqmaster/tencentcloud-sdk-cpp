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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_IMAGEITEM_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_IMAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * 图片信息条目
                */
                class ImageItem : public AbstractModel
                {
                public:
                    ImageItem();
                    ~ImageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片ID
                     * @return ImageId 图片ID
                     */
                    uint64_t GetImageId() const;

                    /**
                     * 设置图片ID
                     * @param ImageId 图片ID
                     */
                    void SetImageId(const uint64_t& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取图片标题
                     * @return Title 图片标题
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置图片标题
                     * @param Title 图片标题
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取图片描述
                     * @return Description 图片描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置图片描述
                     * @param Description 图片描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取图片预览链接
                     * @return PreviewUrl 图片预览链接
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置图片预览链接
                     * @param PreviewUrl 图片预览链接
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取图片缩略图
                     * @return ThumbUrl 图片缩略图
                     */
                    std::string GetThumbUrl() const;

                    /**
                     * 设置图片缩略图
                     * @param ThumbUrl 图片缩略图
                     */
                    void SetThumbUrl(const std::string& _thumbUrl);

                    /**
                     * 判断参数 ThumbUrl 是否已赋值
                     * @return ThumbUrl 是否已赋值
                     */
                    bool ThumbUrlHasBeenSet() const;

                    /**
                     * 获取图片供应商
                     * @return Vendor 图片供应商
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置图片供应商
                     * @param Vendor 图片供应商
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     */
                    bool VendorHasBeenSet() const;

                private:

                    /**
                     * 图片ID
                     */
                    uint64_t m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 图片标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 图片描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 图片预览链接
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 图片缩略图
                     */
                    std::string m_thumbUrl;
                    bool m_thumbUrlHasBeenSet;

                    /**
                     * 图片供应商
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_IMAGEITEM_H_
