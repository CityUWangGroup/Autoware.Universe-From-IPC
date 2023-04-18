// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/path_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
tier4_planning_msgs__msg__PathPoint__init(tier4_planning_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    tier4_planning_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    tier4_planning_msgs__msg__PathPoint__fini(msg);
    return false;
  }
  // type
  return true;
}

void
tier4_planning_msgs__msg__PathPoint__fini(tier4_planning_msgs__msg__PathPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // type
}

bool
tier4_planning_msgs__msg__PathPoint__are_equal(const tier4_planning_msgs__msg__PathPoint * lhs, const tier4_planning_msgs__msg__PathPoint * rhs)
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
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__PathPoint__copy(
  const tier4_planning_msgs__msg__PathPoint * input,
  tier4_planning_msgs__msg__PathPoint * output)
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
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

tier4_planning_msgs__msg__PathPoint *
tier4_planning_msgs__msg__PathPoint__create()
{
  tier4_planning_msgs__msg__PathPoint * msg = (tier4_planning_msgs__msg__PathPoint *)malloc(sizeof(tier4_planning_msgs__msg__PathPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__PathPoint));
  bool success = tier4_planning_msgs__msg__PathPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__PathPoint__destroy(tier4_planning_msgs__msg__PathPoint * msg)
{
  if (msg) {
    tier4_planning_msgs__msg__PathPoint__fini(msg);
  }
  free(msg);
}


bool
tier4_planning_msgs__msg__PathPoint__Sequence__init(tier4_planning_msgs__msg__PathPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_planning_msgs__msg__PathPoint * data = NULL;
  if (size) {
    data = (tier4_planning_msgs__msg__PathPoint *)calloc(size, sizeof(tier4_planning_msgs__msg__PathPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__PathPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__PathPoint__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__PathPoint__Sequence__fini(tier4_planning_msgs__msg__PathPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__PathPoint__fini(&array->data[i]);
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

tier4_planning_msgs__msg__PathPoint__Sequence *
tier4_planning_msgs__msg__PathPoint__Sequence__create(size_t size)
{
  tier4_planning_msgs__msg__PathPoint__Sequence * array = (tier4_planning_msgs__msg__PathPoint__Sequence *)malloc(sizeof(tier4_planning_msgs__msg__PathPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__PathPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__PathPoint__Sequence__destroy(tier4_planning_msgs__msg__PathPoint__Sequence * array)
{
  if (array) {
    tier4_planning_msgs__msg__PathPoint__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_planning_msgs__msg__PathPoint__Sequence__are_equal(const tier4_planning_msgs__msg__PathPoint__Sequence * lhs, const tier4_planning_msgs__msg__PathPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__PathPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__PathPoint__Sequence__copy(
  const tier4_planning_msgs__msg__PathPoint__Sequence * input,
  tier4_planning_msgs__msg__PathPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__PathPoint);
    tier4_planning_msgs__msg__PathPoint * data =
      (tier4_planning_msgs__msg__PathPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__PathPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__PathPoint__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__PathPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
