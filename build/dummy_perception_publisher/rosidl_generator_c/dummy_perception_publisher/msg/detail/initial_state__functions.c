// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice
#include "dummy_perception_publisher/msg/detail/initial_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `accel_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"

bool
dummy_perception_publisher__msg__InitialState__init(dummy_perception_publisher__msg__InitialState * msg)
{
  if (!msg) {
    return false;
  }
  // pose_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose_covariance)) {
    dummy_perception_publisher__msg__InitialState__fini(msg);
    return false;
  }
  // twist_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist_covariance)) {
    dummy_perception_publisher__msg__InitialState__fini(msg);
    return false;
  }
  // accel_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->accel_covariance)) {
    dummy_perception_publisher__msg__InitialState__fini(msg);
    return false;
  }
  return true;
}

void
dummy_perception_publisher__msg__InitialState__fini(dummy_perception_publisher__msg__InitialState * msg)
{
  if (!msg) {
    return;
  }
  // pose_covariance
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose_covariance);
  // twist_covariance
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist_covariance);
  // accel_covariance
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->accel_covariance);
}

bool
dummy_perception_publisher__msg__InitialState__are_equal(const dummy_perception_publisher__msg__InitialState * lhs, const dummy_perception_publisher__msg__InitialState * rhs)
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
  // twist_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist_covariance), &(rhs->twist_covariance)))
  {
    return false;
  }
  // accel_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__are_equal(
      &(lhs->accel_covariance), &(rhs->accel_covariance)))
  {
    return false;
  }
  return true;
}

bool
dummy_perception_publisher__msg__InitialState__copy(
  const dummy_perception_publisher__msg__InitialState * input,
  dummy_perception_publisher__msg__InitialState * output)
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
  // twist_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist_covariance), &(output->twist_covariance)))
  {
    return false;
  }
  // accel_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__copy(
      &(input->accel_covariance), &(output->accel_covariance)))
  {
    return false;
  }
  return true;
}

dummy_perception_publisher__msg__InitialState *
dummy_perception_publisher__msg__InitialState__create()
{
  dummy_perception_publisher__msg__InitialState * msg = (dummy_perception_publisher__msg__InitialState *)malloc(sizeof(dummy_perception_publisher__msg__InitialState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dummy_perception_publisher__msg__InitialState));
  bool success = dummy_perception_publisher__msg__InitialState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dummy_perception_publisher__msg__InitialState__destroy(dummy_perception_publisher__msg__InitialState * msg)
{
  if (msg) {
    dummy_perception_publisher__msg__InitialState__fini(msg);
  }
  free(msg);
}


bool
dummy_perception_publisher__msg__InitialState__Sequence__init(dummy_perception_publisher__msg__InitialState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dummy_perception_publisher__msg__InitialState * data = NULL;
  if (size) {
    data = (dummy_perception_publisher__msg__InitialState *)calloc(size, sizeof(dummy_perception_publisher__msg__InitialState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dummy_perception_publisher__msg__InitialState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dummy_perception_publisher__msg__InitialState__fini(&data[i - 1]);
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
dummy_perception_publisher__msg__InitialState__Sequence__fini(dummy_perception_publisher__msg__InitialState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dummy_perception_publisher__msg__InitialState__fini(&array->data[i]);
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

dummy_perception_publisher__msg__InitialState__Sequence *
dummy_perception_publisher__msg__InitialState__Sequence__create(size_t size)
{
  dummy_perception_publisher__msg__InitialState__Sequence * array = (dummy_perception_publisher__msg__InitialState__Sequence *)malloc(sizeof(dummy_perception_publisher__msg__InitialState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dummy_perception_publisher__msg__InitialState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dummy_perception_publisher__msg__InitialState__Sequence__destroy(dummy_perception_publisher__msg__InitialState__Sequence * array)
{
  if (array) {
    dummy_perception_publisher__msg__InitialState__Sequence__fini(array);
  }
  free(array);
}

bool
dummy_perception_publisher__msg__InitialState__Sequence__are_equal(const dummy_perception_publisher__msg__InitialState__Sequence * lhs, const dummy_perception_publisher__msg__InitialState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dummy_perception_publisher__msg__InitialState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dummy_perception_publisher__msg__InitialState__Sequence__copy(
  const dummy_perception_publisher__msg__InitialState__Sequence * input,
  dummy_perception_publisher__msg__InitialState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dummy_perception_publisher__msg__InitialState);
    dummy_perception_publisher__msg__InitialState * data =
      (dummy_perception_publisher__msg__InitialState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dummy_perception_publisher__msg__InitialState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dummy_perception_publisher__msg__InitialState__fini(&data[i]);
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
    if (!dummy_perception_publisher__msg__InitialState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
