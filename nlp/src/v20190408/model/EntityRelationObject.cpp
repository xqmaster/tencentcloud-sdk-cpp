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

#include <tencentcloud/nlp/v20190408/model/EntityRelationObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

EntityRelationObject::EntityRelationObject() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_popularHasBeenSet(false)
{
}

CoreInternalOutcome EntityRelationObject::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsArray())
            return CoreInternalOutcome(Error("response `EntityRelationObject.Id` is not array type"));

        const Value &tmpValue = value["Id"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_id.push_back((*itr).GetString());
        }
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsArray())
            return CoreInternalOutcome(Error("response `EntityRelationObject.Name` is not array type"));

        const Value &tmpValue = value["Name"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_name.push_back((*itr).GetString());
        }
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Popular") && !value["Popular"].IsNull())
    {
        if (!value["Popular"].IsArray())
            return CoreInternalOutcome(Error("response `EntityRelationObject.Popular` is not array type"));

        const Value &tmpValue = value["Popular"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_popular.push_back((*itr).GetInt64());
        }
        m_popularHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EntityRelationObject::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_name.begin(); itr != m_name.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_popularHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Popular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_popular.begin(); itr != m_popular.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

}


vector<string> EntityRelationObject::GetId() const
{
    return m_id;
}

void EntityRelationObject::SetId(const vector<string>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EntityRelationObject::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> EntityRelationObject::GetName() const
{
    return m_name;
}

void EntityRelationObject::SetName(const vector<string>& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EntityRelationObject::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> EntityRelationObject::GetPopular() const
{
    return m_popular;
}

void EntityRelationObject::SetPopular(const vector<int64_t>& _popular)
{
    m_popular = _popular;
    m_popularHasBeenSet = true;
}

bool EntityRelationObject::PopularHasBeenSet() const
{
    return m_popularHasBeenSet;
}
