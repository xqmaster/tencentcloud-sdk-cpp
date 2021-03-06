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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncStepDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 描述详细同步任务过程
                */
                class SyncDetailInfo : public AbstractModel
                {
                public:
                    SyncDetailInfo();
                    ~SyncDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总步骤数
                     * @return StepAll 总步骤数
                     */
                    int64_t GetStepAll() const;

                    /**
                     * 设置总步骤数
                     * @param StepAll 总步骤数
                     */
                    void SetStepAll(const int64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取当前步骤
                     * @return StepNow 当前步骤
                     */
                    int64_t GetStepNow() const;

                    /**
                     * 设置当前步骤
                     * @param StepNow 当前步骤
                     */
                    void SetStepNow(const int64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取总进度
                     * @return Progress 总进度
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置总进度
                     * @param Progress 总进度
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取当前步骤进度
                     * @return CurrentStepProgress 当前步骤进度
                     */
                    std::string GetCurrentStepProgress() const;

                    /**
                     * 设置当前步骤进度
                     * @param CurrentStepProgress 当前步骤进度
                     */
                    void SetCurrentStepProgress(const std::string& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取主从差距，MB
                     * @return MasterSlaveDistance 主从差距，MB
                     */
                    int64_t GetMasterSlaveDistance() const;

                    /**
                     * 设置主从差距，MB
                     * @param MasterSlaveDistance 主从差距，MB
                     */
                    void SetMasterSlaveDistance(const int64_t& _masterSlaveDistance);

                    /**
                     * 判断参数 MasterSlaveDistance 是否已赋值
                     * @return MasterSlaveDistance 是否已赋值
                     */
                    bool MasterSlaveDistanceHasBeenSet() const;

                    /**
                     * 获取主从差距，秒
                     * @return SecondsBehindMaster 主从差距，秒
                     */
                    int64_t GetSecondsBehindMaster() const;

                    /**
                     * 设置主从差距，秒
                     * @param SecondsBehindMaster 主从差距，秒
                     */
                    void SetSecondsBehindMaster(const int64_t& _secondsBehindMaster);

                    /**
                     * 判断参数 SecondsBehindMaster 是否已赋值
                     * @return SecondsBehindMaster 是否已赋值
                     */
                    bool SecondsBehindMasterHasBeenSet() const;

                    /**
                     * 获取步骤信息
                     * @return StepInfo 步骤信息
                     */
                    std::vector<SyncStepDetailInfo> GetStepInfo() const;

                    /**
                     * 设置步骤信息
                     * @param StepInfo 步骤信息
                     */
                    void SetStepInfo(const std::vector<SyncStepDetailInfo>& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     */
                    bool StepInfoHasBeenSet() const;

                private:

                    /**
                     * 总步骤数
                     */
                    int64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * 当前步骤
                     */
                    int64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * 总进度
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 当前步骤进度
                     */
                    std::string m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * 主从差距，MB
                     */
                    int64_t m_masterSlaveDistance;
                    bool m_masterSlaveDistanceHasBeenSet;

                    /**
                     * 主从差距，秒
                     */
                    int64_t m_secondsBehindMaster;
                    bool m_secondsBehindMasterHasBeenSet;

                    /**
                     * 步骤信息
                     */
                    std::vector<SyncStepDetailInfo> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCDETAILINFO_H_
