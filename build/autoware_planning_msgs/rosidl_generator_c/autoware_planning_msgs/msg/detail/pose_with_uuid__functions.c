// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice
#include "autoware_planning_msgs/msg/detail/pose_with_uuid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
autoware_planning_msgs__msg__PoseWithUuid__init(autoware_planning_msgs__msg__PoseWithUuid * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_planning_msgs__msg__PoseWithUuid__fini(msg);
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    autoware_planning_msgs__msg__PoseWithUuid__fini(msg);
    return false;
  }
  return true;
}

void
autoware_planning_msgs__msg__PoseWithUuid__fini(autoware_planning_msgs__msg__PoseWithUuid * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
}

bool
autoware_planning_msgs__msg__PoseWithUuid__are_equal(const autoware_planning_msgs__msg__PoseWithUuid * lhs, const autoware_planning_msgs__msg__PoseWithUuid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  return true;
}

bool
autoware_planning_msgs__msg__PoseWithUuid__copy(
  const autoware_planning_msgs__msg__PoseWithUuid * input,
  autoware_planning_msgs__msg__PoseWithUuid * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  return true;
}

autoware_planning_msgs__msg__PoseWithUuid *
autoware_planning_msgs__msg__PoseWithUuid__create()
{
  autoware_planning_msgs__msg__PoseWithUuid * msg = (autoware_planning_msgs__msg__PoseWithUuid *)malloc(sizeof(autoware_planning_msgs__msg__PoseWithUuid));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_planning_msgs__msg__PoseWithUuid));
  bool success = autoware_planning_msgs__msg__PoseWithUuid__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_planning_msgs__msg__PoseWithUuid__destroy(autoware_planning_msgs__msg__PoseWithUuid * msg)
{
  if (msg) {
    autoware_planning_msgs__msg__PoseWithUuid__fini(msg);
  }
  free(msg);
}


bool
autoware_planning_msgs__msg__PoseWithUuid__Sequence__init(autoware_planning_msgs__msg__PoseWithUuid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_planning_msgs__msg__PoseWithUuid * data = NULL;
  if (size) {
    data = (autoware_planning_msgs__msg__PoseWithUuid *)calloc(size, sizeof(autoware_planning_msgs__msg__PoseWithUuid));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_planning_msgs__msg__PoseWithUuid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_planning_msgs__msg__PoseWithUuid__fini(&data[i - 1]);
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
autoware_planning_msgs__msg__PoseWithUuid__Sequence__fini(autoware_planning_msgs__msg__PoseWithUuid__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_planning_msgs__msg__PoseWithUuid__fini(&array->data[i]);
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

autoware_planning_msgs__msg__PoseWithUuid__Sequence *
autoware_planning_msgs__msg__PoseWithUuid__Sequence__create(size_t size)
{
  autoware_planning_msgs__msg__PoseWithUuid__Sequence * array = (autoware_planning_msgs__msg__PoseWithUuid__Sequence *)malloc(sizeof(autoware_planning_msgs__msg__PoseWithUuid__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_planning_msgs__msg__PoseWithUuid__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_planning_msgs__msg__PoseWithUuid__Sequence__destroy(autoware_planning_msgs__msg__PoseWithUuid__Sequence * array)
{
  if (array) {
    autoware_planning_msgs__msg__PoseWithUuid__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_planning_msgs__msg__PoseWithUuid__Sequence__are_equal(const autoware_planning_msgs__msg__PoseWithUuid__Sequence * lhs, const autoware_planning_msgs__msg__PoseWithUuid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_planning_msgs__msg__PoseWithUuid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_planning_msgs__msg__PoseWithUuid__Sequence__copy(
  const autoware_planning_msgs__msg__PoseWithUuid__Sequence * input,
  autoware_planning_msgs__msg__PoseWithUuid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_planning_msgs__msg__PoseWithUuid);
    autoware_planning_msgs__msg__PoseWithUuid * data =
      (autoware_planning_msgs__msg__PoseWithUuid *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_planning_msgs__msg__PoseWithUuid__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_planning_msgs__msg__PoseWithUuid__fini(&data[i]);
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
    if (!autoware_planning_msgs__msg__PoseWithUuid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
