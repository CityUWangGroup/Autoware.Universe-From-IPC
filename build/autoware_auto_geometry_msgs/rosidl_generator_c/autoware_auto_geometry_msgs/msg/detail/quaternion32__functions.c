// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_geometry_msgs:msg/Quaternion32.idl
// generated code does not contain a copyright notice
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
autoware_auto_geometry_msgs__msg__Quaternion32__init(autoware_auto_geometry_msgs__msg__Quaternion32 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  msg->x = 0.0f;
  // y
  msg->y = 0.0f;
  // z
  msg->z = 0.0f;
  // w
  msg->w = 1.0f;
  return true;
}

void
autoware_auto_geometry_msgs__msg__Quaternion32__fini(autoware_auto_geometry_msgs__msg__Quaternion32 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

bool
autoware_auto_geometry_msgs__msg__Quaternion32__are_equal(const autoware_auto_geometry_msgs__msg__Quaternion32 * lhs, const autoware_auto_geometry_msgs__msg__Quaternion32 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  return true;
}

bool
autoware_auto_geometry_msgs__msg__Quaternion32__copy(
  const autoware_auto_geometry_msgs__msg__Quaternion32 * input,
  autoware_auto_geometry_msgs__msg__Quaternion32 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // w
  output->w = input->w;
  return true;
}

autoware_auto_geometry_msgs__msg__Quaternion32 *
autoware_auto_geometry_msgs__msg__Quaternion32__create()
{
  autoware_auto_geometry_msgs__msg__Quaternion32 * msg = (autoware_auto_geometry_msgs__msg__Quaternion32 *)malloc(sizeof(autoware_auto_geometry_msgs__msg__Quaternion32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_geometry_msgs__msg__Quaternion32));
  bool success = autoware_auto_geometry_msgs__msg__Quaternion32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_geometry_msgs__msg__Quaternion32__destroy(autoware_auto_geometry_msgs__msg__Quaternion32 * msg)
{
  if (msg) {
    autoware_auto_geometry_msgs__msg__Quaternion32__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__init(autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_geometry_msgs__msg__Quaternion32 * data = NULL;
  if (size) {
    data = (autoware_auto_geometry_msgs__msg__Quaternion32 *)calloc(size, sizeof(autoware_auto_geometry_msgs__msg__Quaternion32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_geometry_msgs__msg__Quaternion32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_geometry_msgs__msg__Quaternion32__fini(&data[i - 1]);
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
autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__fini(autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_geometry_msgs__msg__Quaternion32__fini(&array->data[i]);
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

autoware_auto_geometry_msgs__msg__Quaternion32__Sequence *
autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__create(size_t size)
{
  autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * array = (autoware_auto_geometry_msgs__msg__Quaternion32__Sequence *)malloc(sizeof(autoware_auto_geometry_msgs__msg__Quaternion32__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__destroy(autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * array)
{
  if (array) {
    autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__are_equal(const autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * lhs, const autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_geometry_msgs__msg__Quaternion32__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_geometry_msgs__msg__Quaternion32__Sequence__copy(
  const autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * input,
  autoware_auto_geometry_msgs__msg__Quaternion32__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_geometry_msgs__msg__Quaternion32);
    autoware_auto_geometry_msgs__msg__Quaternion32 * data =
      (autoware_auto_geometry_msgs__msg__Quaternion32 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_geometry_msgs__msg__Quaternion32__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_geometry_msgs__msg__Quaternion32__fini(&data[i]);
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
    if (!autoware_auto_geometry_msgs__msg__Quaternion32__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
