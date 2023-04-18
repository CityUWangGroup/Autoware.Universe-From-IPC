// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/velocity_limit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `constraints`
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__functions.h"
// Member `sender`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_planning_msgs__msg__VelocityLimit__init(tier4_planning_msgs__msg__VelocityLimit * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_planning_msgs__msg__VelocityLimit__fini(msg);
    return false;
  }
  // max_velocity
  // use_constraints
  msg->use_constraints = false;
  // constraints
  if (!tier4_planning_msgs__msg__VelocityLimitConstraints__init(&msg->constraints)) {
    tier4_planning_msgs__msg__VelocityLimit__fini(msg);
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__init(&msg->sender)) {
    tier4_planning_msgs__msg__VelocityLimit__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__VelocityLimit__fini(tier4_planning_msgs__msg__VelocityLimit * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // max_velocity
  // use_constraints
  // constraints
  tier4_planning_msgs__msg__VelocityLimitConstraints__fini(&msg->constraints);
  // sender
  rosidl_runtime_c__String__fini(&msg->sender);
}

bool
tier4_planning_msgs__msg__VelocityLimit__are_equal(const tier4_planning_msgs__msg__VelocityLimit * lhs, const tier4_planning_msgs__msg__VelocityLimit * rhs)
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
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // use_constraints
  if (lhs->use_constraints != rhs->use_constraints) {
    return false;
  }
  // constraints
  if (!tier4_planning_msgs__msg__VelocityLimitConstraints__are_equal(
      &(lhs->constraints), &(rhs->constraints)))
  {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sender), &(rhs->sender)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__VelocityLimit__copy(
  const tier4_planning_msgs__msg__VelocityLimit * input,
  tier4_planning_msgs__msg__VelocityLimit * output)
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
  // max_velocity
  output->max_velocity = input->max_velocity;
  // use_constraints
  output->use_constraints = input->use_constraints;
  // constraints
  if (!tier4_planning_msgs__msg__VelocityLimitConstraints__copy(
      &(input->constraints), &(output->constraints)))
  {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__copy(
      &(input->sender), &(output->sender)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__VelocityLimit *
tier4_planning_msgs__msg__VelocityLimit__create()
{
  tier4_planning_msgs__msg__VelocityLimit * msg = (tier4_planning_msgs__msg__VelocityLimit *)malloc(sizeof(tier4_planning_msgs__msg__VelocityLimit));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__VelocityLimit));
  bool success = tier4_planning_msgs__msg__VelocityLimit__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__VelocityLimit__destroy(tier4_planning_msgs__msg__VelocityLimit * msg)
{
  if (msg) {
    tier4_planning_msgs__msg__VelocityLimit__fini(msg);
  }
  free(msg);
}


bool
tier4_planning_msgs__msg__VelocityLimit__Sequence__init(tier4_planning_msgs__msg__VelocityLimit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_planning_msgs__msg__VelocityLimit * data = NULL;
  if (size) {
    data = (tier4_planning_msgs__msg__VelocityLimit *)calloc(size, sizeof(tier4_planning_msgs__msg__VelocityLimit));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__VelocityLimit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__VelocityLimit__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__VelocityLimit__Sequence__fini(tier4_planning_msgs__msg__VelocityLimit__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__msg__VelocityLimit__fini(&array->data[i]);
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

tier4_planning_msgs__msg__VelocityLimit__Sequence *
tier4_planning_msgs__msg__VelocityLimit__Sequence__create(size_t size)
{
  tier4_planning_msgs__msg__VelocityLimit__Sequence * array = (tier4_planning_msgs__msg__VelocityLimit__Sequence *)malloc(sizeof(tier4_planning_msgs__msg__VelocityLimit__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__VelocityLimit__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__VelocityLimit__Sequence__destroy(tier4_planning_msgs__msg__VelocityLimit__Sequence * array)
{
  if (array) {
    tier4_planning_msgs__msg__VelocityLimit__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_planning_msgs__msg__VelocityLimit__Sequence__are_equal(const tier4_planning_msgs__msg__VelocityLimit__Sequence * lhs, const tier4_planning_msgs__msg__VelocityLimit__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__VelocityLimit__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__VelocityLimit__Sequence__copy(
  const tier4_planning_msgs__msg__VelocityLimit__Sequence * input,
  tier4_planning_msgs__msg__VelocityLimit__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__VelocityLimit);
    tier4_planning_msgs__msg__VelocityLimit * data =
      (tier4_planning_msgs__msg__VelocityLimit *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__VelocityLimit__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__VelocityLimit__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__VelocityLimit__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
