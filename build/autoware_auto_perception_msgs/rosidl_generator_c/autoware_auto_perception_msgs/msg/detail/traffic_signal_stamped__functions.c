// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalStamped.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `signal`
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__functions.h"

bool
autoware_auto_perception_msgs__msg__TrafficSignalStamped__init(autoware_auto_perception_msgs__msg__TrafficSignalStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(msg);
    return false;
  }
  // signal
  if (!autoware_auto_perception_msgs__msg__TrafficSignal__init(&msg->signal)) {
    autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(autoware_auto_perception_msgs__msg__TrafficSignalStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // signal
  autoware_auto_perception_msgs__msg__TrafficSignal__fini(&msg->signal);
}

bool
autoware_auto_perception_msgs__msg__TrafficSignalStamped__are_equal(const autoware_auto_perception_msgs__msg__TrafficSignalStamped * lhs, const autoware_auto_perception_msgs__msg__TrafficSignalStamped * rhs)
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
  // signal
  if (!autoware_auto_perception_msgs__msg__TrafficSignal__are_equal(
      &(lhs->signal), &(rhs->signal)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrafficSignalStamped__copy(
  const autoware_auto_perception_msgs__msg__TrafficSignalStamped * input,
  autoware_auto_perception_msgs__msg__TrafficSignalStamped * output)
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
  // signal
  if (!autoware_auto_perception_msgs__msg__TrafficSignal__copy(
      &(input->signal), &(output->signal)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__TrafficSignalStamped *
autoware_auto_perception_msgs__msg__TrafficSignalStamped__create()
{
  autoware_auto_perception_msgs__msg__TrafficSignalStamped * msg = (autoware_auto_perception_msgs__msg__TrafficSignalStamped *)malloc(sizeof(autoware_auto_perception_msgs__msg__TrafficSignalStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__TrafficSignalStamped));
  bool success = autoware_auto_perception_msgs__msg__TrafficSignalStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__TrafficSignalStamped__destroy(autoware_auto_perception_msgs__msg__TrafficSignalStamped * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__init(autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__TrafficSignalStamped * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__TrafficSignalStamped *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__TrafficSignalStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__TrafficSignalStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__fini(autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence *
autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * array = (autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__destroy(autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__are_equal(const autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * lhs, const autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrafficSignalStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence__copy(
  const autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * input,
  autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__TrafficSignalStamped);
    autoware_auto_perception_msgs__msg__TrafficSignalStamped * data =
      (autoware_auto_perception_msgs__msg__TrafficSignalStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__TrafficSignalStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__TrafficSignalStamped__fini(&data[i]);
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
    if (!autoware_auto_perception_msgs__msg__TrafficSignalStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
