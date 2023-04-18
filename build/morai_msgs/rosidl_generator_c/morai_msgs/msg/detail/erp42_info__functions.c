// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/ERP42Info.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/erp42_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
morai_msgs__msg__ERP42Info__init(morai_msgs__msg__ERP42Info * msg)
{
  if (!msg) {
    return false;
  }
  // longl_cmd_type
  // position_x
  // position_y
  // position_z
  // roll
  // pitch
  // yaw
  // velocity
  // steering
  return true;
}

void
morai_msgs__msg__ERP42Info__fini(morai_msgs__msg__ERP42Info * msg)
{
  if (!msg) {
    return;
  }
  // longl_cmd_type
  // position_x
  // position_y
  // position_z
  // roll
  // pitch
  // yaw
  // velocity
  // steering
}

bool
morai_msgs__msg__ERP42Info__are_equal(const morai_msgs__msg__ERP42Info * lhs, const morai_msgs__msg__ERP42Info * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // longl_cmd_type
  if (lhs->longl_cmd_type != rhs->longl_cmd_type) {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  // position_z
  if (lhs->position_z != rhs->position_z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__ERP42Info__copy(
  const morai_msgs__msg__ERP42Info * input,
  morai_msgs__msg__ERP42Info * output)
{
  if (!input || !output) {
    return false;
  }
  // longl_cmd_type
  output->longl_cmd_type = input->longl_cmd_type;
  // position_x
  output->position_x = input->position_x;
  // position_y
  output->position_y = input->position_y;
  // position_z
  output->position_z = input->position_z;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // velocity
  output->velocity = input->velocity;
  // steering
  output->steering = input->steering;
  return true;
}

morai_msgs__msg__ERP42Info *
morai_msgs__msg__ERP42Info__create()
{
  morai_msgs__msg__ERP42Info * msg = (morai_msgs__msg__ERP42Info *)malloc(sizeof(morai_msgs__msg__ERP42Info));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__ERP42Info));
  bool success = morai_msgs__msg__ERP42Info__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__ERP42Info__destroy(morai_msgs__msg__ERP42Info * msg)
{
  if (msg) {
    morai_msgs__msg__ERP42Info__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__ERP42Info__Sequence__init(morai_msgs__msg__ERP42Info__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__ERP42Info * data = NULL;
  if (size) {
    data = (morai_msgs__msg__ERP42Info *)calloc(size, sizeof(morai_msgs__msg__ERP42Info));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__ERP42Info__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__ERP42Info__fini(&data[i - 1]);
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
morai_msgs__msg__ERP42Info__Sequence__fini(morai_msgs__msg__ERP42Info__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__ERP42Info__fini(&array->data[i]);
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

morai_msgs__msg__ERP42Info__Sequence *
morai_msgs__msg__ERP42Info__Sequence__create(size_t size)
{
  morai_msgs__msg__ERP42Info__Sequence * array = (morai_msgs__msg__ERP42Info__Sequence *)malloc(sizeof(morai_msgs__msg__ERP42Info__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__ERP42Info__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__ERP42Info__Sequence__destroy(morai_msgs__msg__ERP42Info__Sequence * array)
{
  if (array) {
    morai_msgs__msg__ERP42Info__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__ERP42Info__Sequence__are_equal(const morai_msgs__msg__ERP42Info__Sequence * lhs, const morai_msgs__msg__ERP42Info__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__ERP42Info__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__ERP42Info__Sequence__copy(
  const morai_msgs__msg__ERP42Info__Sequence * input,
  morai_msgs__msg__ERP42Info__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__ERP42Info);
    morai_msgs__msg__ERP42Info * data =
      (morai_msgs__msg__ERP42Info *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__ERP42Info__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__ERP42Info__fini(&data[i]);
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
    if (!morai_msgs__msg__ERP42Info__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
