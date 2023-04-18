// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/RouteData.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/route_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `segments`
#include "autoware_adapi_v1_msgs/msg/detail/route_segment__functions.h"

bool
autoware_adapi_v1_msgs__msg__RouteData__init(autoware_adapi_v1_msgs__msg__RouteData * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Pose__init(&msg->start)) {
    autoware_adapi_v1_msgs__msg__RouteData__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose__init(&msg->goal)) {
    autoware_adapi_v1_msgs__msg__RouteData__fini(msg);
    return false;
  }
  // segments
  if (!autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__init(&msg->segments, 0)) {
    autoware_adapi_v1_msgs__msg__RouteData__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__RouteData__fini(autoware_adapi_v1_msgs__msg__RouteData * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__Pose__fini(&msg->start);
  // goal
  geometry_msgs__msg__Pose__fini(&msg->goal);
  // segments
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__fini(&msg->segments);
}

bool
autoware_adapi_v1_msgs__msg__RouteData__are_equal(const autoware_adapi_v1_msgs__msg__RouteData * lhs, const autoware_adapi_v1_msgs__msg__RouteData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // segments
  if (!autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__RouteData__copy(
  const autoware_adapi_v1_msgs__msg__RouteData * input,
  autoware_adapi_v1_msgs__msg__RouteData * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Pose__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // segments
  if (!autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__RouteData *
autoware_adapi_v1_msgs__msg__RouteData__create()
{
  autoware_adapi_v1_msgs__msg__RouteData * msg = (autoware_adapi_v1_msgs__msg__RouteData *)malloc(sizeof(autoware_adapi_v1_msgs__msg__RouteData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__RouteData));
  bool success = autoware_adapi_v1_msgs__msg__RouteData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__RouteData__destroy(autoware_adapi_v1_msgs__msg__RouteData * msg)
{
  if (msg) {
    autoware_adapi_v1_msgs__msg__RouteData__fini(msg);
  }
  free(msg);
}


bool
autoware_adapi_v1_msgs__msg__RouteData__Sequence__init(autoware_adapi_v1_msgs__msg__RouteData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_adapi_v1_msgs__msg__RouteData * data = NULL;
  if (size) {
    data = (autoware_adapi_v1_msgs__msg__RouteData *)calloc(size, sizeof(autoware_adapi_v1_msgs__msg__RouteData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__RouteData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__RouteData__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__RouteData__Sequence__fini(autoware_adapi_v1_msgs__msg__RouteData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__msg__RouteData__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__RouteData__Sequence *
autoware_adapi_v1_msgs__msg__RouteData__Sequence__create(size_t size)
{
  autoware_adapi_v1_msgs__msg__RouteData__Sequence * array = (autoware_adapi_v1_msgs__msg__RouteData__Sequence *)malloc(sizeof(autoware_adapi_v1_msgs__msg__RouteData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__RouteData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__RouteData__Sequence__destroy(autoware_adapi_v1_msgs__msg__RouteData__Sequence * array)
{
  if (array) {
    autoware_adapi_v1_msgs__msg__RouteData__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_adapi_v1_msgs__msg__RouteData__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__RouteData__Sequence * lhs, const autoware_adapi_v1_msgs__msg__RouteData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__RouteData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__RouteData__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__RouteData__Sequence * input,
  autoware_adapi_v1_msgs__msg__RouteData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__RouteData);
    autoware_adapi_v1_msgs__msg__RouteData * data =
      (autoware_adapi_v1_msgs__msg__RouteData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__RouteData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__RouteData__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__msg__RouteData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
