// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice
#include "tier4_system_msgs/msg/detail/autoware_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `state`
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_system_msgs__msg__AutowareState__init(tier4_system_msgs__msg__AutowareState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    tier4_system_msgs__msg__AutowareState__fini(msg);
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    tier4_system_msgs__msg__AutowareState__fini(msg);
    return false;
  }
  return true;
}

void
tier4_system_msgs__msg__AutowareState__fini(tier4_system_msgs__msg__AutowareState * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

bool
tier4_system_msgs__msg__AutowareState__are_equal(const tier4_system_msgs__msg__AutowareState * lhs, const tier4_system_msgs__msg__AutowareState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
tier4_system_msgs__msg__AutowareState__copy(
  const tier4_system_msgs__msg__AutowareState * input,
  tier4_system_msgs__msg__AutowareState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

tier4_system_msgs__msg__AutowareState *
tier4_system_msgs__msg__AutowareState__create()
{
  tier4_system_msgs__msg__AutowareState * msg = (tier4_system_msgs__msg__AutowareState *)malloc(sizeof(tier4_system_msgs__msg__AutowareState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_system_msgs__msg__AutowareState));
  bool success = tier4_system_msgs__msg__AutowareState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_system_msgs__msg__AutowareState__destroy(tier4_system_msgs__msg__AutowareState * msg)
{
  if (msg) {
    tier4_system_msgs__msg__AutowareState__fini(msg);
  }
  free(msg);
}


bool
tier4_system_msgs__msg__AutowareState__Sequence__init(tier4_system_msgs__msg__AutowareState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_system_msgs__msg__AutowareState * data = NULL;
  if (size) {
    data = (tier4_system_msgs__msg__AutowareState *)calloc(size, sizeof(tier4_system_msgs__msg__AutowareState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_system_msgs__msg__AutowareState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_system_msgs__msg__AutowareState__fini(&data[i - 1]);
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
tier4_system_msgs__msg__AutowareState__Sequence__fini(tier4_system_msgs__msg__AutowareState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_system_msgs__msg__AutowareState__fini(&array->data[i]);
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

tier4_system_msgs__msg__AutowareState__Sequence *
tier4_system_msgs__msg__AutowareState__Sequence__create(size_t size)
{
  tier4_system_msgs__msg__AutowareState__Sequence * array = (tier4_system_msgs__msg__AutowareState__Sequence *)malloc(sizeof(tier4_system_msgs__msg__AutowareState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_system_msgs__msg__AutowareState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_system_msgs__msg__AutowareState__Sequence__destroy(tier4_system_msgs__msg__AutowareState__Sequence * array)
{
  if (array) {
    tier4_system_msgs__msg__AutowareState__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_system_msgs__msg__AutowareState__Sequence__are_equal(const tier4_system_msgs__msg__AutowareState__Sequence * lhs, const tier4_system_msgs__msg__AutowareState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_system_msgs__msg__AutowareState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_system_msgs__msg__AutowareState__Sequence__copy(
  const tier4_system_msgs__msg__AutowareState__Sequence * input,
  tier4_system_msgs__msg__AutowareState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_system_msgs__msg__AutowareState);
    tier4_system_msgs__msg__AutowareState * data =
      (tier4_system_msgs__msg__AutowareState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_system_msgs__msg__AutowareState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_system_msgs__msg__AutowareState__fini(&data[i]);
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
    if (!tier4_system_msgs__msg__AutowareState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
