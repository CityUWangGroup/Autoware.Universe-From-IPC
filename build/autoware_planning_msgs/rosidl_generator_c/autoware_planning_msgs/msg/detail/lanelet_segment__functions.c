// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice
#include "autoware_planning_msgs/msg/detail/lanelet_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `preferred_primitive`
// Member `primitives`
#include "autoware_planning_msgs/msg/detail/lanelet_primitive__functions.h"

bool
autoware_planning_msgs__msg__LaneletSegment__init(autoware_planning_msgs__msg__LaneletSegment * msg)
{
  if (!msg) {
    return false;
  }
  // preferred_primitive
  if (!autoware_planning_msgs__msg__LaneletPrimitive__init(&msg->preferred_primitive)) {
    autoware_planning_msgs__msg__LaneletSegment__fini(msg);
    return false;
  }
  // primitives
  if (!autoware_planning_msgs__msg__LaneletPrimitive__Sequence__init(&msg->primitives, 0)) {
    autoware_planning_msgs__msg__LaneletSegment__fini(msg);
    return false;
  }
  return true;
}

void
autoware_planning_msgs__msg__LaneletSegment__fini(autoware_planning_msgs__msg__LaneletSegment * msg)
{
  if (!msg) {
    return;
  }
  // preferred_primitive
  autoware_planning_msgs__msg__LaneletPrimitive__fini(&msg->preferred_primitive);
  // primitives
  autoware_planning_msgs__msg__LaneletPrimitive__Sequence__fini(&msg->primitives);
}

bool
autoware_planning_msgs__msg__LaneletSegment__are_equal(const autoware_planning_msgs__msg__LaneletSegment * lhs, const autoware_planning_msgs__msg__LaneletSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // preferred_primitive
  if (!autoware_planning_msgs__msg__LaneletPrimitive__are_equal(
      &(lhs->preferred_primitive), &(rhs->preferred_primitive)))
  {
    return false;
  }
  // primitives
  if (!autoware_planning_msgs__msg__LaneletPrimitive__Sequence__are_equal(
      &(lhs->primitives), &(rhs->primitives)))
  {
    return false;
  }
  return true;
}

bool
autoware_planning_msgs__msg__LaneletSegment__copy(
  const autoware_planning_msgs__msg__LaneletSegment * input,
  autoware_planning_msgs__msg__LaneletSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // preferred_primitive
  if (!autoware_planning_msgs__msg__LaneletPrimitive__copy(
      &(input->preferred_primitive), &(output->preferred_primitive)))
  {
    return false;
  }
  // primitives
  if (!autoware_planning_msgs__msg__LaneletPrimitive__Sequence__copy(
      &(input->primitives), &(output->primitives)))
  {
    return false;
  }
  return true;
}

autoware_planning_msgs__msg__LaneletSegment *
autoware_planning_msgs__msg__LaneletSegment__create()
{
  autoware_planning_msgs__msg__LaneletSegment * msg = (autoware_planning_msgs__msg__LaneletSegment *)malloc(sizeof(autoware_planning_msgs__msg__LaneletSegment));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_planning_msgs__msg__LaneletSegment));
  bool success = autoware_planning_msgs__msg__LaneletSegment__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_planning_msgs__msg__LaneletSegment__destroy(autoware_planning_msgs__msg__LaneletSegment * msg)
{
  if (msg) {
    autoware_planning_msgs__msg__LaneletSegment__fini(msg);
  }
  free(msg);
}


bool
autoware_planning_msgs__msg__LaneletSegment__Sequence__init(autoware_planning_msgs__msg__LaneletSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_planning_msgs__msg__LaneletSegment * data = NULL;
  if (size) {
    data = (autoware_planning_msgs__msg__LaneletSegment *)calloc(size, sizeof(autoware_planning_msgs__msg__LaneletSegment));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_planning_msgs__msg__LaneletSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_planning_msgs__msg__LaneletSegment__fini(&data[i - 1]);
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
autoware_planning_msgs__msg__LaneletSegment__Sequence__fini(autoware_planning_msgs__msg__LaneletSegment__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_planning_msgs__msg__LaneletSegment__fini(&array->data[i]);
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

autoware_planning_msgs__msg__LaneletSegment__Sequence *
autoware_planning_msgs__msg__LaneletSegment__Sequence__create(size_t size)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * array = (autoware_planning_msgs__msg__LaneletSegment__Sequence *)malloc(sizeof(autoware_planning_msgs__msg__LaneletSegment__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_planning_msgs__msg__LaneletSegment__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_planning_msgs__msg__LaneletSegment__Sequence__destroy(autoware_planning_msgs__msg__LaneletSegment__Sequence * array)
{
  if (array) {
    autoware_planning_msgs__msg__LaneletSegment__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_planning_msgs__msg__LaneletSegment__Sequence__are_equal(const autoware_planning_msgs__msg__LaneletSegment__Sequence * lhs, const autoware_planning_msgs__msg__LaneletSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_planning_msgs__msg__LaneletSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_planning_msgs__msg__LaneletSegment__Sequence__copy(
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * input,
  autoware_planning_msgs__msg__LaneletSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_planning_msgs__msg__LaneletSegment);
    autoware_planning_msgs__msg__LaneletSegment * data =
      (autoware_planning_msgs__msg__LaneletSegment *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_planning_msgs__msg__LaneletSegment__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_planning_msgs__msg__LaneletSegment__fini(&data[i]);
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
    if (!autoware_planning_msgs__msg__LaneletSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
