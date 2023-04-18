// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/LocalizationScore.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/localization_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_external_api_msgs__msg__LocalizationScore__init(tier4_external_api_msgs__msg__LocalizationScore * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tier4_external_api_msgs__msg__LocalizationScore__fini(msg);
    return false;
  }
  // value
  return true;
}

void
tier4_external_api_msgs__msg__LocalizationScore__fini(tier4_external_api_msgs__msg__LocalizationScore * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
}

bool
tier4_external_api_msgs__msg__LocalizationScore__are_equal(const tier4_external_api_msgs__msg__LocalizationScore * lhs, const tier4_external_api_msgs__msg__LocalizationScore * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__LocalizationScore__copy(
  const tier4_external_api_msgs__msg__LocalizationScore * input,
  tier4_external_api_msgs__msg__LocalizationScore * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

tier4_external_api_msgs__msg__LocalizationScore *
tier4_external_api_msgs__msg__LocalizationScore__create()
{
  tier4_external_api_msgs__msg__LocalizationScore * msg = (tier4_external_api_msgs__msg__LocalizationScore *)malloc(sizeof(tier4_external_api_msgs__msg__LocalizationScore));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__LocalizationScore));
  bool success = tier4_external_api_msgs__msg__LocalizationScore__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__LocalizationScore__destroy(tier4_external_api_msgs__msg__LocalizationScore * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__LocalizationScore__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__LocalizationScore__Sequence__init(tier4_external_api_msgs__msg__LocalizationScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__LocalizationScore * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__LocalizationScore *)calloc(size, sizeof(tier4_external_api_msgs__msg__LocalizationScore));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__LocalizationScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__LocalizationScore__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__LocalizationScore__Sequence__fini(tier4_external_api_msgs__msg__LocalizationScore__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__LocalizationScore__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__LocalizationScore__Sequence *
tier4_external_api_msgs__msg__LocalizationScore__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__LocalizationScore__Sequence * array = (tier4_external_api_msgs__msg__LocalizationScore__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__LocalizationScore__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__LocalizationScore__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__LocalizationScore__Sequence__destroy(tier4_external_api_msgs__msg__LocalizationScore__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__LocalizationScore__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__LocalizationScore__Sequence__are_equal(const tier4_external_api_msgs__msg__LocalizationScore__Sequence * lhs, const tier4_external_api_msgs__msg__LocalizationScore__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__LocalizationScore__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__LocalizationScore__Sequence__copy(
  const tier4_external_api_msgs__msg__LocalizationScore__Sequence * input,
  tier4_external_api_msgs__msg__LocalizationScore__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__LocalizationScore);
    tier4_external_api_msgs__msg__LocalizationScore * data =
      (tier4_external_api_msgs__msg__LocalizationScore *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__LocalizationScore__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__LocalizationScore__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__LocalizationScore__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
