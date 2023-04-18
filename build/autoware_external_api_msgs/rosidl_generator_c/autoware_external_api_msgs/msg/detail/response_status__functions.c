// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_external_api_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice
#include "autoware_external_api_msgs/msg/detail/response_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_external_api_msgs__msg__ResponseStatus__init(autoware_external_api_msgs__msg__ResponseStatus * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    autoware_external_api_msgs__msg__ResponseStatus__fini(msg);
    return false;
  }
  return true;
}

void
autoware_external_api_msgs__msg__ResponseStatus__fini(autoware_external_api_msgs__msg__ResponseStatus * msg)
{
  if (!msg) {
    return;
  }
  // code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
autoware_external_api_msgs__msg__ResponseStatus__are_equal(const autoware_external_api_msgs__msg__ResponseStatus * lhs, const autoware_external_api_msgs__msg__ResponseStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
autoware_external_api_msgs__msg__ResponseStatus__copy(
  const autoware_external_api_msgs__msg__ResponseStatus * input,
  autoware_external_api_msgs__msg__ResponseStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

autoware_external_api_msgs__msg__ResponseStatus *
autoware_external_api_msgs__msg__ResponseStatus__create()
{
  autoware_external_api_msgs__msg__ResponseStatus * msg = (autoware_external_api_msgs__msg__ResponseStatus *)malloc(sizeof(autoware_external_api_msgs__msg__ResponseStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_external_api_msgs__msg__ResponseStatus));
  bool success = autoware_external_api_msgs__msg__ResponseStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_external_api_msgs__msg__ResponseStatus__destroy(autoware_external_api_msgs__msg__ResponseStatus * msg)
{
  if (msg) {
    autoware_external_api_msgs__msg__ResponseStatus__fini(msg);
  }
  free(msg);
}


bool
autoware_external_api_msgs__msg__ResponseStatus__Sequence__init(autoware_external_api_msgs__msg__ResponseStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_external_api_msgs__msg__ResponseStatus * data = NULL;
  if (size) {
    data = (autoware_external_api_msgs__msg__ResponseStatus *)calloc(size, sizeof(autoware_external_api_msgs__msg__ResponseStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_external_api_msgs__msg__ResponseStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_external_api_msgs__msg__ResponseStatus__fini(&data[i - 1]);
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
autoware_external_api_msgs__msg__ResponseStatus__Sequence__fini(autoware_external_api_msgs__msg__ResponseStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_external_api_msgs__msg__ResponseStatus__fini(&array->data[i]);
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

autoware_external_api_msgs__msg__ResponseStatus__Sequence *
autoware_external_api_msgs__msg__ResponseStatus__Sequence__create(size_t size)
{
  autoware_external_api_msgs__msg__ResponseStatus__Sequence * array = (autoware_external_api_msgs__msg__ResponseStatus__Sequence *)malloc(sizeof(autoware_external_api_msgs__msg__ResponseStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_external_api_msgs__msg__ResponseStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_external_api_msgs__msg__ResponseStatus__Sequence__destroy(autoware_external_api_msgs__msg__ResponseStatus__Sequence * array)
{
  if (array) {
    autoware_external_api_msgs__msg__ResponseStatus__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_external_api_msgs__msg__ResponseStatus__Sequence__are_equal(const autoware_external_api_msgs__msg__ResponseStatus__Sequence * lhs, const autoware_external_api_msgs__msg__ResponseStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_external_api_msgs__msg__ResponseStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_external_api_msgs__msg__ResponseStatus__Sequence__copy(
  const autoware_external_api_msgs__msg__ResponseStatus__Sequence * input,
  autoware_external_api_msgs__msg__ResponseStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_external_api_msgs__msg__ResponseStatus);
    autoware_external_api_msgs__msg__ResponseStatus * data =
      (autoware_external_api_msgs__msg__ResponseStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_external_api_msgs__msg__ResponseStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_external_api_msgs__msg__ResponseStatus__fini(&data[i]);
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
    if (!autoware_external_api_msgs__msg__ResponseStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
