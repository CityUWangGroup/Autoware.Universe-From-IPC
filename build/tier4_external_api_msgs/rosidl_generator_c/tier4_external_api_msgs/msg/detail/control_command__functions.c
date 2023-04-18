// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/control_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tier4_external_api_msgs__msg__ControlCommand__init(tier4_external_api_msgs__msg__ControlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // steering_angle
  // steering_angle_velocity
  // throttle
  // brake
  return true;
}

void
tier4_external_api_msgs__msg__ControlCommand__fini(tier4_external_api_msgs__msg__ControlCommand * msg)
{
  if (!msg) {
    return;
  }
  // steering_angle
  // steering_angle_velocity
  // throttle
  // brake
}

bool
tier4_external_api_msgs__msg__ControlCommand__are_equal(const tier4_external_api_msgs__msg__ControlCommand * lhs, const tier4_external_api_msgs__msg__ControlCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  // steering_angle_velocity
  if (lhs->steering_angle_velocity != rhs->steering_angle_velocity) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__ControlCommand__copy(
  const tier4_external_api_msgs__msg__ControlCommand * input,
  tier4_external_api_msgs__msg__ControlCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // steering_angle
  output->steering_angle = input->steering_angle;
  // steering_angle_velocity
  output->steering_angle_velocity = input->steering_angle_velocity;
  // throttle
  output->throttle = input->throttle;
  // brake
  output->brake = input->brake;
  return true;
}

tier4_external_api_msgs__msg__ControlCommand *
tier4_external_api_msgs__msg__ControlCommand__create()
{
  tier4_external_api_msgs__msg__ControlCommand * msg = (tier4_external_api_msgs__msg__ControlCommand *)malloc(sizeof(tier4_external_api_msgs__msg__ControlCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__ControlCommand));
  bool success = tier4_external_api_msgs__msg__ControlCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__ControlCommand__destroy(tier4_external_api_msgs__msg__ControlCommand * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__ControlCommand__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__ControlCommand__Sequence__init(tier4_external_api_msgs__msg__ControlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__ControlCommand * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__ControlCommand *)calloc(size, sizeof(tier4_external_api_msgs__msg__ControlCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__ControlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__ControlCommand__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__ControlCommand__Sequence__fini(tier4_external_api_msgs__msg__ControlCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__ControlCommand__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__ControlCommand__Sequence *
tier4_external_api_msgs__msg__ControlCommand__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__ControlCommand__Sequence * array = (tier4_external_api_msgs__msg__ControlCommand__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__ControlCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__ControlCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__ControlCommand__Sequence__destroy(tier4_external_api_msgs__msg__ControlCommand__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__ControlCommand__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__ControlCommand__Sequence__are_equal(const tier4_external_api_msgs__msg__ControlCommand__Sequence * lhs, const tier4_external_api_msgs__msg__ControlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__ControlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__ControlCommand__Sequence__copy(
  const tier4_external_api_msgs__msg__ControlCommand__Sequence * input,
  tier4_external_api_msgs__msg__ControlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__ControlCommand);
    tier4_external_api_msgs__msg__ControlCommand * data =
      (tier4_external_api_msgs__msg__ControlCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__ControlCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__ControlCommand__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__ControlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
