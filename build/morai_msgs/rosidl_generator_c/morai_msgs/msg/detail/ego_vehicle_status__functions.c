// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/EgoVehicleStatus.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/ego_vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `acceleration`
// Member `position`
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
morai_msgs__msg__EgoVehicleStatus__init(morai_msgs__msg__EgoVehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__EgoVehicleStatus__fini(msg);
    return false;
  }
  // unique_id
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    morai_msgs__msg__EgoVehicleStatus__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    morai_msgs__msg__EgoVehicleStatus__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    morai_msgs__msg__EgoVehicleStatus__fini(msg);
    return false;
  }
  // heading
  // accel
  // brake
  // wheel_angle
  return true;
}

void
morai_msgs__msg__EgoVehicleStatus__fini(morai_msgs__msg__EgoVehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // unique_id
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // heading
  // accel
  // brake
  // wheel_angle
}

bool
morai_msgs__msg__EgoVehicleStatus__are_equal(const morai_msgs__msg__EgoVehicleStatus * lhs, const morai_msgs__msg__EgoVehicleStatus * rhs)
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
  // unique_id
  if (lhs->unique_id != rhs->unique_id) {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // accel
  if (lhs->accel != rhs->accel) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // wheel_angle
  if (lhs->wheel_angle != rhs->wheel_angle) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__EgoVehicleStatus__copy(
  const morai_msgs__msg__EgoVehicleStatus * input,
  morai_msgs__msg__EgoVehicleStatus * output)
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
  // unique_id
  output->unique_id = input->unique_id;
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // accel
  output->accel = input->accel;
  // brake
  output->brake = input->brake;
  // wheel_angle
  output->wheel_angle = input->wheel_angle;
  return true;
}

morai_msgs__msg__EgoVehicleStatus *
morai_msgs__msg__EgoVehicleStatus__create()
{
  morai_msgs__msg__EgoVehicleStatus * msg = (morai_msgs__msg__EgoVehicleStatus *)malloc(sizeof(morai_msgs__msg__EgoVehicleStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__EgoVehicleStatus));
  bool success = morai_msgs__msg__EgoVehicleStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__EgoVehicleStatus__destroy(morai_msgs__msg__EgoVehicleStatus * msg)
{
  if (msg) {
    morai_msgs__msg__EgoVehicleStatus__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__EgoVehicleStatus__Sequence__init(morai_msgs__msg__EgoVehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__EgoVehicleStatus * data = NULL;
  if (size) {
    data = (morai_msgs__msg__EgoVehicleStatus *)calloc(size, sizeof(morai_msgs__msg__EgoVehicleStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__EgoVehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__EgoVehicleStatus__fini(&data[i - 1]);
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
morai_msgs__msg__EgoVehicleStatus__Sequence__fini(morai_msgs__msg__EgoVehicleStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__EgoVehicleStatus__fini(&array->data[i]);
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

morai_msgs__msg__EgoVehicleStatus__Sequence *
morai_msgs__msg__EgoVehicleStatus__Sequence__create(size_t size)
{
  morai_msgs__msg__EgoVehicleStatus__Sequence * array = (morai_msgs__msg__EgoVehicleStatus__Sequence *)malloc(sizeof(morai_msgs__msg__EgoVehicleStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__EgoVehicleStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__EgoVehicleStatus__Sequence__destroy(morai_msgs__msg__EgoVehicleStatus__Sequence * array)
{
  if (array) {
    morai_msgs__msg__EgoVehicleStatus__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__EgoVehicleStatus__Sequence__are_equal(const morai_msgs__msg__EgoVehicleStatus__Sequence * lhs, const morai_msgs__msg__EgoVehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__EgoVehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__EgoVehicleStatus__Sequence__copy(
  const morai_msgs__msg__EgoVehicleStatus__Sequence * input,
  morai_msgs__msg__EgoVehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__EgoVehicleStatus);
    morai_msgs__msg__EgoVehicleStatus * data =
      (morai_msgs__msg__EgoVehicleStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__EgoVehicleStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__EgoVehicleStatus__fini(&data[i]);
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
    if (!morai_msgs__msg__EgoVehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
