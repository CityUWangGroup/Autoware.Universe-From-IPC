// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/StopReason.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/stop_reason__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `stop_factors`
#include "tier4_planning_msgs/msg/detail/stop_factor__functions.h"

bool
tier4_planning_msgs__msg__StopReason__init(tier4_planning_msgs__msg__StopReason * msg)
{
  if (!msg) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    tier4_planning_msgs__msg__StopReason__fini(msg);
    return false;
  }
  // stop_factors
  if (!tier4_planning_msgs__msg__StopFactor__Sequence__init(&msg->stop_factors, 0)) {
    tier4_planning_msgs__msg__StopReason__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__StopReason__fini(tier4_planning_msgs__msg__StopReason * msg)
{
  if (!msg) {
    return;
  }
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // stop_factors
  tier4_planning_msgs__msg__StopFactor__Sequence__fini(&msg->stop_factors);
}

bool
tier4_planning_msgs__msg__StopReason__are_equal(const tier4_planning_msgs__msg__StopReason * lhs, const tier4_planning_msgs__msg__StopReason * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // stop_factors
  if (!tier4_planning_msgs__msg__StopFactor__Sequence__are_equal(
      &(lhs->stop_factors), &(rhs->stop_factors)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__StopReason__copy(
  const tier4_planning_msgs__msg__StopReason * input,
  tier4_planning_msgs__msg__StopReason * output)
{
  if (!input || !output) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // stop_factors
  if (!tier4_planning_msgs__msg__StopFactor__Sequence__copy(
      &(input->stop_factors), &(output->stop_factors)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__StopReason *
tier4_planning_msgs__msg__StopReason__create()
{
  tier4_planning_msgs__msg__StopReason * msg = (tier4_planning_msgs__msg__StopReason *)malloc(sizeof(tier4_planning_msgs__msg__StopReason));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__StopReason));
  bool success = tier4_planning_msgs__msg__StopReason__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__StopReason__destroy(tier4_planning_msgs__msg__StopReason * msg)
{
  if (msg) {
    tier4_planning_msgs__msg__StopReason__fini(msg);
  }
  free(msg);
}


bool
tier4_planning_msgs__msg__StopReason__Sequence__init(tier4_planning_msgs__msg__StopReason__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_planning_msgs__msg__StopReason * data = NULL;
  if (size) {
    data = (tier4_planning_msgs__msg__StopReason *)calloc(size, sizeof(tier4_planning_msgs__msg__StopReason));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__StopReason__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__StopReason__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__StopReason__Sequence__fini(tier4_planning_msgs__msg__StopReason__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__StopReason__fini(&array->data[i]);
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

tier4_planning_msgs__msg__StopReason__Sequence *
tier4_planning_msgs__msg__StopReason__Sequence__create(size_t size)
{
  tier4_planning_msgs__msg__StopReason__Sequence * array = (tier4_planning_msgs__msg__StopReason__Sequence *)malloc(sizeof(tier4_planning_msgs__msg__StopReason__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__StopReason__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__StopReason__Sequence__destroy(tier4_planning_msgs__msg__StopReason__Sequence * array)
{
  if (array) {
    tier4_planning_msgs__msg__StopReason__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_planning_msgs__msg__StopReason__Sequence__are_equal(const tier4_planning_msgs__msg__StopReason__Sequence * lhs, const tier4_planning_msgs__msg__StopReason__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__StopReason__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__StopReason__Sequence__copy(
  const tier4_planning_msgs__msg__StopReason__Sequence * input,
  tier4_planning_msgs__msg__StopReason__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__StopReason);
    tier4_planning_msgs__msg__StopReason * data =
      (tier4_planning_msgs__msg__StopReason *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__StopReason__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__StopReason__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__StopReason__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
