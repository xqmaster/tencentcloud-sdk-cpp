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

#include <tencentcloud/cws/v20180312/model/DeleteMonitorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cws::V20180312::Model;
using namespace rapidjson;
using namespace std;

DeleteMonitorsRequest::DeleteMonitorsRequest() :
    m_monitorIdsHasBeenSet(false)
{
}

string DeleteMonitorsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monitorIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_monitorIds.begin(); itr != m_monitorIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteMonitorsRequest::GetMonitorIds() const
{
    return m_monitorIds;
}

void DeleteMonitorsRequest::SetMonitorIds(const vector<uint64_t>& _monitorIds)
{
    m_monitorIds = _monitorIds;
    m_monitorIdsHasBeenSet = true;
}

bool DeleteMonitorsRequest::MonitorIdsHasBeenSet() const
{
    return m_monitorIdsHasBeenSet;
}


