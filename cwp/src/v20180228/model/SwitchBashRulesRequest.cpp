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

#include <tencentcloud/cwp/v20180228/model/SwitchBashRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

SwitchBashRulesRequest::SwitchBashRulesRequest() :
    m_idHasBeenSet(false),
    m_disabledHasBeenSet(false)
{
}

string SwitchBashRulesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_disabledHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disabled, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SwitchBashRulesRequest::GetId() const
{
    return m_id;
}

void SwitchBashRulesRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SwitchBashRulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SwitchBashRulesRequest::GetDisabled() const
{
    return m_disabled;
}

void SwitchBashRulesRequest::SetDisabled(const uint64_t& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool SwitchBashRulesRequest::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

