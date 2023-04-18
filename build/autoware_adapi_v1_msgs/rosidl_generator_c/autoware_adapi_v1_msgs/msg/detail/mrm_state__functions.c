// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/MrmState.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/mrm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_adapi_v1_msgs__msg__MrmState__init(autoware_adapi_v1_msgs__msg__MrmState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_adapi_v1_msgs__msg__MrmState__fini(msg);
    return false;
  }
  // state
  // behavior
  return true;
}

void
autoware_adapi_v1_msgs__msg__MrmState__fini(autoware_adapi_v1_msgs__msg__MrmState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // state
  // behavior
}

bool
autoware_adapi_v1_msgs__msg__MrmState__are_equal(const autoware_adapi_v1_msgs__msg__MrmState * lhs, const autoware_adapi_v1_msgs__msg__MrmState * rhs)
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // behavior
  if (lhs->behavior != rhs->behavior) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__MrmState__copy(
  const autoware_adapi_v1_msgs__msg__MrmState * input,
  autoware_adapi_v1_msgs__msg__MrmState * output)
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
  // state
  output->state = input->state;
  // behavior
  output->behavior = input->behavior;
  return true;
}

autoware_adapi_v1_msgs__msg__MrmState *
autoware_adapi_v1_msgs__msg__MrmState__create()
{
  autoware_adapi_v1_msgs__msg__MrmState * msg = (autoware_adapi_v1_msgs__msg__MrmState *)malloc(sizeof(autoware_adapi_v1_msgs__msg__MrmState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__MrmState));
  bool success = autoware_adapi_v1_msgs__msg__MrmState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__MrmState__destroy(autoware_adapi_v1_msgs__msg__MrmState * msg)
{
  if (msg) {
    autoware_adapi_v1_msgs__msg__MrmState__fini(msg);
  }
  free(msg);
}


bool
autoware_adapi_v1_msgs__msg__MrmState__Sequence__init(autoware_adapi_v1_msgs__msg__MrmState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_adapi_v1_msgs__msg__MrmState * data = NULL;
  if (size) {
    data = (autoware_adapi_v1_msgs__msg__MrmState *)calloc(size, sizeof(autoware_adapi_v1_msgs__msg__MrmState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__MrmState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__MrmState__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__MrmState__Sequence__fini(autoware_adapi_v1_msgs__msg__MrmState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_adapi_v1_msgs__msg__MrmState__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__MrmState__Sequence *
autoware_adapi_v1_msgs__msg__MrmState__Sequence__create(size_t size)
{
  autoware_adapi_v1_msgs__msg__MrmState__Sequence * array = (autoware_adapi_v1_msgs__msg__MrmState__Sequence *)malloc(sizeof(autoware_adapi_v1_msgs__msg__MrmState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__MrmState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__MrmState__Sequence__destroy(autoware_adapi_v1_msgs__msg__MrmState__Sequence * array)
{
  if (array) {
    autoware_adapi_v1_msgs__msg__MrmState__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_adapi_v1_msgs__msg__MrmState__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__MrmState__Sequence * lhs, const autoware_adapi_v1_msgs__msg__MrmState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__MrmState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__MrmState__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__MrmState__Sequence * input,
  autoware_adapi_v1_msgs__msg__MrmState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__MrmState);
    autoware_adapi_v1_msgs__msg__MrmState * data =
      (autoware_adapi_v1_msgs__msg__MrmState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__MrmState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__MrmState__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__msg__MrmState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
