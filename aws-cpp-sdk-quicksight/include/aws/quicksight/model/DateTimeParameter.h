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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Date time parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeParameter">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DateTimeParameter
  {
  public:
    DateTimeParameter();
    DateTimeParameter(Aws::Utils::Json::JsonView jsonValue);
    DateTimeParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline DateTimeParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the dataset.</p>
     */
    inline DateTimeParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the dataset.</p>
     */
    inline DateTimeParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Values.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetValues() const{ return m_values; }

    /**
     * <p>Values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::Utils::DateTime>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::Utils::DateTime>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Values.</p>
     */
    inline DateTimeParameter& WithValues(const Aws::Vector<Aws::Utils::DateTime>& value) { SetValues(value); return *this;}

    /**
     * <p>Values.</p>
     */
    inline DateTimeParameter& WithValues(Aws::Vector<Aws::Utils::DateTime>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Values.</p>
     */
    inline DateTimeParameter& AddValues(const Aws::Utils::DateTime& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Values.</p>
     */
    inline DateTimeParameter& AddValues(Aws::Utils::DateTime&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::Utils::DateTime> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
