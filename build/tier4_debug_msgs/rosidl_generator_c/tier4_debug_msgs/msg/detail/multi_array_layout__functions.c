// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_debug_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice
#include "tier4_debug_msgs/msg/detail/multi_array_layout__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `dim`
#include "tier4_debug_msgs/msg/detail/multi_array_dimension__functions.h"

bool
tier4_debug_msgs__msg__MultiArrayLayout__init(tier4_debug_msgs__msg__MultiArrayLayout * msg)
{
  if (!msg) {
    return false;
  }
  // dim
  if (!tier4_debug_msgs__msg__MultiArrayDimension__Sequence__init(&msg->dim, 0)) {
    tier4_debug_msgs__msg__MultiArrayLayout__fini(msg);
    return false;
  }
  // data_offset
  return true;
}

void
tier4_debug_msgs__msg__MultiArrayLayout__fini(tier4_debug_msgs__msg__MultiArrayLayout * msg)
{
  if (!msg) {
    return;
  }
  // dim
  tier4_debug_msgs__msg__MultiArrayDimension__Sequence__fini(&msg->dim);
  // data_offset
}

bool
tier4_debug_msgs__msg__MultiArrayLayout__are_equal(const tier4_debug_msgs__msg__MultiArrayLayout * lhs, const tier4_debug_msgs__msg__MultiArrayLayout * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dim
  if (!tier4_debug_msgs__msg__MultiArrayDimension__Sequence__are_equal(
      &(lhs->dim), &(rhs->dim)))
  {
    return false;
  }
  // data_offset
  if (lhs->data_offset != rhs->data_offset) {
    return false;
  }
  return true;
}

bool
tier4_debug_msgs__msg__MultiArrayLayout__copy(
  const tier4_debug_msgs__msg__MultiArrayLayout * input,
  tier4_debug_msgs__msg__MultiArrayLayout * output)
{
  if (!input || !output) {
    return false;
  }
  // dim
  if (!tier4_debug_msgs__msg__MultiArrayDimension__Sequence__copy(
      &(input->dim), &(output->dim)))
  {
    return false;
  }
  // data_offset
  output->data_offset = input->data_offset;
  return true;
}

tier4_debug_msgs__msg__MultiArrayLayout *
tier4_debug_msgs__msg__MultiArrayLayout__create()
{
  tier4_debug_msgs__msg__MultiArrayLayout * msg = (tier4_debug_msgs__msg__MultiArrayLayout *)malloc(sizeof(tier4_debug_msgs__msg__MultiArrayLayout));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_debug_msgs__msg__MultiArrayLayout));
  bool success = tier4_debug_msgs__msg__MultiArrayLayout__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_debug_msgs__msg__MultiArrayLayout__destroy(tier4_debug_msgs__msg__MultiArrayLayout * msg)
{
  if (msg) {
    tier4_debug_msgs__msg__MultiArrayLayout__fini(msg);
  }
  free(msg);
}


bool
tier4_debug_msgs__msg__MultiArrayLayout__Sequence__init(tier4_debug_msgs__msg__MultiArrayLayout__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_debug_msgs__msg__MultiArrayLayout * data = NULL;
  if (size) {
    data = (tier4_debug_msgs__msg__MultiArrayLayout *)calloc(size, sizeof(tier4_debug_msgs__msg__MultiArrayLayout));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_debug_msgs__msg__MultiArrayLayout__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_debug_msgs__msg__MultiArrayLayout__fini(&data[i - 1]);
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
tier4_debug_msgs__msg__MultiArrayLayout__Sequence__fini(tier4_debug_msgs__msg__MultiArrayLayout__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_debug_msgs__msg__MultiArrayLayout__fini(&array->data[i]);
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

tier4_debug_msgs__msg__MultiArrayLayout__Sequence *
tier4_debug_msgs__msg__MultiArrayLayout__Sequence__create(size_t size)
{
  tier4_debug_msgs__msg__MultiArrayLayout__Sequence * array = (tier4_debug_msgs__msg__MultiArrayLayout__Sequence *)malloc(sizeof(tier4_debug_msgs__msg__MultiArrayLayout__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_debug_msgs__msg__MultiArrayLayout__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_debug_msgs__msg__MultiArrayLayout__Sequence__destroy(tier4_debug_msgs__msg__MultiArrayLayout__Sequence * array)
{
  if (array) {
    tier4_debug_msgs__msg__MultiArrayLayout__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_debug_msgs__msg__MultiArrayLayout__Sequence__are_equal(const tier4_debug_msgs__msg__MultiArrayLayout__Sequence * lhs, const tier4_debug_msgs__msg__MultiArrayLayout__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_debug_msgs__msg__MultiArrayLayout__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_debug_msgs__msg__MultiArrayLayout__Sequence__copy(
  const tier4_debug_msgs__msg__MultiArrayLayout__Sequence * input,
  tier4_debug_msgs__msg__MultiArrayLayout__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_debug_msgs__msg__MultiArrayLayout);
    tier4_debug_msgs__msg__MultiArrayLayout * data =
      (tier4_debug_msgs__msg__MultiArrayLayout *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_debug_msgs__msg__MultiArrayLayout__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_debug_msgs__msg__MultiArrayLayout__fini(&data[i]);
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
    if (!tier4_debug_msgs__msg__MultiArrayLayout__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
