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

#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

CreateGameServerSessionQueueRequest::CreateGameServerSessionQueueRequest() :
    m_nameHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_playerLatencyPoliciesHasBeenSet(false),
    m_timeoutInSecondsHasBeenSet(false)
{
}

string CreateGameServerSessionQueueRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_playerLatencyPoliciesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlayerLatencyPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_playerLatencyPolicies.begin(); itr != m_playerLatencyPolicies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeoutInSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeoutInSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutInSeconds, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGameServerSessionQueueRequest::GetName() const
{
    return m_name;
}

void CreateGameServerSessionQueueRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateGameServerSessionQueueRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<GameServerSessionQueueDestination> CreateGameServerSessionQueueRequest::GetDestinations() const
{
    return m_destinations;
}

void CreateGameServerSessionQueueRequest::SetDestinations(const vector<GameServerSessionQueueDestination>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool CreateGameServerSessionQueueRequest::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

vector<PlayerLatencyPolicy> CreateGameServerSessionQueueRequest::GetPlayerLatencyPolicies() const
{
    return m_playerLatencyPolicies;
}

void CreateGameServerSessionQueueRequest::SetPlayerLatencyPolicies(const vector<PlayerLatencyPolicy>& _playerLatencyPolicies)
{
    m_playerLatencyPolicies = _playerLatencyPolicies;
    m_playerLatencyPoliciesHasBeenSet = true;
}

bool CreateGameServerSessionQueueRequest::PlayerLatencyPoliciesHasBeenSet() const
{
    return m_playerLatencyPoliciesHasBeenSet;
}

uint64_t CreateGameServerSessionQueueRequest::GetTimeoutInSeconds() const
{
    return m_timeoutInSeconds;
}

void CreateGameServerSessionQueueRequest::SetTimeoutInSeconds(const uint64_t& _timeoutInSeconds)
{
    m_timeoutInSeconds = _timeoutInSeconds;
    m_timeoutInSecondsHasBeenSet = true;
}

bool CreateGameServerSessionQueueRequest::TimeoutInSecondsHasBeenSet() const
{
    return m_timeoutInSecondsHasBeenSet;
}


