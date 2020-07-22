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

#include <tencentcloud/cam/v20190116/model/DeleteRolePermissionsBoundaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

DeleteRolePermissionsBoundaryRequest::DeleteRolePermissionsBoundaryRequest() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

string DeleteRolePermissionsBoundaryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_roleName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRolePermissionsBoundaryRequest::GetRoleId() const
{
    return m_roleId;
}

void DeleteRolePermissionsBoundaryRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool DeleteRolePermissionsBoundaryRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string DeleteRolePermissionsBoundaryRequest::GetRoleName() const
{
    return m_roleName;
}

void DeleteRolePermissionsBoundaryRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool DeleteRolePermissionsBoundaryRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}


