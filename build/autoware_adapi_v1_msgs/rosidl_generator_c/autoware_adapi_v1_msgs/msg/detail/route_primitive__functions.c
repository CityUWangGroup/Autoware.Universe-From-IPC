// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/RoutePrimitive.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_adapi_v1_msgs__msg__RoutePrimitive__init(autoware_adapi_v1_msgs__msg__RoutePrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(autoware_adapi_v1_msgs__msg__RoutePrimitive * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  rosidl_runtime_c__String__fini(&msg->type);
}

bool
autoware_adapi_v1_msgs__msg__RoutePrimitive__are_equal(const autoware_adapi_v1_msgs__msg__RoutePrimitive * lhs, const autoware_adapi_v1_msgs__msg__RoutePrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__RoutePrimitive__copy(
  const autoware_adapi_v1_msgs__msg__RoutePrimitive * input,
  autoware_adapi_v1_msgs__msg__RoutePrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__RoutePrimitive *
autoware_adapi_v1_msgs__msg__RoutePrimitive__create()
{
  autoware_adapi_v1_msgs__msg__RoutePrimitive * msg = (autoware_adapi_v1_msgs__msg__RoutePrimitive *)malloc(sizeof(autoware_adapi_v1_msgs__msg__RoutePrimitive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__RoutePrimitive));
  bool success = autoware_adapi_v1_msgs__msg__RoutePrimitive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__RoutePrimitive__destroy(autoware_adapi_v1_msgs__msg__RoutePrimitive * msg)
{
  if (msg) {
    autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(msg);
  }
  free(msg);
}


bool
autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__init(autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_adapi_v1_msgs__msg__RoutePrimitive * data = NULL;
  if (size) {
    data = (autoware_adapi_v1_msgs__msg__RoutePrimitive *)calloc(size, sizeof(autoware_adapi_v1_msgs__msg__RoutePrimitive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__RoutePrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__fini(autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence *
autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__create(size_t size)
{
  autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * array = (autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence *)malloc(sizeof(autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__destroy(autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * array)
{
  if (array) {
    autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * lhs, const autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__RoutePrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * input,
  autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__RoutePrimitive);
    autoware_adapi_v1_msgs__msg__RoutePrimitive * data =
      (autoware_adapi_v1_msgs__msg__RoutePrimitive *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__RoutePrimitive__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__msg__RoutePrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
