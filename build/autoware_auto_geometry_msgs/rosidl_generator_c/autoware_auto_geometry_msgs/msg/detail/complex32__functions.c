// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
// generated code does not contain a copyright notice
#include "autoware_auto_geometry_msgs/msg/detail/complex32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
autoware_auto_geometry_msgs__msg__Complex32__init(autoware_auto_geometry_msgs__msg__Complex32 * msg)
{
  if (!msg) {
    return false;
  }
  // real
  msg->real = 1.0f;
  // imag
  msg->imag = 0.0f;
  return true;
}

void
autoware_auto_geometry_msgs__msg__Complex32__fini(autoware_auto_geometry_msgs__msg__Complex32 * msg)
{
  if (!msg) {
    return;
  }
  // real
  // imag
}

bool
autoware_auto_geometry_msgs__msg__Complex32__are_equal(const autoware_auto_geometry_msgs__msg__Complex32 * lhs, const autoware_auto_geometry_msgs__msg__Complex32 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // real
  if (lhs->real != rhs->real) {
    return false;
  }
  // imag
  if (lhs->imag != rhs->imag) {
    return false;
  }
  return true;
}

bool
autoware_auto_geometry_msgs__msg__Complex32__copy(
  const autoware_auto_geometry_msgs__msg__Complex32 * input,
  autoware_auto_geometry_msgs__msg__Complex32 * output)
{
  if (!input || !output) {
    return false;
  }
  // real
  output->real = input->real;
  // imag
  output->imag = input->imag;
  return true;
}

autoware_auto_geometry_msgs__msg__Complex32 *
autoware_auto_geometry_msgs__msg__Complex32__create()
{
  autoware_auto_geometry_msgs__msg__Complex32 * msg = (autoware_auto_geometry_msgs__msg__Complex32 *)malloc(sizeof(autoware_auto_geometry_msgs__msg__Complex32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_geometry_msgs__msg__Complex32));
  bool success = autoware_auto_geometry_msgs__msg__Complex32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_geometry_msgs__msg__Complex32__destroy(autoware_auto_geometry_msgs__msg__Complex32 * msg)
{
  if (msg) {
    autoware_auto_geometry_msgs__msg__Complex32__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_geometry_msgs__msg__Complex32__Sequence__init(autoware_auto_geometry_msgs__msg__Complex32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_geometry_msgs__msg__Complex32 * data = NULL;
  if (size) {
    data = (autoware_auto_geometry_msgs__msg__Complex32 *)calloc(size, sizeof(autoware_auto_geometry_msgs__msg__Complex32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_geometry_msgs__msg__Complex32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_geometry_msgs__msg__Complex32__fini(&data[i - 1]);
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
autoware_auto_geometry_msgs__msg__Complex32__Sequence__fini(autoware_auto_geometry_msgs__msg__Complex32__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_geometry_msgs__msg__Complex32__fini(&array->data[i]);
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

autoware_auto_geometry_msgs__msg__Complex32__Sequence *
autoware_auto_geometry_msgs__msg__Complex32__Sequence__create(size_t size)
{
  autoware_auto_geometry_msgs__msg__Complex32__Sequence * array = (autoware_auto_geometry_msgs__msg__Complex32__Sequence *)malloc(sizeof(autoware_auto_geometry_msgs__msg__Complex32__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_geometry_msgs__msg__Complex32__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_geometry_msgs__msg__Complex32__Sequence__destroy(autoware_auto_geometry_msgs__msg__Complex32__Sequence * array)
{
  if (array) {
    autoware_auto_geometry_msgs__msg__Complex32__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_geometry_msgs__msg__Complex32__Sequence__are_equal(const autoware_auto_geometry_msgs__msg__Complex32__Sequence * lhs, const autoware_auto_geometry_msgs__msg__Complex32__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_geometry_msgs__msg__Complex32__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_geometry_msgs__msg__Complex32__Sequence__copy(
  const autoware_auto_geometry_msgs__msg__Complex32__Sequence * input,
  autoware_auto_geometry_msgs__msg__Complex32__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_geometry_msgs__msg__Complex32);
    autoware_auto_geometry_msgs__msg__Complex32 * data =
      (autoware_auto_geometry_msgs__msg__Complex32 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_geometry_msgs__msg__Complex32__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_geometry_msgs__msg__Complex32__fini(&data[i]);
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
    if (!autoware_auto_geometry_msgs__msg__Complex32__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
