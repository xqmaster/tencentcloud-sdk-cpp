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

#include <tencentcloud/tci/v20190318/model/LightLevelRatioStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

LightLevelRatioStatistic::LightLevelRatioStatistic() :
    m_levelHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome LightLevelRatioStatistic::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Error("response `LightLevelRatioStatistic.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LightLevelRatioStatistic.Ratio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LightLevelRatioStatistic::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

}


string LightLevelRatioStatistic::GetLevel() const
{
    return m_level;
}

void LightLevelRatioStatistic::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool LightLevelRatioStatistic::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

double LightLevelRatioStatistic::GetRatio() const
{
    return m_ratio;
}

void LightLevelRatioStatistic::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool LightLevelRatioStatistic::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

