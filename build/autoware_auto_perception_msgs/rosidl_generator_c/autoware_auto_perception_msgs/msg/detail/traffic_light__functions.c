// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/traffic_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
autoware_auto_perception_msgs__msg__TrafficLight__init(autoware_auto_perception_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return false;
  }
  // color
  msg->color = 0;
  // shape
  msg->shape = 0;
  // status
  msg->status = 0;
  // confidence
  msg->confidence = 0.0f;
  return true;
}

void
autoware_auto_perception_msgs__msg__TrafficLight__fini(autoware_auto_perception_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return;
  }
  // color
  // shape
  // status
  // confidence
}

bool
autoware_auto_perception_msgs__msg__TrafficLight__are_equal(const autoware_auto_perception_msgs__msg__TrafficLight * lhs, const autoware_auto_perception_msgs__msg__TrafficLight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // shape
  if (lhs->shape != rhs->shape) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrafficLight__copy(
  const autoware_auto_perception_msgs__msg__TrafficLight * input,
  autoware_auto_perception_msgs__msg__TrafficLight * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // shape
  output->shape = input->shape;
  // status
  output->status = input->status;
  // confidence
  output->confidence = input->confidence;
  return true;
}

autoware_auto_perception_msgs__msg__TrafficLight *
autoware_auto_perception_msgs__msg__TrafficLight__create()
{
  autoware_auto_perception_msgs__msg__TrafficLight * msg = (autoware_auto_perception_msgs__msg__TrafficLight *)malloc(sizeof(autoware_auto_perception_msgs__msg__TrafficLight));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__TrafficLight));
  bool success = autoware_auto_perception_msgs__msg__TrafficLight__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__TrafficLight__destroy(autoware_auto_perception_msgs__msg__TrafficLight * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__TrafficLight__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__TrafficLight__Sequence__init(autoware_auto_perception_msgs__msg__TrafficLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__TrafficLight * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__TrafficLight *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__TrafficLight));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__TrafficLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__TrafficLight__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__TrafficLight__Sequence__fini(autoware_auto_perception_msgs__msg__TrafficLight__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__TrafficLight__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__TrafficLight__Sequence *
autoware_auto_perception_msgs__msg__TrafficLight__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__TrafficLight__Sequence * array = (autoware_auto_perception_msgs__msg__TrafficLight__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__TrafficLight__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__TrafficLight__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__TrafficLight__Sequence__destroy(autoware_auto_perception_msgs__msg__TrafficLight__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__TrafficLight__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_perception_msgs__msg__TrafficLight__Sequence__are_equal(const autoware_auto_perception_msgs__msg__TrafficLight__Sequence * lhs, const autoware_auto_perception_msgs__msg__TrafficLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrafficLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrafficLight__Sequence__copy(
  const autoware_auto_perception_msgs__msg__TrafficLight__Sequence * input,
  autoware_auto_perception_msgs__msg__TrafficLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__TrafficLight);
    autoware_auto_perception_msgs__msg__TrafficLight * data =
      (autoware_auto_perception_msgs__msg__TrafficLight *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__TrafficLight__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__TrafficLight__fini(&data[i]);
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
    if (!autoware_auto_perception_msgs__msg__TrafficLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
