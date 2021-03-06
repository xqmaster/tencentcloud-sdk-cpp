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

#ifndef TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_
#define TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeChatMessagesRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeChatMessagesResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrResponse.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            class CccClient : public AbstractClient
            {
            public:
                CccClient(const Credential &credential, const std::string &region);
                CccClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateSDKLoginTokenResponse> CreateSDKLoginTokenOutcome;
                typedef std::future<CreateSDKLoginTokenOutcome> CreateSDKLoginTokenOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateSDKLoginTokenRequest&, CreateSDKLoginTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSDKLoginTokenAsyncHandler;
                typedef Outcome<Error, Model::CreateStaffResponse> CreateStaffOutcome;
                typedef std::future<CreateStaffOutcome> CreateStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateStaffRequest&, CreateStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaffAsyncHandler;
                typedef Outcome<Error, Model::DescribeChatMessagesResponse> DescribeChatMessagesOutcome;
                typedef std::future<DescribeChatMessagesOutcome> DescribeChatMessagesOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeChatMessagesRequest&, DescribeChatMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChatMessagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeIMCdrsResponse> DescribeIMCdrsOutcome;
                typedef std::future<DescribeIMCdrsOutcome> DescribeIMCdrsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeIMCdrsRequest&, DescribeIMCdrsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMCdrsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTelCdrResponse> DescribeTelCdrOutcome;
                typedef std::future<DescribeTelCdrOutcome> DescribeTelCdrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelCdrRequest&, DescribeTelCdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelCdrAsyncHandler;



                /**
                 *创建 SDK 登录 Token。
                 * @param req CreateSDKLoginTokenRequest
                 * @return CreateSDKLoginTokenOutcome
                 */
                CreateSDKLoginTokenOutcome CreateSDKLoginToken(const Model::CreateSDKLoginTokenRequest &request);
                void CreateSDKLoginTokenAsync(const Model::CreateSDKLoginTokenRequest& request, const CreateSDKLoginTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSDKLoginTokenOutcomeCallable CreateSDKLoginTokenCallable(const Model::CreateSDKLoginTokenRequest& request);

                /**
                 *创建客服账号。
                 * @param req CreateStaffRequest
                 * @return CreateStaffOutcome
                 */
                CreateStaffOutcome CreateStaff(const Model::CreateStaffRequest &request);
                void CreateStaffAsync(const Model::CreateStaffRequest& request, const CreateStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStaffOutcomeCallable CreateStaffCallable(const Model::CreateStaffRequest& request);

                /**
                 *包括具体聊天内容
                 * @param req DescribeChatMessagesRequest
                 * @return DescribeChatMessagesOutcome
                 */
                DescribeChatMessagesOutcome DescribeChatMessages(const Model::DescribeChatMessagesRequest &request);
                void DescribeChatMessagesAsync(const Model::DescribeChatMessagesRequest& request, const DescribeChatMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChatMessagesOutcomeCallable DescribeChatMessagesCallable(const Model::DescribeChatMessagesRequest& request);

                /**
                 *包括全媒体和文本两种类型
                 * @param req DescribeIMCdrsRequest
                 * @return DescribeIMCdrsOutcome
                 */
                DescribeIMCdrsOutcome DescribeIMCdrs(const Model::DescribeIMCdrsRequest &request);
                void DescribeIMCdrsAsync(const Model::DescribeIMCdrsRequest& request, const DescribeIMCdrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIMCdrsOutcomeCallable DescribeIMCdrsCallable(const Model::DescribeIMCdrsRequest& request);

                /**
                 *获取电话服务记录与录音
                 * @param req DescribeTelCdrRequest
                 * @return DescribeTelCdrOutcome
                 */
                DescribeTelCdrOutcome DescribeTelCdr(const Model::DescribeTelCdrRequest &request);
                void DescribeTelCdrAsync(const Model::DescribeTelCdrRequest& request, const DescribeTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelCdrOutcomeCallable DescribeTelCdrCallable(const Model::DescribeTelCdrRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_
