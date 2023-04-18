// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactorArray.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `factors`
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__functions.h"

bool
autoware_adapi_v1_msgs__msg__SteeringFactorArray__init(autoware_adapi_v1_msgs__msg__SteeringFactorArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(msg);
    return false;
  }
  // factors
  if (!autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence__init(&msg->factors, 0)) {
    autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(autoware_adapi_v1_msgs__msg__SteeringFactorArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // factors
  autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence__fini(&msg->factors);
}

bool
autoware_adapi_v1_msgs__msg__SteeringFactorArray__are_equal(const autoware_adapi_v1_msgs__msg__SteeringFactorArray * lhs, const autoware_adapi_v1_msgs__msg__SteeringFactorArray * rhs)
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
  // factors
  if (!autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence__are_equal(
      &(lhs->factors), &(rhs->factors)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__SteeringFactorArray__copy(
  const autoware_adapi_v1_msgs__msg__SteeringFactorArray * input,
  autoware_adapi_v1_msgs__msg__SteeringFactorArray * output)
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
  // factors
  if (!autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence__copy(
      &(input->factors), &(output->factors)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__SteeringFactorArray *
autoware_adapi_v1_msgs__msg__SteeringFactorArray__create()
{
  autoware_adapi_v1_msgs__msg__SteeringFactorArray * msg = (autoware_adapi_v1_msgs__msg__SteeringFactorArray *)malloc(sizeof(autoware_adapi_v1_msgs__msg__SteeringFactorArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__SteeringFactorArray));
  bool success = autoware_adapi_v1_msgs__msg__SteeringFactorArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__SteeringFactorArray__destroy(autoware_adapi_v1_msgs__msg__SteeringFactorArray * msg)
{
  if (msg) {
    autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(msg);
  }
  free(msg);
}


bool
autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__init(autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_adapi_v1_msgs__msg__SteeringFactorArray * data = NULL;
  if (size) {
    data = (autoware_adapi_v1_msgs__msg__SteeringFactorArray *)calloc(size, sizeof(autoware_adapi_v1_msgs__msg__SteeringFactorArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__SteeringFactorArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__fini(autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence *
autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__create(size_t size)
{
  autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * array = (autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence *)malloc(sizeof(autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__destroy(autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * array)
{
  if (array) {
    autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * lhs, const autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__SteeringFactorArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * input,
  autoware_adapi_v1_msgs__msg__SteeringFactorArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__SteeringFactorArray);
    autoware_adapi_v1_msgs__msg__SteeringFactorArray * data =
      (autoware_adapi_v1_msgs__msg__SteeringFactorArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__SteeringFactorArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__msg__SteeringFactorArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
