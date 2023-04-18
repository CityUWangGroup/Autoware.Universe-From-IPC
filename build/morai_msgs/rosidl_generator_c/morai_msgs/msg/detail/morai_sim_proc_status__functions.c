// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/MoraiSimProcStatus.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/morai_sim_proc_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `latest_command_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
morai_msgs__msg__MoraiSimProcStatus__init(morai_msgs__msg__MoraiSimProcStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__MoraiSimProcStatus__fini(msg);
    return false;
  }
  // latest_command_time
  if (!builtin_interfaces__msg__Time__init(&msg->latest_command_time)) {
    morai_msgs__msg__MoraiSimProcStatus__fini(msg);
    return false;
  }
  // command_result
  // current_mode
  // current_status
  return true;
}

void
morai_msgs__msg__MoraiSimProcStatus__fini(morai_msgs__msg__MoraiSimProcStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // latest_command_time
  builtin_interfaces__msg__Time__fini(&msg->latest_command_time);
  // command_result
  // current_mode
  // current_status
}

bool
morai_msgs__msg__MoraiSimProcStatus__are_equal(const morai_msgs__msg__MoraiSimProcStatus * lhs, const morai_msgs__msg__MoraiSimProcStatus * rhs)
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
  // latest_command_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->latest_command_time), &(rhs->latest_command_time)))
  {
    return false;
  }
  // command_result
  if (lhs->command_result != rhs->command_result) {
    return false;
  }
  // current_mode
  if (lhs->current_mode != rhs->current_mode) {
    return false;
  }
  // current_status
  if (lhs->current_status != rhs->current_status) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__MoraiSimProcStatus__copy(
  const morai_msgs__msg__MoraiSimProcStatus * input,
  morai_msgs__msg__MoraiSimProcStatus * output)
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
  // latest_command_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->latest_command_time), &(output->latest_command_time)))
  {
    return false;
  }
  // command_result
  output->command_result = input->command_result;
  // current_mode
  output->current_mode = input->current_mode;
  // current_status
  output->current_status = input->current_status;
  return true;
}

morai_msgs__msg__MoraiSimProcStatus *
morai_msgs__msg__MoraiSimProcStatus__create()
{
  morai_msgs__msg__MoraiSimProcStatus * msg = (morai_msgs__msg__MoraiSimProcStatus *)malloc(sizeof(morai_msgs__msg__MoraiSimProcStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__MoraiSimProcStatus));
  bool success = morai_msgs__msg__MoraiSimProcStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__MoraiSimProcStatus__destroy(morai_msgs__msg__MoraiSimProcStatus * msg)
{
  if (msg) {
    morai_msgs__msg__MoraiSimProcStatus__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__MoraiSimProcStatus__Sequence__init(morai_msgs__msg__MoraiSimProcStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__MoraiSimProcStatus * data = NULL;
  if (size) {
    data = (morai_msgs__msg__MoraiSimProcStatus *)calloc(size, sizeof(morai_msgs__msg__MoraiSimProcStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__MoraiSimProcStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__MoraiSimProcStatus__fini(&data[i - 1]);
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
morai_msgs__msg__MoraiSimProcStatus__Sequence__fini(morai_msgs__msg__MoraiSimProcStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__MoraiSimProcStatus__fini(&array->data[i]);
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

morai_msgs__msg__MoraiSimProcStatus__Sequence *
morai_msgs__msg__MoraiSimProcStatus__Sequence__create(size_t size)
{
  morai_msgs__msg__MoraiSimProcStatus__Sequence * array = (morai_msgs__msg__MoraiSimProcStatus__Sequence *)malloc(sizeof(morai_msgs__msg__MoraiSimProcStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__MoraiSimProcStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__MoraiSimProcStatus__Sequence__destroy(morai_msgs__msg__MoraiSimProcStatus__Sequence * array)
{
  if (array) {
    morai_msgs__msg__MoraiSimProcStatus__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__MoraiSimProcStatus__Sequence__are_equal(const morai_msgs__msg__MoraiSimProcStatus__Sequence * lhs, const morai_msgs__msg__MoraiSimProcStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__MoraiSimProcStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__MoraiSimProcStatus__Sequence__copy(
  const morai_msgs__msg__MoraiSimProcStatus__Sequence * input,
  morai_msgs__msg__MoraiSimProcStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__MoraiSimProcStatus);
    morai_msgs__msg__MoraiSimProcStatus * data =
      (morai_msgs__msg__MoraiSimProcStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__MoraiSimProcStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__MoraiSimProcStatus__fini(&data[i]);
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
    if (!morai_msgs__msg__MoraiSimProcStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
