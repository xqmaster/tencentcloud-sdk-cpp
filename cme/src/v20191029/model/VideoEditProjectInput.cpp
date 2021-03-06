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

#include <tencentcloud/cme/v20191029/model/VideoEditProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

VideoEditProjectInput::VideoEditProjectInput() :
    m_initTracksHasBeenSet(false)
{
}

CoreInternalOutcome VideoEditProjectInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InitTracks") && !value["InitTracks"].IsNull())
    {
        if (!value["InitTracks"].IsArray())
            return CoreInternalOutcome(Error("response `VideoEditProjectInput.InitTracks` is not array type"));

        const Value &tmpValue = value["InitTracks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaTrack item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_initTracks.push_back(item);
        }
        m_initTracksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEditProjectInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_initTracksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InitTracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initTracks.begin(); itr != m_initTracks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaTrack> VideoEditProjectInput::GetInitTracks() const
{
    return m_initTracks;
}

void VideoEditProjectInput::SetInitTracks(const vector<MediaTrack>& _initTracks)
{
    m_initTracks = _initTracks;
    m_initTracksHasBeenSet = true;
}

bool VideoEditProjectInput::InitTracksHasBeenSet() const
{
    return m_initTracksHasBeenSet;
}

