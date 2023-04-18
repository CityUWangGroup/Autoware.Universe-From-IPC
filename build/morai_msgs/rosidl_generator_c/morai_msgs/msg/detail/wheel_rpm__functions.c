// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/WheelRpm.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/wheel_rpm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
morai_msgs__msg__WheelRpm__init(morai_msgs__msg__WheelRpm * msg)
{
  if (!msg) {
    return false;
  }
  // left_front_wheel_rpm
  // left_rear_wheel_rpm
  // right_front_wheel_rpm
  // right_rear_wheel_rpm
  return true;
}

void
morai_msgs__msg__WheelRpm__fini(morai_msgs__msg__WheelRpm * msg)
{
  if (!msg) {
    return;
  }
  // left_front_wheel_rpm
  // left_rear_wheel_rpm
  // right_front_wheel_rpm
  // right_rear_wheel_rpm
}

bool
morai_msgs__msg__WheelRpm__are_equal(const morai_msgs__msg__WheelRpm * lhs, const morai_msgs__msg__WheelRpm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_front_wheel_rpm
  if (lhs->left_front_wheel_rpm != rhs->left_front_wheel_rpm) {
    return false;
  }
  // left_rear_wheel_rpm
  if (lhs->left_rear_wheel_rpm != rhs->left_rear_wheel_rpm) {
    return false;
  }
  // right_front_wheel_rpm
  if (lhs->right_front_wheel_rpm != rhs->right_front_wheel_rpm) {
    return false;
  }
  // right_rear_wheel_rpm
  if (lhs->right_rear_wheel_rpm != rhs->right_rear_wheel_rpm) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__WheelRpm__copy(
  const morai_msgs__msg__WheelRpm * input,
  morai_msgs__msg__WheelRpm * output)
{
  if (!input || !output) {
    return false;
  }
  // left_front_wheel_rpm
  output->left_front_wheel_rpm = input->left_front_wheel_rpm;
  // left_rear_wheel_rpm
  output->left_rear_wheel_rpm = input->left_rear_wheel_rpm;
  // right_front_wheel_rpm
  output->right_front_wheel_rpm = input->right_front_wheel_rpm;
  // right_rear_wheel_rpm
  output->right_rear_wheel_rpm = input->right_rear_wheel_rpm;
  return true;
}

morai_msgs__msg__WheelRpm *
morai_msgs__msg__WheelRpm__create()
{
  morai_msgs__msg__WheelRpm * msg = (morai_msgs__msg__WheelRpm *)malloc(sizeof(morai_msgs__msg__WheelRpm));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__WheelRpm));
  bool success = morai_msgs__msg__WheelRpm__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__WheelRpm__destroy(morai_msgs__msg__WheelRpm * msg)
{
  if (msg) {
    morai_msgs__msg__WheelRpm__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__WheelRpm__Sequence__init(morai_msgs__msg__WheelRpm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__WheelRpm * data = NULL;
  if (size) {
    data = (morai_msgs__msg__WheelRpm *)calloc(size, sizeof(morai_msgs__msg__WheelRpm));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__WheelRpm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__WheelRpm__fini(&data[i - 1]);
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
morai_msgs__msg__WheelRpm__Sequence__fini(morai_msgs__msg__WheelRpm__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__WheelRpm__fini(&array->data[i]);
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

morai_msgs__msg__WheelRpm__Sequence *
morai_msgs__msg__WheelRpm__Sequence__create(size_t size)
{
  morai_msgs__msg__WheelRpm__Sequence * array = (morai_msgs__msg__WheelRpm__Sequence *)malloc(sizeof(morai_msgs__msg__WheelRpm__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__WheelRpm__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__WheelRpm__Sequence__destroy(morai_msgs__msg__WheelRpm__Sequence * array)
{
  if (array) {
    morai_msgs__msg__WheelRpm__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__WheelRpm__Sequence__are_equal(const morai_msgs__msg__WheelRpm__Sequence * lhs, const morai_msgs__msg__WheelRpm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__WheelRpm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__WheelRpm__Sequence__copy(
  const morai_msgs__msg__WheelRpm__Sequence * input,
  morai_msgs__msg__WheelRpm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__WheelRpm);
    morai_msgs__msg__WheelRpm * data =
      (morai_msgs__msg__WheelRpm *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__WheelRpm__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__WheelRpm__fini(&data[i]);
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
    if (!morai_msgs__msg__WheelRpm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
