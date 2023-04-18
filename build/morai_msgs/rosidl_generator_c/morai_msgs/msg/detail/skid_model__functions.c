// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/skid_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `rpm`
#include "morai_msgs/msg/detail/wheel_rpm__functions.h"
// Member `torque`
#include "morai_msgs/msg/detail/wheel_torque__functions.h"

bool
morai_msgs__msg__SkidModel__init(morai_msgs__msg__SkidModel * msg)
{
  if (!msg) {
    return false;
  }
  // rpm
  if (!morai_msgs__msg__WheelRpm__init(&msg->rpm)) {
    morai_msgs__msg__SkidModel__fini(msg);
    return false;
  }
  // torque
  if (!morai_msgs__msg__WheelTorque__init(&msg->torque)) {
    morai_msgs__msg__SkidModel__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__SkidModel__fini(morai_msgs__msg__SkidModel * msg)
{
  if (!msg) {
    return;
  }
  // rpm
  morai_msgs__msg__WheelRpm__fini(&msg->rpm);
  // torque
  morai_msgs__msg__WheelTorque__fini(&msg->torque);
}

bool
morai_msgs__msg__SkidModel__are_equal(const morai_msgs__msg__SkidModel * lhs, const morai_msgs__msg__SkidModel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rpm
  if (!morai_msgs__msg__WheelRpm__are_equal(
      &(lhs->rpm), &(rhs->rpm)))
  {
    return false;
  }
  // torque
  if (!morai_msgs__msg__WheelTorque__are_equal(
      &(lhs->torque), &(rhs->torque)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SkidModel__copy(
  const morai_msgs__msg__SkidModel * input,
  morai_msgs__msg__SkidModel * output)
{
  if (!input || !output) {
    return false;
  }
  // rpm
  if (!morai_msgs__msg__WheelRpm__copy(
      &(input->rpm), &(output->rpm)))
  {
    return false;
  }
  // torque
  if (!morai_msgs__msg__WheelTorque__copy(
      &(input->torque), &(output->torque)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__SkidModel *
morai_msgs__msg__SkidModel__create()
{
  morai_msgs__msg__SkidModel * msg = (morai_msgs__msg__SkidModel *)malloc(sizeof(morai_msgs__msg__SkidModel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SkidModel));
  bool success = morai_msgs__msg__SkidModel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SkidModel__destroy(morai_msgs__msg__SkidModel * msg)
{
  if (msg) {
    morai_msgs__msg__SkidModel__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__SkidModel__Sequence__init(morai_msgs__msg__SkidModel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__SkidModel * data = NULL;
  if (size) {
    data = (morai_msgs__msg__SkidModel *)calloc(size, sizeof(morai_msgs__msg__SkidModel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SkidModel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SkidModel__fini(&data[i - 1]);
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
morai_msgs__msg__SkidModel__Sequence__fini(morai_msgs__msg__SkidModel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__SkidModel__fini(&array->data[i]);
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

morai_msgs__msg__SkidModel__Sequence *
morai_msgs__msg__SkidModel__Sequence__create(size_t size)
{
  morai_msgs__msg__SkidModel__Sequence * array = (morai_msgs__msg__SkidModel__Sequence *)malloc(sizeof(morai_msgs__msg__SkidModel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SkidModel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SkidModel__Sequence__destroy(morai_msgs__msg__SkidModel__Sequence * array)
{
  if (array) {
    morai_msgs__msg__SkidModel__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__SkidModel__Sequence__are_equal(const morai_msgs__msg__SkidModel__Sequence * lhs, const morai_msgs__msg__SkidModel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SkidModel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SkidModel__Sequence__copy(
  const morai_msgs__msg__SkidModel__Sequence * input,
  morai_msgs__msg__SkidModel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SkidModel);
    morai_msgs__msg__SkidModel * data =
      (morai_msgs__msg__SkidModel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SkidModel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SkidModel__fini(&data[i]);
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
    if (!morai_msgs__msg__SkidModel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
