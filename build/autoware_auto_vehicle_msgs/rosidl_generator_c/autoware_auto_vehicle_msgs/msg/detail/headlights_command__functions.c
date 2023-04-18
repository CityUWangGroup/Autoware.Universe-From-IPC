// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_vehicle_msgs:msg/HeadlightsCommand.idl
// generated code does not contain a copyright notice
#include "autoware_auto_vehicle_msgs/msg/detail/headlights_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__init(autoware_auto_vehicle_msgs__msg__HeadlightsCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_vehicle_msgs__msg__HeadlightsCommand__fini(msg);
    return false;
  }
  // command
  msg->command = 0;
  return true;
}

void
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__fini(autoware_auto_vehicle_msgs__msg__HeadlightsCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // command
}

bool
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__are_equal(const autoware_auto_vehicle_msgs__msg__HeadlightsCommand * lhs, const autoware_auto_vehicle_msgs__msg__HeadlightsCommand * rhs)
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
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__copy(
  const autoware_auto_vehicle_msgs__msg__HeadlightsCommand * input,
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand * output)
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
  // command
  output->command = input->command;
  return true;
}

autoware_auto_vehicle_msgs__msg__HeadlightsCommand *
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__create()
{
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand * msg = (autoware_auto_vehicle_msgs__msg__HeadlightsCommand *)malloc(sizeof(autoware_auto_vehicle_msgs__msg__HeadlightsCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_vehicle_msgs__msg__HeadlightsCommand));
  bool success = autoware_auto_vehicle_msgs__msg__HeadlightsCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__destroy(autoware_auto_vehicle_msgs__msg__HeadlightsCommand * msg)
{
  if (msg) {
    autoware_auto_vehicle_msgs__msg__HeadlightsCommand__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__init(autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand * data = NULL;
  if (size) {
    data = (autoware_auto_vehicle_msgs__msg__HeadlightsCommand *)calloc(size, sizeof(autoware_auto_vehicle_msgs__msg__HeadlightsCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_vehicle_msgs__msg__HeadlightsCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_vehicle_msgs__msg__HeadlightsCommand__fini(&data[i - 1]);
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
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__fini(autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_vehicle_msgs__msg__HeadlightsCommand__fini(&array->data[i]);
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

autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence *
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__create(size_t size)
{
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * array = (autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence *)malloc(sizeof(autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__destroy(autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * array)
{
  if (array) {
    autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__are_equal(const autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * lhs, const autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_vehicle_msgs__msg__HeadlightsCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence__copy(
  const autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * input,
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_vehicle_msgs__msg__HeadlightsCommand);
    autoware_auto_vehicle_msgs__msg__HeadlightsCommand * data =
      (autoware_auto_vehicle_msgs__msg__HeadlightsCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_vehicle_msgs__msg__HeadlightsCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_vehicle_msgs__msg__HeadlightsCommand__fini(&data[i]);
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
    if (!autoware_auto_vehicle_msgs__msg__HeadlightsCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
