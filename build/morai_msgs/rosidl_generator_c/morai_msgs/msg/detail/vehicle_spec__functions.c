// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/vehicle_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
morai_msgs__msg__VehicleSpec__init(morai_msgs__msg__VehicleSpec * msg)
{
  if (!msg) {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    morai_msgs__msg__VehicleSpec__fini(msg);
    return false;
  }
  // wheel_base
  // max_steering
  // overhang
  // rear_overhang
  return true;
}

void
morai_msgs__msg__VehicleSpec__fini(morai_msgs__msg__VehicleSpec * msg)
{
  if (!msg) {
    return;
  }
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // wheel_base
  // max_steering
  // overhang
  // rear_overhang
}

bool
morai_msgs__msg__VehicleSpec__are_equal(const morai_msgs__msg__VehicleSpec * lhs, const morai_msgs__msg__VehicleSpec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // wheel_base
  if (lhs->wheel_base != rhs->wheel_base) {
    return false;
  }
  // max_steering
  if (lhs->max_steering != rhs->max_steering) {
    return false;
  }
  // overhang
  if (lhs->overhang != rhs->overhang) {
    return false;
  }
  // rear_overhang
  if (lhs->rear_overhang != rhs->rear_overhang) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__VehicleSpec__copy(
  const morai_msgs__msg__VehicleSpec * input,
  morai_msgs__msg__VehicleSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // wheel_base
  output->wheel_base = input->wheel_base;
  // max_steering
  output->max_steering = input->max_steering;
  // overhang
  output->overhang = input->overhang;
  // rear_overhang
  output->rear_overhang = input->rear_overhang;
  return true;
}

morai_msgs__msg__VehicleSpec *
morai_msgs__msg__VehicleSpec__create()
{
  morai_msgs__msg__VehicleSpec * msg = (morai_msgs__msg__VehicleSpec *)malloc(sizeof(morai_msgs__msg__VehicleSpec));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__VehicleSpec));
  bool success = morai_msgs__msg__VehicleSpec__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__VehicleSpec__destroy(morai_msgs__msg__VehicleSpec * msg)
{
  if (msg) {
    morai_msgs__msg__VehicleSpec__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__VehicleSpec__Sequence__init(morai_msgs__msg__VehicleSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__VehicleSpec * data = NULL;
  if (size) {
    data = (morai_msgs__msg__VehicleSpec *)calloc(size, sizeof(morai_msgs__msg__VehicleSpec));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__VehicleSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__VehicleSpec__fini(&data[i - 1]);
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
morai_msgs__msg__VehicleSpec__Sequence__fini(morai_msgs__msg__VehicleSpec__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__VehicleSpec__fini(&array->data[i]);
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

morai_msgs__msg__VehicleSpec__Sequence *
morai_msgs__msg__VehicleSpec__Sequence__create(size_t size)
{
  morai_msgs__msg__VehicleSpec__Sequence * array = (morai_msgs__msg__VehicleSpec__Sequence *)malloc(sizeof(morai_msgs__msg__VehicleSpec__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__VehicleSpec__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__VehicleSpec__Sequence__destroy(morai_msgs__msg__VehicleSpec__Sequence * array)
{
  if (array) {
    morai_msgs__msg__VehicleSpec__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__VehicleSpec__Sequence__are_equal(const morai_msgs__msg__VehicleSpec__Sequence * lhs, const morai_msgs__msg__VehicleSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__VehicleSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__VehicleSpec__Sequence__copy(
  const morai_msgs__msg__VehicleSpec__Sequence * input,
  morai_msgs__msg__VehicleSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__VehicleSpec);
    morai_msgs__msg__VehicleSpec * data =
      (morai_msgs__msg__VehicleSpec *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__VehicleSpec__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__VehicleSpec__fini(&data[i]);
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
    if (!morai_msgs__msg__VehicleSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
