// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SyncModeCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `user_id`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__SyncModeCmd__init(morai_msgs__msg__SyncModeCmd * msg)
{
  if (!msg) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__init(&msg->user_id)) {
    morai_msgs__msg__SyncModeCmd__fini(msg);
    return false;
  }
  // start_sync_mode
  // time_step
  return true;
}

void
morai_msgs__msg__SyncModeCmd__fini(morai_msgs__msg__SyncModeCmd * msg)
{
  if (!msg) {
    return;
  }
  // user_id
  rosidl_runtime_c__String__fini(&msg->user_id);
  // start_sync_mode
  // time_step
}

bool
morai_msgs__msg__SyncModeCmd__are_equal(const morai_msgs__msg__SyncModeCmd * lhs, const morai_msgs__msg__SyncModeCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_id), &(rhs->user_id)))
  {
    return false;
  }
  // start_sync_mode
  if (lhs->start_sync_mode != rhs->start_sync_mode) {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SyncModeCmd__copy(
  const morai_msgs__msg__SyncModeCmd * input,
  morai_msgs__msg__SyncModeCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__copy(
      &(input->user_id), &(output->user_id)))
  {
    return false;
  }
  // start_sync_mode
  output->start_sync_mode = input->start_sync_mode;
  // time_step
  output->time_step = input->time_step;
  return true;
}

morai_msgs__msg__SyncModeCmd *
morai_msgs__msg__SyncModeCmd__create()
{
  morai_msgs__msg__SyncModeCmd * msg = (morai_msgs__msg__SyncModeCmd *)malloc(sizeof(morai_msgs__msg__SyncModeCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SyncModeCmd));
  bool success = morai_msgs__msg__SyncModeCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SyncModeCmd__destroy(morai_msgs__msg__SyncModeCmd * msg)
{
  if (msg) {
    morai_msgs__msg__SyncModeCmd__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__SyncModeCmd__Sequence__init(morai_msgs__msg__SyncModeCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__SyncModeCmd * data = NULL;
  if (size) {
    data = (morai_msgs__msg__SyncModeCmd *)calloc(size, sizeof(morai_msgs__msg__SyncModeCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SyncModeCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SyncModeCmd__fini(&data[i - 1]);
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
morai_msgs__msg__SyncModeCmd__Sequence__fini(morai_msgs__msg__SyncModeCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__SyncModeCmd__fini(&array->data[i]);
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

morai_msgs__msg__SyncModeCmd__Sequence *
morai_msgs__msg__SyncModeCmd__Sequence__create(size_t size)
{
  morai_msgs__msg__SyncModeCmd__Sequence * array = (morai_msgs__msg__SyncModeCmd__Sequence *)malloc(sizeof(morai_msgs__msg__SyncModeCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SyncModeCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SyncModeCmd__Sequence__destroy(morai_msgs__msg__SyncModeCmd__Sequence * array)
{
  if (array) {
    morai_msgs__msg__SyncModeCmd__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__SyncModeCmd__Sequence__are_equal(const morai_msgs__msg__SyncModeCmd__Sequence * lhs, const morai_msgs__msg__SyncModeCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SyncModeCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SyncModeCmd__Sequence__copy(
  const morai_msgs__msg__SyncModeCmd__Sequence * input,
  morai_msgs__msg__SyncModeCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SyncModeCmd);
    morai_msgs__msg__SyncModeCmd * data =
      (morai_msgs__msg__SyncModeCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SyncModeCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SyncModeCmd__fini(&data[i]);
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
    if (!morai_msgs__msg__SyncModeCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
