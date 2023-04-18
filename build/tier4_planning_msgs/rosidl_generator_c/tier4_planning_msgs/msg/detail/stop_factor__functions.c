// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/StopFactor.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/stop_factor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stop_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `stop_factor_points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
tier4_planning_msgs__msg__StopFactor__init(tier4_planning_msgs__msg__StopFactor * msg)
{
  if (!msg) {
    return false;
  }
  // stop_pose
  if (!geometry_msgs__msg__Pose__init(&msg->stop_pose)) {
    tier4_planning_msgs__msg__StopFactor__fini(msg);
    return false;
  }
  // dist_to_stop_pose
  // stop_factor_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->stop_factor_points, 0)) {
    tier4_planning_msgs__msg__StopFactor__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__StopFactor__fini(tier4_planning_msgs__msg__StopFactor * msg)
{
  if (!msg) {
    return;
  }
  // stop_pose
  geometry_msgs__msg__Pose__fini(&msg->stop_pose);
  // dist_to_stop_pose
  // stop_factor_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->stop_factor_points);
}

bool
tier4_planning_msgs__msg__StopFactor__are_equal(const tier4_planning_msgs__msg__StopFactor * lhs, const tier4_planning_msgs__msg__StopFactor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->stop_pose), &(rhs->stop_pose)))
  {
    return false;
  }
  // dist_to_stop_pose
  if (lhs->dist_to_stop_pose != rhs->dist_to_stop_pose) {
    return false;
  }
  // stop_factor_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->stop_factor_points), &(rhs->stop_factor_points)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__StopFactor__copy(
  const tier4_planning_msgs__msg__StopFactor * input,
  tier4_planning_msgs__msg__StopFactor * output)
{
  if (!input || !output) {
    return false;
  }
  // stop_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->stop_pose), &(output->stop_pose)))
  {
    return false;
  }
  // dist_to_stop_pose
  output->dist_to_stop_pose = input->dist_to_stop_pose;
  // stop_factor_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->stop_factor_points), &(output->stop_factor_points)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__StopFactor *
tier4_planning_msgs__msg__StopFactor__create()
{
  tier4_planning_msgs__msg__StopFactor * msg = (tier4_planning_msgs__msg__StopFactor *)malloc(sizeof(tier4_planning_msgs__msg__StopFactor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__StopFactor));
  bool success = tier4_planning_msgs__msg__StopFactor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__StopFactor__destroy(tier4_planning_msgs__msg__StopFactor * msg)
{
  if (msg) {
    tier4_planning_msgs__msg__StopFactor__fini(msg);
  }
  free(msg);
}


bool
tier4_planning_msgs__msg__StopFactor__Sequence__init(tier4_planning_msgs__msg__StopFactor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_planning_msgs__msg__StopFactor * data = NULL;
  if (size) {
    data = (tier4_planning_msgs__msg__StopFactor *)calloc(size, sizeof(tier4_planning_msgs__msg__StopFactor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__StopFactor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__StopFactor__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__StopFactor__Sequence__fini(tier4_planning_msgs__msg__StopFactor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__StopFactor__fini(&array->data[i]);
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

tier4_planning_msgs__msg__StopFactor__Sequence *
tier4_planning_msgs__msg__StopFactor__Sequence__create(size_t size)
{
  tier4_planning_msgs__msg__StopFactor__Sequence * array = (tier4_planning_msgs__msg__StopFactor__Sequence *)malloc(sizeof(tier4_planning_msgs__msg__StopFactor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__StopFactor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__StopFactor__Sequence__destroy(tier4_planning_msgs__msg__StopFactor__Sequence * array)
{
  if (array) {
    tier4_planning_msgs__msg__StopFactor__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_planning_msgs__msg__StopFactor__Sequence__are_equal(const tier4_planning_msgs__msg__StopFactor__Sequence * lhs, const tier4_planning_msgs__msg__StopFactor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__StopFactor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__StopFactor__Sequence__copy(
  const tier4_planning_msgs__msg__StopFactor__Sequence * input,
  tier4_planning_msgs__msg__StopFactor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__StopFactor);
    tier4_planning_msgs__msg__StopFactor * data =
      (tier4_planning_msgs__msg__StopFactor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__StopFactor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__StopFactor__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__StopFactor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
