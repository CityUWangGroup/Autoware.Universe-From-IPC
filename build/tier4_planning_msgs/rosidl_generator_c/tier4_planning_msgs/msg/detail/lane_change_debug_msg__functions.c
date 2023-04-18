// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `object_id`
// Member `failed_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `relative_distance`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
tier4_planning_msgs__msg__LaneChangeDebugMsg__init(tier4_planning_msgs__msg__LaneChangeDebugMsg * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(msg);
    return false;
  }
  // allow_lane_change
  // is_front
  // relative_distance
  if (!geometry_msgs__msg__Pose__init(&msg->relative_distance)) {
    tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(msg);
    return false;
  }
  // velocity
  // failed_reason
  if (!rosidl_runtime_c__String__init(&msg->failed_reason)) {
    tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(tier4_planning_msgs__msg__LaneChangeDebugMsg * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // allow_lane_change
  // is_front
  // relative_distance
  geometry_msgs__msg__Pose__fini(&msg->relative_distance);
  // velocity
  // failed_reason
  rosidl_runtime_c__String__fini(&msg->failed_reason);
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsg__are_equal(const tier4_planning_msgs__msg__LaneChangeDebugMsg * lhs, const tier4_planning_msgs__msg__LaneChangeDebugMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // allow_lane_change
  if (lhs->allow_lane_change != rhs->allow_lane_change) {
    return false;
  }
  // is_front
  if (lhs->is_front != rhs->is_front) {
    return false;
  }
  // relative_distance
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->relative_distance), &(rhs->relative_distance)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // failed_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->failed_reason), &(rhs->failed_reason)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsg__copy(
  const tier4_planning_msgs__msg__LaneChangeDebugMsg * input,
  tier4_planning_msgs__msg__LaneChangeDebugMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // allow_lane_change
  output->allow_lane_change = input->allow_lane_change;
  // is_front
  output->is_front = input->is_front;
  // relative_distance
  if (!geometry_msgs__msg__Pose__copy(
      &(input->relative_distance), &(output->relative_distance)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // failed_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->failed_reason), &(output->failed_reason)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__LaneChangeDebugMsg *
tier4_planning_msgs__msg__LaneChangeDebugMsg__create()
{
  tier4_planning_msgs__msg__LaneChangeDebugMsg * msg = (tier4_planning_msgs__msg__LaneChangeDebugMsg *)malloc(sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsg));
  bool success = tier4_planning_msgs__msg__LaneChangeDebugMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__LaneChangeDebugMsg__destroy(tier4_planning_msgs__msg__LaneChangeDebugMsg * msg)
{
  if (msg) {
    tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(msg);
  }
  free(msg);
}


bool
tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__init(tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_planning_msgs__msg__LaneChangeDebugMsg * data = NULL;
  if (size) {
    data = (tier4_planning_msgs__msg__LaneChangeDebugMsg *)calloc(size, sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__LaneChangeDebugMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__fini(tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(&array->data[i]);
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

tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence *
tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__create(size_t size)
{
  tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * array = (tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence *)malloc(sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__destroy(tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * array)
{
  if (array) {
    tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__are_equal(const tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * lhs, const tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__copy(
  const tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * input,
  tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsg);
    tier4_planning_msgs__msg__LaneChangeDebugMsg * data =
      (tier4_planning_msgs__msg__LaneChangeDebugMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
