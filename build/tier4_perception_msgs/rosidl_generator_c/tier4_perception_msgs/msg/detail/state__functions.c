// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `acceleration_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"
// Member `predicted_paths`
#include "tier4_perception_msgs/msg/detail/predicted_path__functions.h"

bool
tier4_perception_msgs__msg__State__init(tier4_perception_msgs__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // pose_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose_covariance)) {
    tier4_perception_msgs__msg__State__fini(msg);
    return false;
  }
  // orientation_reliable
  // twist_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist_covariance)) {
    tier4_perception_msgs__msg__State__fini(msg);
    return false;
  }
  // twist_reliable
  // acceleration_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->acceleration_covariance)) {
    tier4_perception_msgs__msg__State__fini(msg);
    return false;
  }
  // acceleration_reliable
  // predicted_paths
  if (!tier4_perception_msgs__msg__PredictedPath__Sequence__init(&msg->predicted_paths, 0)) {
    tier4_perception_msgs__msg__State__fini(msg);
    return false;
  }
  return true;
}

void
tier4_perception_msgs__msg__State__fini(tier4_perception_msgs__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // pose_covariance
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose_covariance);
  // orientation_reliable
  // twist_covariance
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist_covariance);
  // twist_reliable
  // acceleration_covariance
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->acceleration_covariance);
  // acceleration_reliable
  // predicted_paths
  tier4_perception_msgs__msg__PredictedPath__Sequence__fini(&msg->predicted_paths);
}

bool
tier4_perception_msgs__msg__State__are_equal(const tier4_perception_msgs__msg__State * lhs, const tier4_perception_msgs__msg__State * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose_covariance), &(rhs->pose_covariance)))
  {
    return false;
  }
  // orientation_reliable
  if (lhs->orientation_reliable != rhs->orientation_reliable) {
    return false;
  }
  // twist_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist_covariance), &(rhs->twist_covariance)))
  {
    return false;
  }
  // twist_reliable
  if (lhs->twist_reliable != rhs->twist_reliable) {
    return false;
  }
  // acceleration_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__are_equal(
      &(lhs->acceleration_covariance), &(rhs->acceleration_covariance)))
  {
    return false;
  }
  // acceleration_reliable
  if (lhs->acceleration_reliable != rhs->acceleration_reliable) {
    return false;
  }
  // predicted_paths
  if (!tier4_perception_msgs__msg__PredictedPath__Sequence__are_equal(
      &(lhs->predicted_paths), &(rhs->predicted_paths)))
  {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__State__copy(
  const tier4_perception_msgs__msg__State * input,
  tier4_perception_msgs__msg__State * output)
{
  if (!input || !output) {
    return false;
  }
  // pose_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose_covariance), &(output->pose_covariance)))
  {
    return false;
  }
  // orientation_reliable
  output->orientation_reliable = input->orientation_reliable;
  // twist_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist_covariance), &(output->twist_covariance)))
  {
    return false;
  }
  // twist_reliable
  output->twist_reliable = input->twist_reliable;
  // acceleration_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__copy(
      &(input->acceleration_covariance), &(output->acceleration_covariance)))
  {
    return false;
  }
  // acceleration_reliable
  output->acceleration_reliable = input->acceleration_reliable;
  // predicted_paths
  if (!tier4_perception_msgs__msg__PredictedPath__Sequence__copy(
      &(input->predicted_paths), &(output->predicted_paths)))
  {
    return false;
  }
  return true;
}

tier4_perception_msgs__msg__State *
tier4_perception_msgs__msg__State__create()
{
  tier4_perception_msgs__msg__State * msg = (tier4_perception_msgs__msg__State *)malloc(sizeof(tier4_perception_msgs__msg__State));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__State));
  bool success = tier4_perception_msgs__msg__State__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__State__destroy(tier4_perception_msgs__msg__State * msg)
{
  if (msg) {
    tier4_perception_msgs__msg__State__fini(msg);
  }
  free(msg);
}


bool
tier4_perception_msgs__msg__State__Sequence__init(tier4_perception_msgs__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_perception_msgs__msg__State * data = NULL;
  if (size) {
    data = (tier4_perception_msgs__msg__State *)calloc(size, sizeof(tier4_perception_msgs__msg__State));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__State__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__State__Sequence__fini(tier4_perception_msgs__msg__State__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_perception_msgs__msg__State__fini(&array->data[i]);
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

tier4_perception_msgs__msg__State__Sequence *
tier4_perception_msgs__msg__State__Sequence__create(size_t size)
{
  tier4_perception_msgs__msg__State__Sequence * array = (tier4_perception_msgs__msg__State__Sequence *)malloc(sizeof(tier4_perception_msgs__msg__State__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__State__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__State__Sequence__destroy(tier4_perception_msgs__msg__State__Sequence * array)
{
  if (array) {
    tier4_perception_msgs__msg__State__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_perception_msgs__msg__State__Sequence__are_equal(const tier4_perception_msgs__msg__State__Sequence * lhs, const tier4_perception_msgs__msg__State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__State__Sequence__copy(
  const tier4_perception_msgs__msg__State__Sequence * input,
  tier4_perception_msgs__msg__State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__State);
    tier4_perception_msgs__msg__State * data =
      (tier4_perception_msgs__msg__State *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__State__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__State__fini(&data[i]);
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
    if (!tier4_perception_msgs__msg__State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
