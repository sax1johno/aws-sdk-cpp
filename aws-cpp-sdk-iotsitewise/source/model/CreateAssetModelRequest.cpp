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

#include <aws/iotsitewise/model/CreateAssetModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetModelRequest::CreateAssetModelRequest() : 
    m_assetModelNameHasBeenSet(false),
    m_assetModelDescriptionHasBeenSet(false),
    m_assetModelPropertiesHasBeenSet(false),
    m_assetModelHierarchiesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAssetModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetModelNameHasBeenSet)
  {
   payload.WithString("assetModelName", m_assetModelName);

  }

  if(m_assetModelDescriptionHasBeenSet)
  {
   payload.WithString("assetModelDescription", m_assetModelDescription);

  }

  if(m_assetModelPropertiesHasBeenSet)
  {
   Array<JsonValue> assetModelPropertiesJsonList(m_assetModelProperties.size());
   for(unsigned assetModelPropertiesIndex = 0; assetModelPropertiesIndex < assetModelPropertiesJsonList.GetLength(); ++assetModelPropertiesIndex)
   {
     assetModelPropertiesJsonList[assetModelPropertiesIndex].AsObject(m_assetModelProperties[assetModelPropertiesIndex].Jsonize());
   }
   payload.WithArray("assetModelProperties", std::move(assetModelPropertiesJsonList));

  }

  if(m_assetModelHierarchiesHasBeenSet)
  {
   Array<JsonValue> assetModelHierarchiesJsonList(m_assetModelHierarchies.size());
   for(unsigned assetModelHierarchiesIndex = 0; assetModelHierarchiesIndex < assetModelHierarchiesJsonList.GetLength(); ++assetModelHierarchiesIndex)
   {
     assetModelHierarchiesJsonList[assetModelHierarchiesIndex].AsObject(m_assetModelHierarchies[assetModelHierarchiesIndex].Jsonize());
   }
   payload.WithArray("assetModelHierarchies", std::move(assetModelHierarchiesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




