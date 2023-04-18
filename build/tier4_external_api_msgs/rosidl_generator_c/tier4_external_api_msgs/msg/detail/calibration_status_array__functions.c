// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/CalibrationStatusArray.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/calibration_status_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `status_array`
#include "tier4_external_api_msgs/msg/detail/calibration_status__functions.h"

bool
tier4_external_api_msgs__msg__CalibrationStatusArray__init(tier4_external_api_msgs__msg__CalibrationStatusArray * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_external_api_msgs__msg__CalibrationStatusArray__fini(msg);
    return false;
  }
  // status_array
  if (!tier4_external_api_msgs__msg__CalibrationStatus__Sequence__init(&msg->status_array, 0)) {
    tier4_external_api_msgs__msg__CalibrationStatusArray__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__CalibrationStatusArray__fini(tier4_external_api_msgs__msg__CalibrationStatusArray * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // status_array
  tier4_external_api_msgs__msg__CalibrationStatus__Sequence__fini(&msg->status_array);
}

bool
tier4_external_api_msgs__msg__CalibrationStatusArray__are_equal(const tier4_external_api_msgs__msg__CalibrationStatusArray * lhs, const tier4_external_api_msgs__msg__CalibrationStatusArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // status_array
  if (!tier4_external_api_msgs__msg__CalibrationStatus__Sequence__are_equal(
      &(lhs->status_array), &(rhs->status_array)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__CalibrationStatusArray__copy(
  const tier4_external_api_msgs__msg__CalibrationStatusArray * input,
  tier4_external_api_msgs__msg__CalibrationStatusArray * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // status_array
  if (!tier4_external_api_msgs__msg__CalibrationStatus__Sequence__copy(
      &(input->status_array), &(output->status_array)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__CalibrationStatusArray *
tier4_external_api_msgs__msg__CalibrationStatusArray__create()
{
  tier4_external_api_msgs__msg__CalibrationStatusArray * msg = (tier4_external_api_msgs__msg__CalibrationStatusArray *)malloc(sizeof(tier4_external_api_msgs__msg__CalibrationStatusArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__CalibrationStatusArray));
  bool success = tier4_external_api_msgs__msg__CalibrationStatusArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__CalibrationStatusArray__destroy(tier4_external_api_msgs__msg__CalibrationStatusArray * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__CalibrationStatusArray__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__init(tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__CalibrationStatusArray * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__CalibrationStatusArray *)calloc(size, sizeof(tier4_external_api_msgs__msg__CalibrationStatusArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__CalibrationStatusArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__CalibrationStatusArray__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__fini(tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__CalibrationStatusArray__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence *
tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * array = (tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__destroy(tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__are_equal(const tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * lhs, const tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__CalibrationStatusArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence__copy(
  const tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * input,
  tier4_external_api_msgs__msg__CalibrationStatusArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__CalibrationStatusArray);
    tier4_external_api_msgs__msg__CalibrationStatusArray * data =
      (tier4_external_api_msgs__msg__CalibrationStatusArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__CalibrationStatusArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__CalibrationStatusArray__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__CalibrationStatusArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
