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

#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace rapidjson;
using namespace std;

SetVideoGenerationTaskCallbackKeyRequest::SetVideoGenerationTaskCallbackKeyRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_callbackKeyHasBeenSet(false)
{
}

string SetVideoGenerationTaskCallbackKeyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SetVideoGenerationTaskCallbackKeyRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetVideoGenerationTaskCallbackKeyRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetVideoGenerationTaskCallbackKeyRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string SetVideoGenerationTaskCallbackKeyRequest::GetCallbackKey() const
{
    return m_callbackKey;
}

void SetVideoGenerationTaskCallbackKeyRequest::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool SetVideoGenerationTaskCallbackKeyRequest::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

