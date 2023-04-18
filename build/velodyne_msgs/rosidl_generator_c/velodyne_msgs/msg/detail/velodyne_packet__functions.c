// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from velodyne_msgs:msg/VelodynePacket.idl
// generated code does not contain a copyright notice
#include "velodyne_msgs/msg/detail/velodyne_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
velodyne_msgs__msg__VelodynePacket__init(velodyne_msgs__msg__VelodynePacket * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    velodyne_msgs__msg__VelodynePacket__fini(msg);
    return false;
  }
  // data
  return true;
}

void
velodyne_msgs__msg__VelodynePacket__fini(velodyne_msgs__msg__VelodynePacket * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
}

bool
velodyne_msgs__msg__VelodynePacket__are_equal(const velodyne_msgs__msg__VelodynePacket * lhs, const velodyne_msgs__msg__VelodynePacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1206; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
velodyne_msgs__msg__VelodynePacket__copy(
  const velodyne_msgs__msg__VelodynePacket * input,
  velodyne_msgs__msg__VelodynePacket * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1206; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

velodyne_msgs__msg__VelodynePacket *
velodyne_msgs__msg__VelodynePacket__create()
{
  velodyne_msgs__msg__VelodynePacket * msg = (velodyne_msgs__msg__VelodynePacket *)malloc(sizeof(velodyne_msgs__msg__VelodynePacket));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(velodyne_msgs__msg__VelodynePacket));
  bool success = velodyne_msgs__msg__VelodynePacket__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
velodyne_msgs__msg__VelodynePacket__destroy(velodyne_msgs__msg__VelodynePacket * msg)
{
  if (msg) {
    velodyne_msgs__msg__VelodynePacket__fini(msg);
  }
  free(msg);
}


bool
velodyne_msgs__msg__VelodynePacket__Sequence__init(velodyne_msgs__msg__VelodynePacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  velodyne_msgs__msg__VelodynePacket * data = NULL;
  if (size) {
    data = (velodyne_msgs__msg__VelodynePacket *)calloc(size, sizeof(velodyne_msgs__msg__VelodynePacket));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = velodyne_msgs__msg__VelodynePacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        velodyne_msgs__msg__VelodynePacket__fini(&data[i - 1]);
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
velodyne_msgs__msg__VelodynePacket__Sequence__fini(velodyne_msgs__msg__VelodynePacket__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      velodyne_msgs__msg__VelodynePacket__fini(&array->data[i]);
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

velodyne_msgs__msg__VelodynePacket__Sequence *
velodyne_msgs__msg__VelodynePacket__Sequence__create(size_t size)
{
  velodyne_msgs__msg__VelodynePacket__Sequence * array = (velodyne_msgs__msg__VelodynePacket__Sequence *)malloc(sizeof(velodyne_msgs__msg__VelodynePacket__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = velodyne_msgs__msg__VelodynePacket__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
velodyne_msgs__msg__VelodynePacket__Sequence__destroy(velodyne_msgs__msg__VelodynePacket__Sequence * array)
{
  if (array) {
    velodyne_msgs__msg__VelodynePacket__Sequence__fini(array);
  }
  free(array);
}

bool
velodyne_msgs__msg__VelodynePacket__Sequence__are_equal(const velodyne_msgs__msg__VelodynePacket__Sequence * lhs, const velodyne_msgs__msg__VelodynePacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!velodyne_msgs__msg__VelodynePacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
velodyne_msgs__msg__VelodynePacket__Sequence__copy(
  const velodyne_msgs__msg__VelodynePacket__Sequence * input,
  velodyne_msgs__msg__VelodynePacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(velodyne_msgs__msg__VelodynePacket);
    velodyne_msgs__msg__VelodynePacket * data =
      (velodyne_msgs__msg__VelodynePacket *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!velodyne_msgs__msg__VelodynePacket__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          velodyne_msgs__msg__VelodynePacket__fini(&data[i]);
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
    if (!velodyne_msgs__msg__VelodynePacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
