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

#include <tencentcloud/cdb/v20170320/model/ModifyAuditConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

ModifyAuditConfigRequest::ModifyAuditConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_closeAuditHasBeenSet(false)
{
}

string ModifyAuditConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logExpireDayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_closeAuditHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CloseAudit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_closeAudit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAuditConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAuditConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAuditConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyAuditConfigRequest::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void ModifyAuditConfigRequest::SetLogExpireDay(const int64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool ModifyAuditConfigRequest::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

bool ModifyAuditConfigRequest::GetCloseAudit() const
{
    return m_closeAudit;
}

void ModifyAuditConfigRequest::SetCloseAudit(const bool& _closeAudit)
{
    m_closeAudit = _closeAudit;
    m_closeAuditHasBeenSet = true;
}

bool ModifyAuditConfigRequest::CloseAuditHasBeenSet() const
{
    return m_closeAuditHasBeenSet;
}


