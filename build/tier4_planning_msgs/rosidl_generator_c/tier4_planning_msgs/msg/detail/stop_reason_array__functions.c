// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/StopReasonArray.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/stop_reason_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stop_reasons`
#include "tier4_planning_msgs/msg/detail/stop_reason__functions.h"

bool
tier4_planning_msgs__msg__StopReasonArray__init(tier4_planning_msgs__msg__StopReasonArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_planning_msgs__msg__StopReasonArray__fini(msg);
    return false;
  }
  // stop_reasons
  if (!tier4_planning_msgs__msg__StopReason__Sequence__init(&msg->stop_reasons, 0)) {
    tier4_planning_msgs__msg__StopReasonArray__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__StopReasonArray__fini(tier4_planning_msgs__msg__StopReasonArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // stop_reasons
  tier4_planning_msgs__msg__StopReason__Sequence__fini(&msg->stop_reasons);
}

bool
tier4_planning_msgs__msg__StopReasonArray__are_equal(const tier4_planning_msgs__msg__StopReasonArray * lhs, const tier4_planning_msgs__msg__StopReasonArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // stop_reasons
  if (!tier4_planning_msgs__msg__StopReason__Sequence__are_equal(
      &(lhs->stop_reasons), &(rhs->stop_reasons)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__StopReasonArray__copy(
  const tier4_planning_msgs__msg__StopReasonArray * input,
  tier4_planning_msgs__msg__StopReasonArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // stop_reasons
  if (!tier4_planning_msgs__msg__StopReason__Sequence__copy(
      &(input->stop_reasons), &(output->stop_reasons)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__StopReasonArray *
tier4_planning_msgs__msg__StopReasonArray__create()
{
  tier4_planning_msgs__msg__StopReasonArray * msg = (tier4_planning_msgs__msg__StopReasonArray *)malloc(sizeof(tier4_planning_msgs__msg__StopReasonArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__StopReasonArray));
  bool success = tier4_planning_msgs__msg__StopReasonArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__StopReasonArray__destroy(tier4_planning_msgs__msg__StopReasonArray * msg)
{
  if (msg) {
    tier4_planning_msgs__msg__StopReasonArray__fini(msg);
  }
  free(msg);
}


bool
tier4_planning_msgs__msg__StopReasonArray__Sequence__init(tier4_planning_msgs__msg__StopReasonArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_planning_msgs__msg__StopReasonArray * data = NULL;
  if (size) {
    data = (tier4_planning_msgs__msg__StopReasonArray *)calloc(size, sizeof(tier4_planning_msgs__msg__StopReasonArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__StopReasonArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__StopReasonArray__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__StopReasonArray__Sequence__fini(tier4_planning_msgs__msg__StopReasonArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__StopReasonArray__fini(&array->data[i]);
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

tier4_planning_msgs__msg__StopReasonArray__Sequence *
tier4_planning_msgs__msg__StopReasonArray__Sequence__create(size_t size)
{
  tier4_planning_msgs__msg__StopReasonArray__Sequence * array = (tier4_planning_msgs__msg__StopReasonArray__Sequence *)malloc(sizeof(tier4_planning_msgs__msg__StopReasonArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__StopReasonArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__StopReasonArray__Sequence__destroy(tier4_planning_msgs__msg__StopReasonArray__Sequence * array)
{
  if (array) {
    tier4_planning_msgs__msg__StopReasonArray__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_planning_msgs__msg__StopReasonArray__Sequence__are_equal(const tier4_planning_msgs__msg__StopReasonArray__Sequence * lhs, const tier4_planning_msgs__msg__StopReasonArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__StopReasonArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__StopReasonArray__Sequence__copy(
  const tier4_planning_msgs__msg__StopReasonArray__Sequence * input,
  tier4_planning_msgs__msg__StopReasonArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__StopReasonArray);
    tier4_planning_msgs__msg__StopReasonArray * data =
      (tier4_planning_msgs__msg__StopReasonArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__StopReasonArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__StopReasonArray__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__StopReasonArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
