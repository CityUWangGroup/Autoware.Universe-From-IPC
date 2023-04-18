// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/area_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
autoware_map_msgs__msg__AreaInfo__init(autoware_map_msgs__msg__AreaInfo * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    autoware_map_msgs__msg__AreaInfo__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
autoware_map_msgs__msg__AreaInfo__fini(autoware_map_msgs__msg__AreaInfo * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // radius
}

bool
autoware_map_msgs__msg__AreaInfo__are_equal(const autoware_map_msgs__msg__AreaInfo * lhs, const autoware_map_msgs__msg__AreaInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__msg__AreaInfo__copy(
  const autoware_map_msgs__msg__AreaInfo * input,
  autoware_map_msgs__msg__AreaInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

autoware_map_msgs__msg__AreaInfo *
autoware_map_msgs__msg__AreaInfo__create()
{
  autoware_map_msgs__msg__AreaInfo * msg = (autoware_map_msgs__msg__AreaInfo *)malloc(sizeof(autoware_map_msgs__msg__AreaInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__msg__AreaInfo));
  bool success = autoware_map_msgs__msg__AreaInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__msg__AreaInfo__destroy(autoware_map_msgs__msg__AreaInfo * msg)
{
  if (msg) {
    autoware_map_msgs__msg__AreaInfo__fini(msg);
  }
  free(msg);
}


bool
autoware_map_msgs__msg__AreaInfo__Sequence__init(autoware_map_msgs__msg__AreaInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_map_msgs__msg__AreaInfo * data = NULL;
  if (size) {
    data = (autoware_map_msgs__msg__AreaInfo *)calloc(size, sizeof(autoware_map_msgs__msg__AreaInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__msg__AreaInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__msg__AreaInfo__fini(&data[i - 1]);
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
autoware_map_msgs__msg__AreaInfo__Sequence__fini(autoware_map_msgs__msg__AreaInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_map_msgs__msg__AreaInfo__fini(&array->data[i]);
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

autoware_map_msgs__msg__AreaInfo__Sequence *
autoware_map_msgs__msg__AreaInfo__Sequence__create(size_t size)
{
  autoware_map_msgs__msg__AreaInfo__Sequence * array = (autoware_map_msgs__msg__AreaInfo__Sequence *)malloc(sizeof(autoware_map_msgs__msg__AreaInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__msg__AreaInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__msg__AreaInfo__Sequence__destroy(autoware_map_msgs__msg__AreaInfo__Sequence * array)
{
  if (array) {
    autoware_map_msgs__msg__AreaInfo__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_map_msgs__msg__AreaInfo__Sequence__are_equal(const autoware_map_msgs__msg__AreaInfo__Sequence * lhs, const autoware_map_msgs__msg__AreaInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__msg__AreaInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__msg__AreaInfo__Sequence__copy(
  const autoware_map_msgs__msg__AreaInfo__Sequence * input,
  autoware_map_msgs__msg__AreaInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__msg__AreaInfo);
    autoware_map_msgs__msg__AreaInfo * data =
      (autoware_map_msgs__msg__AreaInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__msg__AreaInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__msg__AreaInfo__fini(&data[i]);
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
    if (!autoware_map_msgs__msg__AreaInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
