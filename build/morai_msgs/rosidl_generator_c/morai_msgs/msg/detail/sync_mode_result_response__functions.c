// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SyncModeResultResponse.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_result_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
morai_msgs__msg__SyncModeResultResponse__init(morai_msgs__msg__SyncModeResultResponse * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
morai_msgs__msg__SyncModeResultResponse__fini(morai_msgs__msg__SyncModeResultResponse * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
morai_msgs__msg__SyncModeResultResponse__are_equal(const morai_msgs__msg__SyncModeResultResponse * lhs, const morai_msgs__msg__SyncModeResultResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SyncModeResultResponse__copy(
  const morai_msgs__msg__SyncModeResultResponse * input,
  morai_msgs__msg__SyncModeResultResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

morai_msgs__msg__SyncModeResultResponse *
morai_msgs__msg__SyncModeResultResponse__create()
{
  morai_msgs__msg__SyncModeResultResponse * msg = (morai_msgs__msg__SyncModeResultResponse *)malloc(sizeof(morai_msgs__msg__SyncModeResultResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SyncModeResultResponse));
  bool success = morai_msgs__msg__SyncModeResultResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SyncModeResultResponse__destroy(morai_msgs__msg__SyncModeResultResponse * msg)
{
  if (msg) {
    morai_msgs__msg__SyncModeResultResponse__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__SyncModeResultResponse__Sequence__init(morai_msgs__msg__SyncModeResultResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__SyncModeResultResponse * data = NULL;
  if (size) {
    data = (morai_msgs__msg__SyncModeResultResponse *)calloc(size, sizeof(morai_msgs__msg__SyncModeResultResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SyncModeResultResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SyncModeResultResponse__fini(&data[i - 1]);
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
morai_msgs__msg__SyncModeResultResponse__Sequence__fini(morai_msgs__msg__SyncModeResultResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__SyncModeResultResponse__fini(&array->data[i]);
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

morai_msgs__msg__SyncModeResultResponse__Sequence *
morai_msgs__msg__SyncModeResultResponse__Sequence__create(size_t size)
{
  morai_msgs__msg__SyncModeResultResponse__Sequence * array = (morai_msgs__msg__SyncModeResultResponse__Sequence *)malloc(sizeof(morai_msgs__msg__SyncModeResultResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SyncModeResultResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SyncModeResultResponse__Sequence__destroy(morai_msgs__msg__SyncModeResultResponse__Sequence * array)
{
  if (array) {
    morai_msgs__msg__SyncModeResultResponse__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__SyncModeResultResponse__Sequence__are_equal(const morai_msgs__msg__SyncModeResultResponse__Sequence * lhs, const morai_msgs__msg__SyncModeResultResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SyncModeResultResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SyncModeResultResponse__Sequence__copy(
  const morai_msgs__msg__SyncModeResultResponse__Sequence * input,
  morai_msgs__msg__SyncModeResultResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SyncModeResultResponse);
    morai_msgs__msg__SyncModeResultResponse * data =
      (morai_msgs__msg__SyncModeResultResponse *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SyncModeResultResponse__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SyncModeResultResponse__fini(&data[i]);
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
    if (!morai_msgs__msg__SyncModeResultResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
