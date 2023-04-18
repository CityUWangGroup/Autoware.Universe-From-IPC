// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice
#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `candidate_path`
#include "tier4_planning_msgs/msg/detail/trajectory__functions.h"

bool
tier4_api_msgs__msg__ObstacleAvoidanceStatus__init(tier4_api_msgs__msg__ObstacleAvoidanceStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(msg);
    return false;
  }
  // obstacle_avoidance_ready
  // candidate_path
  if (!tier4_planning_msgs__msg__Trajectory__init(&msg->candidate_path)) {
    tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(msg);
    return false;
  }
  return true;
}

void
tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(tier4_api_msgs__msg__ObstacleAvoidanceStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // obstacle_avoidance_ready
  // candidate_path
  tier4_planning_msgs__msg__Trajectory__fini(&msg->candidate_path);
}

bool
tier4_api_msgs__msg__ObstacleAvoidanceStatus__are_equal(const tier4_api_msgs__msg__ObstacleAvoidanceStatus * lhs, const tier4_api_msgs__msg__ObstacleAvoidanceStatus * rhs)
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
  // obstacle_avoidance_ready
  if (lhs->obstacle_avoidance_ready != rhs->obstacle_avoidance_ready) {
    return false;
  }
  // candidate_path
  if (!tier4_planning_msgs__msg__Trajectory__are_equal(
      &(lhs->candidate_path), &(rhs->candidate_path)))
  {
    return false;
  }
  return true;
}

bool
tier4_api_msgs__msg__ObstacleAvoidanceStatus__copy(
  const tier4_api_msgs__msg__ObstacleAvoidanceStatus * input,
  tier4_api_msgs__msg__ObstacleAvoidanceStatus * output)
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
  // obstacle_avoidance_ready
  output->obstacle_avoidance_ready = input->obstacle_avoidance_ready;
  // candidate_path
  if (!tier4_planning_msgs__msg__Trajectory__copy(
      &(input->candidate_path), &(output->candidate_path)))
  {
    return false;
  }
  return true;
}

tier4_api_msgs__msg__ObstacleAvoidanceStatus *
tier4_api_msgs__msg__ObstacleAvoidanceStatus__create()
{
  tier4_api_msgs__msg__ObstacleAvoidanceStatus * msg = (tier4_api_msgs__msg__ObstacleAvoidanceStatus *)malloc(sizeof(tier4_api_msgs__msg__ObstacleAvoidanceStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_api_msgs__msg__ObstacleAvoidanceStatus));
  bool success = tier4_api_msgs__msg__ObstacleAvoidanceStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_api_msgs__msg__ObstacleAvoidanceStatus__destroy(tier4_api_msgs__msg__ObstacleAvoidanceStatus * msg)
{
  if (msg) {
    tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(msg);
  }
  free(msg);
}


bool
tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__init(tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_api_msgs__msg__ObstacleAvoidanceStatus * data = NULL;
  if (size) {
    data = (tier4_api_msgs__msg__ObstacleAvoidanceStatus *)calloc(size, sizeof(tier4_api_msgs__msg__ObstacleAvoidanceStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_api_msgs__msg__ObstacleAvoidanceStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(&data[i - 1]);
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
tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__fini(tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(&array->data[i]);
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

tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence *
tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__create(size_t size)
{
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * array = (tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence *)malloc(sizeof(tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__destroy(tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * array)
{
  if (array) {
    tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__are_equal(const tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * lhs, const tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_api_msgs__msg__ObstacleAvoidanceStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence__copy(
  const tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * input,
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_api_msgs__msg__ObstacleAvoidanceStatus);
    tier4_api_msgs__msg__ObstacleAvoidanceStatus * data =
      (tier4_api_msgs__msg__ObstacleAvoidanceStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_api_msgs__msg__ObstacleAvoidanceStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(&data[i]);
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
    if (!tier4_api_msgs__msg__ObstacleAvoidanceStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
