// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/GhostMessage.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/ghost_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position`
// Member `rotation`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
morai_msgs__msg__GhostMessage__init(morai_msgs__msg__GhostMessage * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    morai_msgs__msg__GhostMessage__fini(msg);
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Vector3__init(&msg->rotation)) {
    morai_msgs__msg__GhostMessage__fini(msg);
    return false;
  }
  // velocity
  // steering_angle
  return true;
}

void
morai_msgs__msg__GhostMessage__fini(morai_msgs__msg__GhostMessage * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // rotation
  geometry_msgs__msg__Vector3__fini(&msg->rotation);
  // velocity
  // steering_angle
}

bool
morai_msgs__msg__GhostMessage__are_equal(const morai_msgs__msg__GhostMessage * lhs, const morai_msgs__msg__GhostMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__GhostMessage__copy(
  const morai_msgs__msg__GhostMessage * input,
  morai_msgs__msg__GhostMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // steering_angle
  output->steering_angle = input->steering_angle;
  return true;
}

morai_msgs__msg__GhostMessage *
morai_msgs__msg__GhostMessage__create()
{
  morai_msgs__msg__GhostMessage * msg = (morai_msgs__msg__GhostMessage *)malloc(sizeof(morai_msgs__msg__GhostMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__GhostMessage));
  bool success = morai_msgs__msg__GhostMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__GhostMessage__destroy(morai_msgs__msg__GhostMessage * msg)
{
  if (msg) {
    morai_msgs__msg__GhostMessage__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__GhostMessage__Sequence__init(morai_msgs__msg__GhostMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__GhostMessage * data = NULL;
  if (size) {
    data = (morai_msgs__msg__GhostMessage *)calloc(size, sizeof(morai_msgs__msg__GhostMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__GhostMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__GhostMessage__fini(&data[i - 1]);
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
morai_msgs__msg__GhostMessage__Sequence__fini(morai_msgs__msg__GhostMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__GhostMessage__fini(&array->data[i]);
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

morai_msgs__msg__GhostMessage__Sequence *
morai_msgs__msg__GhostMessage__Sequence__create(size_t size)
{
  morai_msgs__msg__GhostMessage__Sequence * array = (morai_msgs__msg__GhostMessage__Sequence *)malloc(sizeof(morai_msgs__msg__GhostMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__GhostMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__GhostMessage__Sequence__destroy(morai_msgs__msg__GhostMessage__Sequence * array)
{
  if (array) {
    morai_msgs__msg__GhostMessage__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__GhostMessage__Sequence__are_equal(const morai_msgs__msg__GhostMessage__Sequence * lhs, const morai_msgs__msg__GhostMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__GhostMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__GhostMessage__Sequence__copy(
  const morai_msgs__msg__GhostMessage__Sequence * input,
  morai_msgs__msg__GhostMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__GhostMessage);
    morai_msgs__msg__GhostMessage * data =
      (morai_msgs__msg__GhostMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__GhostMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__GhostMessage__fini(&data[i]);
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
    if (!morai_msgs__msg__GhostMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
