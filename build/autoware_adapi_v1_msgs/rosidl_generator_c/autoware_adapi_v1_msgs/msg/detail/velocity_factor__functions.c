// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__init(autoware_adapi_v1_msgs__msg__VelocityFactor * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  // distance
  // type
  // status
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__VelocityFactor__fini(autoware_adapi_v1_msgs__msg__VelocityFactor * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // distance
  // type
  // status
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__are_equal(const autoware_adapi_v1_msgs__msg__VelocityFactor * lhs, const autoware_adapi_v1_msgs__msg__VelocityFactor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__copy(
  const autoware_adapi_v1_msgs__msg__VelocityFactor * input,
  autoware_adapi_v1_msgs__msg__VelocityFactor * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // type
  output->type = input->type;
  // status
  output->status = input->status;
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__VelocityFactor *
autoware_adapi_v1_msgs__msg__VelocityFactor__create()
{
  autoware_adapi_v1_msgs__msg__VelocityFactor * msg = (autoware_adapi_v1_msgs__msg__VelocityFactor *)malloc(sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor));
  bool success = autoware_adapi_v1_msgs__msg__VelocityFactor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__VelocityFactor__destroy(autoware_adapi_v1_msgs__msg__VelocityFactor * msg)
{
  if (msg) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
  }
  free(msg);
}


bool
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__init(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_adapi_v1_msgs__msg__VelocityFactor * data = NULL;
  if (size) {
    data = (autoware_adapi_v1_msgs__msg__VelocityFactor *)calloc(size, sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__VelocityFactor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__VelocityFactor__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__fini(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__msg__VelocityFactor__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence *
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__create(size_t size)
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array = (autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence *)malloc(sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__destroy(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array)
{
  if (array) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * lhs, const autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VelocityFactor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * input,
  autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor);
    autoware_adapi_v1_msgs__msg__VelocityFactor * data =
      (autoware_adapi_v1_msgs__msg__VelocityFactor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__VelocityFactor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__VelocityFactor__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__msg__VelocityFactor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
