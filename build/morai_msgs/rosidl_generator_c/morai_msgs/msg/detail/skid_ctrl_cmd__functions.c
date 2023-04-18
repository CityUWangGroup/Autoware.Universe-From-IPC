// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/skid_ctrl_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `skid_model_ctrl`
#include "morai_msgs/msg/detail/skid_model__functions.h"
// Member `velocity_ctrl`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
morai_msgs__msg__SkidCtrlCmd__init(morai_msgs__msg__SkidCtrlCmd * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_type
  // skid_model_ctrl
  if (!morai_msgs__msg__SkidModel__init(&msg->skid_model_ctrl)) {
    morai_msgs__msg__SkidCtrlCmd__fini(msg);
    return false;
  }
  // velocity_ctrl
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_ctrl)) {
    morai_msgs__msg__SkidCtrlCmd__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__SkidCtrlCmd__fini(morai_msgs__msg__SkidCtrlCmd * msg)
{
  if (!msg) {
    return;
  }
  // cmd_type
  // skid_model_ctrl
  morai_msgs__msg__SkidModel__fini(&msg->skid_model_ctrl);
  // velocity_ctrl
  geometry_msgs__msg__Twist__fini(&msg->velocity_ctrl);
}

bool
morai_msgs__msg__SkidCtrlCmd__are_equal(const morai_msgs__msg__SkidCtrlCmd * lhs, const morai_msgs__msg__SkidCtrlCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_type
  if (lhs->cmd_type != rhs->cmd_type) {
    return false;
  }
  // skid_model_ctrl
  if (!morai_msgs__msg__SkidModel__are_equal(
      &(lhs->skid_model_ctrl), &(rhs->skid_model_ctrl)))
  {
    return false;
  }
  // velocity_ctrl
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_ctrl), &(rhs->velocity_ctrl)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SkidCtrlCmd__copy(
  const morai_msgs__msg__SkidCtrlCmd * input,
  morai_msgs__msg__SkidCtrlCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_type
  output->cmd_type = input->cmd_type;
  // skid_model_ctrl
  if (!morai_msgs__msg__SkidModel__copy(
      &(input->skid_model_ctrl), &(output->skid_model_ctrl)))
  {
    return false;
  }
  // velocity_ctrl
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_ctrl), &(output->velocity_ctrl)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__SkidCtrlCmd *
morai_msgs__msg__SkidCtrlCmd__create()
{
  morai_msgs__msg__SkidCtrlCmd * msg = (morai_msgs__msg__SkidCtrlCmd *)malloc(sizeof(morai_msgs__msg__SkidCtrlCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SkidCtrlCmd));
  bool success = morai_msgs__msg__SkidCtrlCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SkidCtrlCmd__destroy(morai_msgs__msg__SkidCtrlCmd * msg)
{
  if (msg) {
    morai_msgs__msg__SkidCtrlCmd__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__SkidCtrlCmd__Sequence__init(morai_msgs__msg__SkidCtrlCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__SkidCtrlCmd * data = NULL;
  if (size) {
    data = (morai_msgs__msg__SkidCtrlCmd *)calloc(size, sizeof(morai_msgs__msg__SkidCtrlCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SkidCtrlCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SkidCtrlCmd__fini(&data[i - 1]);
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
morai_msgs__msg__SkidCtrlCmd__Sequence__fini(morai_msgs__msg__SkidCtrlCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__SkidCtrlCmd__fini(&array->data[i]);
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

morai_msgs__msg__SkidCtrlCmd__Sequence *
morai_msgs__msg__SkidCtrlCmd__Sequence__create(size_t size)
{
  morai_msgs__msg__SkidCtrlCmd__Sequence * array = (morai_msgs__msg__SkidCtrlCmd__Sequence *)malloc(sizeof(morai_msgs__msg__SkidCtrlCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SkidCtrlCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SkidCtrlCmd__Sequence__destroy(morai_msgs__msg__SkidCtrlCmd__Sequence * array)
{
  if (array) {
    morai_msgs__msg__SkidCtrlCmd__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__SkidCtrlCmd__Sequence__are_equal(const morai_msgs__msg__SkidCtrlCmd__Sequence * lhs, const morai_msgs__msg__SkidCtrlCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SkidCtrlCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SkidCtrlCmd__Sequence__copy(
  const morai_msgs__msg__SkidCtrlCmd__Sequence * input,
  morai_msgs__msg__SkidCtrlCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SkidCtrlCmd);
    morai_msgs__msg__SkidCtrlCmd * data =
      (morai_msgs__msg__SkidCtrlCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SkidCtrlCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SkidCtrlCmd__fini(&data[i]);
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
    if (!morai_msgs__msg__SkidCtrlCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
