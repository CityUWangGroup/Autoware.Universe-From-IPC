// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_vehicle_msgs:msg/ControlModeCommand.idl
// generated code does not contain a copyright notice
#include "autoware_auto_vehicle_msgs/msg/detail/control_mode_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_vehicle_msgs__msg__ControlModeCommand__init(autoware_auto_vehicle_msgs__msg__ControlModeCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_vehicle_msgs__msg__ControlModeCommand__fini(msg);
    return false;
  }
  // mode
  msg->mode = 0;
  return true;
}

void
autoware_auto_vehicle_msgs__msg__ControlModeCommand__fini(autoware_auto_vehicle_msgs__msg__ControlModeCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // mode
}

bool
autoware_auto_vehicle_msgs__msg__ControlModeCommand__are_equal(const autoware_auto_vehicle_msgs__msg__ControlModeCommand * lhs, const autoware_auto_vehicle_msgs__msg__ControlModeCommand * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__ControlModeCommand__copy(
  const autoware_auto_vehicle_msgs__msg__ControlModeCommand * input,
  autoware_auto_vehicle_msgs__msg__ControlModeCommand * output)
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
  // mode
  output->mode = input->mode;
  return true;
}

autoware_auto_vehicle_msgs__msg__ControlModeCommand *
autoware_auto_vehicle_msgs__msg__ControlModeCommand__create()
{
  autoware_auto_vehicle_msgs__msg__ControlModeCommand * msg = (autoware_auto_vehicle_msgs__msg__ControlModeCommand *)malloc(sizeof(autoware_auto_vehicle_msgs__msg__ControlModeCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_vehicle_msgs__msg__ControlModeCommand));
  bool success = autoware_auto_vehicle_msgs__msg__ControlModeCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_vehicle_msgs__msg__ControlModeCommand__destroy(autoware_auto_vehicle_msgs__msg__ControlModeCommand * msg)
{
  if (msg) {
    autoware_auto_vehicle_msgs__msg__ControlModeCommand__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__init(autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_vehicle_msgs__msg__ControlModeCommand * data = NULL;
  if (size) {
    data = (autoware_auto_vehicle_msgs__msg__ControlModeCommand *)calloc(size, sizeof(autoware_auto_vehicle_msgs__msg__ControlModeCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_vehicle_msgs__msg__ControlModeCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_vehicle_msgs__msg__ControlModeCommand__fini(&data[i - 1]);
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
autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__fini(autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_vehicle_msgs__msg__ControlModeCommand__fini(&array->data[i]);
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

autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence *
autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__create(size_t size)
{
  autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * array = (autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence *)malloc(sizeof(autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__destroy(autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * array)
{
  if (array) {
    autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__are_equal(const autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * lhs, const autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_vehicle_msgs__msg__ControlModeCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence__copy(
  const autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * input,
  autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_vehicle_msgs__msg__ControlModeCommand);
    autoware_auto_vehicle_msgs__msg__ControlModeCommand * data =
      (autoware_auto_vehicle_msgs__msg__ControlModeCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_vehicle_msgs__msg__ControlModeCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_vehicle_msgs__msg__ControlModeCommand__fini(&data[i]);
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
    if (!autoware_auto_vehicle_msgs__msg__ControlModeCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
