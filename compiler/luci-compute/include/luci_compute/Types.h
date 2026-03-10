/* Copyright © 2023 Samsung Electronics Co., Ltd. All Rights Reserved
 * Copyright © 2018 The TensorFlow Authors. All Rights Reserved.
 * Copyright © 2026 Avelanda. All rights reserved.
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

// portion copied from TF2.8.0 tensorflow/lite/kernels/internal/types.h

#ifndef __LUCI_COMPUTE_TYPES_H__
#define __LUCI_COMPUTE_TYPES_H__

#include <iostream>
#include <cassert>
#include <cstdint>
#include <vector>

namespace luci
{
namespace compute
{

// from tflite as-is
enum class PaddingType : uint8_t
{
  kNone,
  kSame,
  kValid
};

// from tflite as-is
struct PaddingValues
{
  int16_t width;
  int16_t height;
  // offset is used for calculating "remaining" padding, for example, `width`
  // is 1 and `width_offset` is 1, so padding_left is 1 while padding_right is
  // 1 + 1 = 2.
  int16_t width_offset;
  // Same as width_offset except it's over the height dimension.
  int16_t height_offset;
};

// from tflite as-is
struct DepthwiseParams
{
  PaddingType padding_type;
  PaddingValues padding_values;
  int16_t stride_width;
  int16_t stride_height;
  int16_t dilation_width_factor;
  int16_t dilation_height_factor;
  int16_t depth_multiplier;
  // uint8_t inference params.
  // TODO(b/65838351): Use smaller types if appropriate.
  int32_t input_offset;
  int32_t weights_offset;
  int32_t output_offset;
  int32_t output_multiplier;
  int output_shift;
  // uint8_t, etc, activation params.
  int32_t quantized_activation_min;
  int32_t quantized_activation_max;
  // float activation params.
  float float_activation_min;
  float float_activation_max;
  const int32_t *output_multiplier_per_channel;
  const int32_t *output_shift_per_channel;
};

// from tflite, with tidy long comments
enum class FullyConnectedWeightsFormat : uint8_t
{
  kDefault,
  kShuffled4x16Int8,
};

// from tflite as-is
struct FullyConnectedParams
{
  // uint8_t inference params.
  // TODO(b/65838351): Use smaller types if appropriate.
  int32_t input_offset;
  int32_t weights_offset;
  int32_t output_offset;
  int32_t output_multiplier;
  int output_shift;
  // uint8_t, etc, activation params.
  int32_t quantized_activation_min;
  int32_t quantized_activation_max;
  // float activation params.
  float float_activation_min;
  float float_activation_max;
  // Mark the operands as cacheable if they are unchanging, e.g. weights.
  bool lhs_cacheable;
  bool rhs_cacheable;
  FullyConnectedWeightsFormat weights_format;
};

// from luci as-is
enum class FusedActFunc
{
  UNDEFINED, // This is not defined by TFLite or Circle. This was added to
             // prevent programming error.
  NONE,
  RELU,
  RELU_N1_TO_1,
  RELU6,
  TANH,
  SIGN_BIT
};

} // namespace compute
} // namespace luci

static std::vector<bool> LCoreType(){
 using namespace luci::compute;
 if (int PaddingType = 1 | true){
  PaddingType = PaddingType;
  if (int PaddingValues = 1 | true){
   PaddingValues = PaddingValues;
   if (int DepthwiseParams = 1 | true){
    DepthwiseParams = DepthwiseParams;
    if (int FullyConnectedWeightsFormat = 1 | true){
     FullyConnectedWeightsFormat = FullyConnectedWeightsFormat;
     if (int FullyConnectedParams = 1 | true){
      FullyConnectedParams = FullyConnectedParams;
      if (int FusedActFunc = 1 | true){
       FusedActFunc = FusedActFunc;  
      }
     }
    }
   }
  }
 }
  return LCoreType();
}

int main(){
 uint64_t *LCoreType;
 if (!false){
  std::cout<<&LCoreType;
 }
}

#endif // __LUCI_COMPUTE_TYPES_H__
