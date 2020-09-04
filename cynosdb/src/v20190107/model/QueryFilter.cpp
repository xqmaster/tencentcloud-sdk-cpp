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

#include <tencentcloud/cynosdb/v20190107/model/QueryFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace rapidjson;
using namespace std;

QueryFilter::QueryFilter() :
    m_namesHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_exactMatchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome QueryFilter::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Names") && !value["Names"].IsNull())
    {
        if (!value["Names"].IsArray())
            return CoreInternalOutcome(Error("response `QueryFilter.Names` is not array type"));

        const Value &tmpValue = value["Names"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_names.push_back((*itr).GetString());
        }
        m_namesHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Error("response `QueryFilter.Values` is not array type"));

        const Value &tmpValue = value["Values"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("ExactMatch") && !value["ExactMatch"].IsNull())
    {
        if (!value["ExactMatch"].IsBool())
        {
            return CoreInternalOutcome(Error("response `QueryFilter.ExactMatch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exactMatch = value["ExactMatch"].GetBool();
        m_exactMatchHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `QueryFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryFilter::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_namesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_valuesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exactMatchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExactMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exactMatch, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


vector<string> QueryFilter::GetNames() const
{
    return m_names;
}

void QueryFilter::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool QueryFilter::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}

vector<string> QueryFilter::GetValues() const
{
    return m_values;
}

void QueryFilter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool QueryFilter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool QueryFilter::GetExactMatch() const
{
    return m_exactMatch;
}

void QueryFilter::SetExactMatch(const bool& _exactMatch)
{
    m_exactMatch = _exactMatch;
    m_exactMatchHasBeenSet = true;
}

bool QueryFilter::ExactMatchHasBeenSet() const
{
    return m_exactMatchHasBeenSet;
}

string QueryFilter::GetName() const
{
    return m_name;
}

void QueryFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QueryFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

