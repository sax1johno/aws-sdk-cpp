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

#include <aws/amplify/model/CustomRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

CustomRule::CustomRule() : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

CustomRule::CustomRule(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRule& CustomRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRule::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
