// Copyright 2022 ByteDance and/or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MONOLITH_NATIVE_TRAINING_RUNTIME_HASH_TABLE_INITIALIZER_RANDOM_UNIFORM_INITIALIZER
#define MONOLITH_NATIVE_TRAINING_RUNTIME_HASH_TABLE_INITIALIZER_RANDOM_UNIFORM_INITIALIZER
#include <memory>

#include "monolith/native_training/runtime/hash_table/initializer/initializer_config.pb.h"
#include "monolith/native_training/runtime/hash_table/initializer/initializer_interface.h"

namespace monolith {
namespace hash_table {

std::unique_ptr<InitializerInterface> NewRandomUniformInitializer(
    RandomUniformInitializerConfig config);

}  // namespace hash_table
}  // namespace monolith
#endif  // MONOLITH_NATIVE_TRAINING_RUNTIME_HASH_TABLE_INITIALIZER_RANDOM_UNIFORM_INITIALIZER
