// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_vehicle_msgs:msg/ActuationStatus.idl
// generated code does not contain a copyright notice
#include "tier4_vehicle_msgs/msg/detail/actuation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tier4_vehicle_msgs__msg__ActuationStatus__init(tier4_vehicle_msgs__msg__ActuationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // accel_status
  // brake_status
  // steer_status
  return true;
}

void
tier4_vehicle_msgs__msg__ActuationStatus__fini(tier4_vehicle_msgs__msg__ActuationStatus * msg)
{
  if (!msg) {
    return;
  }
  // accel_status
  // brake_status
  // steer_status
}

bool
tier4_vehicle_msgs__msg__ActuationStatus__are_equal(const tier4_vehicle_msgs__msg__ActuationStatus * lhs, const tier4_vehicle_msgs__msg__ActuationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accel_status
  if (lhs->accel_status != rhs->accel_status) {
    return false;
  }
  // brake_status
  if (lhs->brake_status != rhs->brake_status) {
    return false;
  }
  // steer_status
  if (lhs->steer_status != rhs->steer_status) {
    return false;
  }
  return true;
}

bool
tier4_vehicle_msgs__msg__ActuationStatus__copy(
  const tier4_vehicle_msgs__msg__ActuationStatus * input,
  tier4_vehicle_msgs__msg__ActuationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // accel_status
  output->accel_status = input->accel_status;
  // brake_status
  output->brake_status = input->brake_status;
  // steer_status
  output->steer_status = input->steer_status;
  return true;
}

tier4_vehicle_msgs__msg__ActuationStatus *
tier4_vehicle_msgs__msg__ActuationStatus__create()
{
  tier4_vehicle_msgs__msg__ActuationStatus * msg = (tier4_vehicle_msgs__msg__ActuationStatus *)malloc(sizeof(tier4_vehicle_msgs__msg__ActuationStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_vehicle_msgs__msg__ActuationStatus));
  bool success = tier4_vehicle_msgs__msg__ActuationStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_vehicle_msgs__msg__ActuationStatus__destroy(tier4_vehicle_msgs__msg__ActuationStatus * msg)
{
  if (msg) {
    tier4_vehicle_msgs__msg__ActuationStatus__fini(msg);
  }
  free(msg);
}


bool
tier4_vehicle_msgs__msg__ActuationStatus__Sequence__init(tier4_vehicle_msgs__msg__ActuationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_vehicle_msgs__msg__ActuationStatus * data = NULL;
  if (size) {
    data = (tier4_vehicle_msgs__msg__ActuationStatus *)calloc(size, sizeof(tier4_vehicle_msgs__msg__ActuationStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_vehicle_msgs__msg__ActuationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_vehicle_msgs__msg__ActuationStatus__fini(&data[i - 1]);
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
tier4_vehicle_msgs__msg__ActuationStatus__Sequence__fini(tier4_vehicle_msgs__msg__ActuationStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_vehicle_msgs__msg__ActuationStatus__fini(&array->data[i]);
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

tier4_vehicle_msgs__msg__ActuationStatus__Sequence *
tier4_vehicle_msgs__msg__ActuationStatus__Sequence__create(size_t size)
{
  tier4_vehicle_msgs__msg__ActuationStatus__Sequence * array = (tier4_vehicle_msgs__msg__ActuationStatus__Sequence *)malloc(sizeof(tier4_vehicle_msgs__msg__ActuationStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_vehicle_msgs__msg__ActuationStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_vehicle_msgs__msg__ActuationStatus__Sequence__destroy(tier4_vehicle_msgs__msg__ActuationStatus__Sequence * array)
{
  if (array) {
    tier4_vehicle_msgs__msg__ActuationStatus__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_vehicle_msgs__msg__ActuationStatus__Sequence__are_equal(const tier4_vehicle_msgs__msg__ActuationStatus__Sequence * lhs, const tier4_vehicle_msgs__msg__ActuationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_vehicle_msgs__msg__ActuationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_vehicle_msgs__msg__ActuationStatus__Sequence__copy(
  const tier4_vehicle_msgs__msg__ActuationStatus__Sequence * input,
  tier4_vehicle_msgs__msg__ActuationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_vehicle_msgs__msg__ActuationStatus);
    tier4_vehicle_msgs__msg__ActuationStatus * data =
      (tier4_vehicle_msgs__msg__ActuationStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_vehicle_msgs__msg__ActuationStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_vehicle_msgs__msg__ActuationStatus__fini(&data[i]);
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
    if (!tier4_vehicle_msgs__msg__ActuationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
