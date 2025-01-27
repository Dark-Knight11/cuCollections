/*
 * Copyright (c) 2022, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace cuco {
namespace sentinel {

template <typename T>
struct empty_key {
  __host__ __device__ empty_key(T v) : value{v} {}
  T value;
};

template <typename T>
struct empty_value {
  __host__ __device__ empty_value(T v) : value{v} {}
  T value;
};

template <typename T>
struct erased_key {
  __host__ __device__ erased_key(T v) : value{v} {}
  T value;
};

}  // namespace sentinel
}  // namespace cuco