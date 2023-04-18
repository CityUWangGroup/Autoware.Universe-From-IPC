// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/PointXYZIF.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/point_xyzif__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
autoware_auto_perception_msgs__msg__PointXYZIF__init(autoware_auto_perception_msgs__msg__PointXYZIF * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // intensity
  // id
  return true;
}

void
autoware_auto_perception_msgs__msg__PointXYZIF__fini(autoware_auto_perception_msgs__msg__PointXYZIF * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // intensity
  // id
}

bool
autoware_auto_perception_msgs__msg__PointXYZIF__are_equal(const autoware_auto_perception_msgs__msg__PointXYZIF * lhs, const autoware_auto_perception_msgs__msg__PointXYZIF * rhs)
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
  // intensity
  if (lhs->intensity != rhs->intensity) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__PointXYZIF__copy(
  const autoware_auto_perception_msgs__msg__PointXYZIF * input,
  autoware_auto_perception_msgs__msg__PointXYZIF * output)
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
  // intensity
  output->intensity = input->intensity;
  // id
  output->id = input->id;
  return true;
}

autoware_auto_perception_msgs__msg__PointXYZIF *
autoware_auto_perception_msgs__msg__PointXYZIF__create()
{
  autoware_auto_perception_msgs__msg__PointXYZIF * msg = (autoware_auto_perception_msgs__msg__PointXYZIF *)malloc(sizeof(autoware_auto_perception_msgs__msg__PointXYZIF));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__PointXYZIF));
  bool success = autoware_auto_perception_msgs__msg__PointXYZIF__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__PointXYZIF__destroy(autoware_auto_perception_msgs__msg__PointXYZIF * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__PointXYZIF__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__init(autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__PointXYZIF * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__PointXYZIF *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__PointXYZIF));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__PointXYZIF__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__PointXYZIF__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__fini(autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__PointXYZIF__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__PointXYZIF__Sequence *
autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * array = (autoware_auto_perception_msgs__msg__PointXYZIF__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__PointXYZIF__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__destroy(autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__are_equal(const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * lhs, const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__PointXYZIF__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__PointXYZIF__Sequence__copy(
  const autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * input,
  autoware_auto_perception_msgs__msg__PointXYZIF__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__PointXYZIF);
    autoware_auto_perception_msgs__msg__PointXYZIF * data =
      (autoware_auto_perception_msgs__msg__PointXYZIF *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__PointXYZIF__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__PointXYZIF__fini(&data[i]);
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
    if (!autoware_auto_perception_msgs__msg__PointXYZIF__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
