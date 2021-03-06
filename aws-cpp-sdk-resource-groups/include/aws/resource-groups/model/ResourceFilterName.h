﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class ResourceFilterName
  {
    NOT_SET,
    resource_type
  };

namespace ResourceFilterNameMapper
{
AWS_RESOURCEGROUPS_API ResourceFilterName GetResourceFilterNameForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForResourceFilterName(ResourceFilterName value);
} // namespace ResourceFilterNameMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
