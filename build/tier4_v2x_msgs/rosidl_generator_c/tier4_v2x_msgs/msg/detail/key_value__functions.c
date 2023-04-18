// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_v2x_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice
#include "tier4_v2x_msgs/msg/detail/key_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_v2x_msgs__msg__KeyValue__init(tier4_v2x_msgs__msg__KeyValue * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    tier4_v2x_msgs__msg__KeyValue__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    tier4_v2x_msgs__msg__KeyValue__fini(msg);
    return false;
  }
  return true;
}

void
tier4_v2x_msgs__msg__KeyValue__fini(tier4_v2x_msgs__msg__KeyValue * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
tier4_v2x_msgs__msg__KeyValue__are_equal(const tier4_v2x_msgs__msg__KeyValue * lhs, const tier4_v2x_msgs__msg__KeyValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
tier4_v2x_msgs__msg__KeyValue__copy(
  const tier4_v2x_msgs__msg__KeyValue * input,
  tier4_v2x_msgs__msg__KeyValue * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

tier4_v2x_msgs__msg__KeyValue *
tier4_v2x_msgs__msg__KeyValue__create()
{
  tier4_v2x_msgs__msg__KeyValue * msg = (tier4_v2x_msgs__msg__KeyValue *)malloc(sizeof(tier4_v2x_msgs__msg__KeyValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_v2x_msgs__msg__KeyValue));
  bool success = tier4_v2x_msgs__msg__KeyValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_v2x_msgs__msg__KeyValue__destroy(tier4_v2x_msgs__msg__KeyValue * msg)
{
  if (msg) {
    tier4_v2x_msgs__msg__KeyValue__fini(msg);
  }
  free(msg);
}


bool
tier4_v2x_msgs__msg__KeyValue__Sequence__init(tier4_v2x_msgs__msg__KeyValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_v2x_msgs__msg__KeyValue * data = NULL;
  if (size) {
    data = (tier4_v2x_msgs__msg__KeyValue *)calloc(size, sizeof(tier4_v2x_msgs__msg__KeyValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_v2x_msgs__msg__KeyValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_v2x_msgs__msg__KeyValue__fini(&data[i - 1]);
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
tier4_v2x_msgs__msg__KeyValue__Sequence__fini(tier4_v2x_msgs__msg__KeyValue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_v2x_msgs__msg__KeyValue__fini(&array->data[i]);
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

tier4_v2x_msgs__msg__KeyValue__Sequence *
tier4_v2x_msgs__msg__KeyValue__Sequence__create(size_t size)
{
  tier4_v2x_msgs__msg__KeyValue__Sequence * array = (tier4_v2x_msgs__msg__KeyValue__Sequence *)malloc(sizeof(tier4_v2x_msgs__msg__KeyValue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_v2x_msgs__msg__KeyValue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_v2x_msgs__msg__KeyValue__Sequence__destroy(tier4_v2x_msgs__msg__KeyValue__Sequence * array)
{
  if (array) {
    tier4_v2x_msgs__msg__KeyValue__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_v2x_msgs__msg__KeyValue__Sequence__are_equal(const tier4_v2x_msgs__msg__KeyValue__Sequence * lhs, const tier4_v2x_msgs__msg__KeyValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_v2x_msgs__msg__KeyValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_v2x_msgs__msg__KeyValue__Sequence__copy(
  const tier4_v2x_msgs__msg__KeyValue__Sequence * input,
  tier4_v2x_msgs__msg__KeyValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_v2x_msgs__msg__KeyValue);
    tier4_v2x_msgs__msg__KeyValue * data =
      (tier4_v2x_msgs__msg__KeyValue *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_v2x_msgs__msg__KeyValue__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_v2x_msgs__msg__KeyValue__fini(&data[i]);
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
    if (!tier4_v2x_msgs__msg__KeyValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
