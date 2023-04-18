// Copyright 2021 Arm Limited and Contributors.
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

#include "tvm_utility/pipeline.hpp"

#ifndef YOLO_V2_TINY_INFERENCE_ENGINE_TVM_CONFIG_HPP_  // NOLINT
#define YOLO_V2_TINY_INFERENCE_ENGINE_TVM_CONFIG_HPP_

namespace model_zoo
{
namespace perception
{
namespace camera_obstacle_detection
{
namespace yolo_v2_tiny
{
namespace tensorflow_fp32_coco
{

static const tvm_utility::pipeline::InferenceEngineTVMConfig config {
  {
    2,
    1,
    0
  },  // modelzoo_version

  "yolo_v2_tiny",  // network_name
  "llvm",  // network_backend

  "./deploy_lib.so",  //network_module_path
  "./deploy_graph.json",  // network_graph_path
  "./deploy_param.params",  // network_params_path

  kDLFloat,  // tvm_dtype_code
  32,  // tvm_dtype_bits
  1,  // tvm_dtype_lanes

  kDLCPU,  // tvm_device_type
  0,  // tvm_device_id

  {
    {"input", {-1, 416, 416, 3}}
  },  // network_inputs

  {
    {"output", {1, 13, 13, 425}}
  }  // network_outputs
};

}  // namespace tensorflow_fp32_coco
}  // namespace yolo_v2_tiny
}  // namespace camera_obstacle_detection
}  // namespace perception
}  // namespace model_zoo
#endif  // YOLO_V2_TINY_INFERENCE_ENGINE_TVM_CONFIG_HPP_  // NOLINT
