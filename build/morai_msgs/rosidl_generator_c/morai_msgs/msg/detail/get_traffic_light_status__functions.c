// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/get_traffic_light_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `traffic_light_index`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__GetTrafficLightStatus__init(morai_msgs__msg__GetTrafficLightStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__GetTrafficLightStatus__fini(msg);
    return false;
  }
  // traffic_light_index
  if (!rosidl_runtime_c__String__init(&msg->traffic_light_index)) {
    morai_msgs__msg__GetTrafficLightStatus__fini(msg);
    return false;
  }
  // traffic_light_type
  // traffic_light_status
  return true;
}

void
morai_msgs__msg__GetTrafficLightStatus__fini(morai_msgs__msg__GetTrafficLightStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // traffic_light_index
  rosidl_runtime_c__String__fini(&msg->traffic_light_index);
  // traffic_light_type
  // traffic_light_status
}

bool
morai_msgs__msg__GetTrafficLightStatus__are_equal(const morai_msgs__msg__GetTrafficLightStatus * lhs, const morai_msgs__msg__GetTrafficLightStatus * rhs)
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
  // traffic_light_index
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->traffic_light_index), &(rhs->traffic_light_index)))
  {
    return false;
  }
  // traffic_light_type
  if (lhs->traffic_light_type != rhs->traffic_light_type) {
    return false;
  }
  // traffic_light_status
  if (lhs->traffic_light_status != rhs->traffic_light_status) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__GetTrafficLightStatus__copy(
  const morai_msgs__msg__GetTrafficLightStatus * input,
  morai_msgs__msg__GetTrafficLightStatus * output)
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
  // traffic_light_index
  if (!rosidl_runtime_c__String__copy(
      &(input->traffic_light_index), &(output->traffic_light_index)))
  {
    return false;
  }
  // traffic_light_type
  output->traffic_light_type = input->traffic_light_type;
  // traffic_light_status
  output->traffic_light_status = input->traffic_light_status;
  return true;
}

morai_msgs__msg__GetTrafficLightStatus *
morai_msgs__msg__GetTrafficLightStatus__create()
{
  morai_msgs__msg__GetTrafficLightStatus * msg = (morai_msgs__msg__GetTrafficLightStatus *)malloc(sizeof(morai_msgs__msg__GetTrafficLightStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__GetTrafficLightStatus));
  bool success = morai_msgs__msg__GetTrafficLightStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__GetTrafficLightStatus__destroy(morai_msgs__msg__GetTrafficLightStatus * msg)
{
  if (msg) {
    morai_msgs__msg__GetTrafficLightStatus__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__GetTrafficLightStatus__Sequence__init(morai_msgs__msg__GetTrafficLightStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__GetTrafficLightStatus * data = NULL;
  if (size) {
    data = (morai_msgs__msg__GetTrafficLightStatus *)calloc(size, sizeof(morai_msgs__msg__GetTrafficLightStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__GetTrafficLightStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__GetTrafficLightStatus__fini(&data[i - 1]);
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
morai_msgs__msg__GetTrafficLightStatus__Sequence__fini(morai_msgs__msg__GetTrafficLightStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__GetTrafficLightStatus__fini(&array->data[i]);
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

morai_msgs__msg__GetTrafficLightStatus__Sequence *
morai_msgs__msg__GetTrafficLightStatus__Sequence__create(size_t size)
{
  morai_msgs__msg__GetTrafficLightStatus__Sequence * array = (morai_msgs__msg__GetTrafficLightStatus__Sequence *)malloc(sizeof(morai_msgs__msg__GetTrafficLightStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__GetTrafficLightStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__GetTrafficLightStatus__Sequence__destroy(morai_msgs__msg__GetTrafficLightStatus__Sequence * array)
{
  if (array) {
    morai_msgs__msg__GetTrafficLightStatus__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__GetTrafficLightStatus__Sequence__are_equal(const morai_msgs__msg__GetTrafficLightStatus__Sequence * lhs, const morai_msgs__msg__GetTrafficLightStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__GetTrafficLightStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__GetTrafficLightStatus__Sequence__copy(
  const morai_msgs__msg__GetTrafficLightStatus__Sequence * input,
  morai_msgs__msg__GetTrafficLightStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__GetTrafficLightStatus);
    morai_msgs__msg__GetTrafficLightStatus * data =
      (morai_msgs__msg__GetTrafficLightStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__GetTrafficLightStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__GetTrafficLightStatus__fini(&data[i]);
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
    if (!morai_msgs__msg__GetTrafficLightStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
