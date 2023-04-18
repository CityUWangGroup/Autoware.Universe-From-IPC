// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/Service.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tier4_external_api_msgs__msg__Service__init(tier4_external_api_msgs__msg__Service * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
tier4_external_api_msgs__msg__Service__fini(tier4_external_api_msgs__msg__Service * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
tier4_external_api_msgs__msg__Service__are_equal(const tier4_external_api_msgs__msg__Service * lhs, const tier4_external_api_msgs__msg__Service * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__Service__copy(
  const tier4_external_api_msgs__msg__Service * input,
  tier4_external_api_msgs__msg__Service * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

tier4_external_api_msgs__msg__Service *
tier4_external_api_msgs__msg__Service__create()
{
  tier4_external_api_msgs__msg__Service * msg = (tier4_external_api_msgs__msg__Service *)malloc(sizeof(tier4_external_api_msgs__msg__Service));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__Service));
  bool success = tier4_external_api_msgs__msg__Service__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__Service__destroy(tier4_external_api_msgs__msg__Service * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__Service__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__Service__Sequence__init(tier4_external_api_msgs__msg__Service__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__Service * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__Service *)calloc(size, sizeof(tier4_external_api_msgs__msg__Service));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__Service__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__Service__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__Service__Sequence__fini(tier4_external_api_msgs__msg__Service__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__Service__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__Service__Sequence *
tier4_external_api_msgs__msg__Service__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__Service__Sequence * array = (tier4_external_api_msgs__msg__Service__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__Service__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__Service__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__Service__Sequence__destroy(tier4_external_api_msgs__msg__Service__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__Service__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__Service__Sequence__are_equal(const tier4_external_api_msgs__msg__Service__Sequence * lhs, const tier4_external_api_msgs__msg__Service__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__Service__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__Service__Sequence__copy(
  const tier4_external_api_msgs__msg__Service__Sequence * input,
  tier4_external_api_msgs__msg__Service__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__Service);
    tier4_external_api_msgs__msg__Service * data =
      (tier4_external_api_msgs__msg__Service *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__Service__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__Service__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__Service__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
