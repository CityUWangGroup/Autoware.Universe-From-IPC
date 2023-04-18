// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/LocalizationScoreArray.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/localization_score_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `values`
#include "tier4_external_api_msgs/msg/detail/localization_score__functions.h"

bool
tier4_external_api_msgs__msg__LocalizationScoreArray__init(tier4_external_api_msgs__msg__LocalizationScoreArray * msg)
{
  if (!msg) {
    return false;
  }
  // values
  if (!tier4_external_api_msgs__msg__LocalizationScore__Sequence__init(&msg->values, 0)) {
    tier4_external_api_msgs__msg__LocalizationScoreArray__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__LocalizationScoreArray__fini(tier4_external_api_msgs__msg__LocalizationScoreArray * msg)
{
  if (!msg) {
    return;
  }
  // values
  tier4_external_api_msgs__msg__LocalizationScore__Sequence__fini(&msg->values);
}

bool
tier4_external_api_msgs__msg__LocalizationScoreArray__are_equal(const tier4_external_api_msgs__msg__LocalizationScoreArray * lhs, const tier4_external_api_msgs__msg__LocalizationScoreArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // values
  if (!tier4_external_api_msgs__msg__LocalizationScore__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__LocalizationScoreArray__copy(
  const tier4_external_api_msgs__msg__LocalizationScoreArray * input,
  tier4_external_api_msgs__msg__LocalizationScoreArray * output)
{
  if (!input || !output) {
    return false;
  }
  // values
  if (!tier4_external_api_msgs__msg__LocalizationScore__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__LocalizationScoreArray *
tier4_external_api_msgs__msg__LocalizationScoreArray__create()
{
  tier4_external_api_msgs__msg__LocalizationScoreArray * msg = (tier4_external_api_msgs__msg__LocalizationScoreArray *)malloc(sizeof(tier4_external_api_msgs__msg__LocalizationScoreArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__LocalizationScoreArray));
  bool success = tier4_external_api_msgs__msg__LocalizationScoreArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__LocalizationScoreArray__destroy(tier4_external_api_msgs__msg__LocalizationScoreArray * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__LocalizationScoreArray__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__init(tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__LocalizationScoreArray * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__LocalizationScoreArray *)calloc(size, sizeof(tier4_external_api_msgs__msg__LocalizationScoreArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__LocalizationScoreArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__LocalizationScoreArray__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__fini(tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__LocalizationScoreArray__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence *
tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * array = (tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__destroy(tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__are_equal(const tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * lhs, const tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__LocalizationScoreArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence__copy(
  const tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * input,
  tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__LocalizationScoreArray);
    tier4_external_api_msgs__msg__LocalizationScoreArray * data =
      (tier4_external_api_msgs__msg__LocalizationScoreArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__LocalizationScoreArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__LocalizationScoreArray__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__LocalizationScoreArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
