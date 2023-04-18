// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__init(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__fini(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__are_equal(const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * lhs, const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__copy(
  const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * input,
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request *
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__create()
{
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * msg = (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request *)malloc(sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request));
  bool success = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__destroy(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * msg)
{
  if (msg) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__init(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request *)calloc(size, sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__fini(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence *
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__create(size_t size)
{
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * array = (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence *)malloc(sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__destroy(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__are_equal(const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * lhs, const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence__copy(
  const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * input,
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request);
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * data =
      (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `graph_image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `accel_map`
// Member `brake_map`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__init(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // graph_image
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->graph_image, 0)) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(msg);
    return false;
  }
  // accel_map
  if (!rosidl_runtime_c__String__init(&msg->accel_map)) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(msg);
    return false;
  }
  // brake_map
  if (!rosidl_runtime_c__String__init(&msg->brake_map)) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * msg)
{
  if (!msg) {
    return;
  }
  // graph_image
  rosidl_runtime_c__uint8__Sequence__fini(&msg->graph_image);
  // accel_map
  rosidl_runtime_c__String__fini(&msg->accel_map);
  // brake_map
  rosidl_runtime_c__String__fini(&msg->brake_map);
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__are_equal(const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * lhs, const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // graph_image
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->graph_image), &(rhs->graph_image)))
  {
    return false;
  }
  // accel_map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->accel_map), &(rhs->accel_map)))
  {
    return false;
  }
  // brake_map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->brake_map), &(rhs->brake_map)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__copy(
  const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * input,
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // graph_image
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->graph_image), &(output->graph_image)))
  {
    return false;
  }
  // accel_map
  if (!rosidl_runtime_c__String__copy(
      &(input->accel_map), &(output->accel_map)))
  {
    return false;
  }
  // brake_map
  if (!rosidl_runtime_c__String__copy(
      &(input->brake_map), &(output->brake_map)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response *
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__create()
{
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * msg = (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response *)malloc(sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response));
  bool success = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__destroy(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * msg)
{
  if (msg) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__init(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response *)calloc(size, sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__fini(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence *
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__create(size_t size)
{
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * array = (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence *)malloc(sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__destroy(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__are_equal(const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * lhs, const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence__copy(
  const tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * input,
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response);
    tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * data =
      (tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
