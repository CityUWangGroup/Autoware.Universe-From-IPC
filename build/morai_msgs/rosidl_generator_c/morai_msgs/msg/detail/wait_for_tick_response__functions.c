// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/wait_for_tick_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `vehicle_status`
#include "morai_msgs/msg/detail/ego_vehicle_status__functions.h"
// Member `time`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__WaitForTickResponse__init(morai_msgs__msg__WaitForTickResponse * msg)
{
  if (!msg) {
    return false;
  }
  // tick_status
  // pause_status
  // frame
  // vehicle_status
  if (!morai_msgs__msg__EgoVehicleStatus__init(&msg->vehicle_status)) {
    morai_msgs__msg__WaitForTickResponse__fini(msg);
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__init(&msg->time)) {
    morai_msgs__msg__WaitForTickResponse__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__WaitForTickResponse__fini(morai_msgs__msg__WaitForTickResponse * msg)
{
  if (!msg) {
    return;
  }
  // tick_status
  // pause_status
  // frame
  // vehicle_status
  morai_msgs__msg__EgoVehicleStatus__fini(&msg->vehicle_status);
  // time
  rosidl_runtime_c__String__fini(&msg->time);
}

bool
morai_msgs__msg__WaitForTickResponse__are_equal(const morai_msgs__msg__WaitForTickResponse * lhs, const morai_msgs__msg__WaitForTickResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tick_status
  if (lhs->tick_status != rhs->tick_status) {
    return false;
  }
  // pause_status
  if (lhs->pause_status != rhs->pause_status) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // vehicle_status
  if (!morai_msgs__msg__EgoVehicleStatus__are_equal(
      &(lhs->vehicle_status), &(rhs->vehicle_status)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__WaitForTickResponse__copy(
  const morai_msgs__msg__WaitForTickResponse * input,
  morai_msgs__msg__WaitForTickResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // tick_status
  output->tick_status = input->tick_status;
  // pause_status
  output->pause_status = input->pause_status;
  // frame
  output->frame = input->frame;
  // vehicle_status
  if (!morai_msgs__msg__EgoVehicleStatus__copy(
      &(input->vehicle_status), &(output->vehicle_status)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__WaitForTickResponse *
morai_msgs__msg__WaitForTickResponse__create()
{
  morai_msgs__msg__WaitForTickResponse * msg = (morai_msgs__msg__WaitForTickResponse *)malloc(sizeof(morai_msgs__msg__WaitForTickResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__WaitForTickResponse));
  bool success = morai_msgs__msg__WaitForTickResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__WaitForTickResponse__destroy(morai_msgs__msg__WaitForTickResponse * msg)
{
  if (msg) {
    morai_msgs__msg__WaitForTickResponse__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__WaitForTickResponse__Sequence__init(morai_msgs__msg__WaitForTickResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__WaitForTickResponse * data = NULL;
  if (size) {
    data = (morai_msgs__msg__WaitForTickResponse *)calloc(size, sizeof(morai_msgs__msg__WaitForTickResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__WaitForTickResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__WaitForTickResponse__fini(&data[i - 1]);
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
morai_msgs__msg__WaitForTickResponse__Sequence__fini(morai_msgs__msg__WaitForTickResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__WaitForTickResponse__fini(&array->data[i]);
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

morai_msgs__msg__WaitForTickResponse__Sequence *
morai_msgs__msg__WaitForTickResponse__Sequence__create(size_t size)
{
  morai_msgs__msg__WaitForTickResponse__Sequence * array = (morai_msgs__msg__WaitForTickResponse__Sequence *)malloc(sizeof(morai_msgs__msg__WaitForTickResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__WaitForTickResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__WaitForTickResponse__Sequence__destroy(morai_msgs__msg__WaitForTickResponse__Sequence * array)
{
  if (array) {
    morai_msgs__msg__WaitForTickResponse__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__WaitForTickResponse__Sequence__are_equal(const morai_msgs__msg__WaitForTickResponse__Sequence * lhs, const morai_msgs__msg__WaitForTickResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__WaitForTickResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__WaitForTickResponse__Sequence__copy(
  const morai_msgs__msg__WaitForTickResponse__Sequence * input,
  morai_msgs__msg__WaitForTickResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__WaitForTickResponse);
    morai_msgs__msg__WaitForTickResponse * data =
      (morai_msgs__msg__WaitForTickResponse *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__WaitForTickResponse__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__WaitForTickResponse__fini(&data[i]);
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
    if (!morai_msgs__msg__WaitForTickResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
