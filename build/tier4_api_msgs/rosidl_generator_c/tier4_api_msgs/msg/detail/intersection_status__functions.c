// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_api_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice
#include "tier4_api_msgs/msg/detail/intersection_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
tier4_api_msgs__msg__IntersectionStatus__init(tier4_api_msgs__msg__IntersectionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_api_msgs__msg__IntersectionStatus__fini(msg);
    return false;
  }
  // status
  return true;
}

void
tier4_api_msgs__msg__IntersectionStatus__fini(tier4_api_msgs__msg__IntersectionStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
}

bool
tier4_api_msgs__msg__IntersectionStatus__are_equal(const tier4_api_msgs__msg__IntersectionStatus * lhs, const tier4_api_msgs__msg__IntersectionStatus * rhs)
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
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
tier4_api_msgs__msg__IntersectionStatus__copy(
  const tier4_api_msgs__msg__IntersectionStatus * input,
  tier4_api_msgs__msg__IntersectionStatus * output)
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
  // status
  output->status = input->status;
  return true;
}

tier4_api_msgs__msg__IntersectionStatus *
tier4_api_msgs__msg__IntersectionStatus__create()
{
  tier4_api_msgs__msg__IntersectionStatus * msg = (tier4_api_msgs__msg__IntersectionStatus *)malloc(sizeof(tier4_api_msgs__msg__IntersectionStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_api_msgs__msg__IntersectionStatus));
  bool success = tier4_api_msgs__msg__IntersectionStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_api_msgs__msg__IntersectionStatus__destroy(tier4_api_msgs__msg__IntersectionStatus * msg)
{
  if (msg) {
    tier4_api_msgs__msg__IntersectionStatus__fini(msg);
  }
  free(msg);
}


bool
tier4_api_msgs__msg__IntersectionStatus__Sequence__init(tier4_api_msgs__msg__IntersectionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_api_msgs__msg__IntersectionStatus * data = NULL;
  if (size) {
    data = (tier4_api_msgs__msg__IntersectionStatus *)calloc(size, sizeof(tier4_api_msgs__msg__IntersectionStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_api_msgs__msg__IntersectionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_api_msgs__msg__IntersectionStatus__fini(&data[i - 1]);
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
tier4_api_msgs__msg__IntersectionStatus__Sequence__fini(tier4_api_msgs__msg__IntersectionStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_api_msgs__msg__IntersectionStatus__fini(&array->data[i]);
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

tier4_api_msgs__msg__IntersectionStatus__Sequence *
tier4_api_msgs__msg__IntersectionStatus__Sequence__create(size_t size)
{
  tier4_api_msgs__msg__IntersectionStatus__Sequence * array = (tier4_api_msgs__msg__IntersectionStatus__Sequence *)malloc(sizeof(tier4_api_msgs__msg__IntersectionStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_api_msgs__msg__IntersectionStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_api_msgs__msg__IntersectionStatus__Sequence__destroy(tier4_api_msgs__msg__IntersectionStatus__Sequence * array)
{
  if (array) {
    tier4_api_msgs__msg__IntersectionStatus__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_api_msgs__msg__IntersectionStatus__Sequence__are_equal(const tier4_api_msgs__msg__IntersectionStatus__Sequence * lhs, const tier4_api_msgs__msg__IntersectionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_api_msgs__msg__IntersectionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_api_msgs__msg__IntersectionStatus__Sequence__copy(
  const tier4_api_msgs__msg__IntersectionStatus__Sequence * input,
  tier4_api_msgs__msg__IntersectionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_api_msgs__msg__IntersectionStatus);
    tier4_api_msgs__msg__IntersectionStatus * data =
      (tier4_api_msgs__msg__IntersectionStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_api_msgs__msg__IntersectionStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_api_msgs__msg__IntersectionStatus__fini(&data[i]);
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
    if (!tier4_api_msgs__msg__IntersectionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
