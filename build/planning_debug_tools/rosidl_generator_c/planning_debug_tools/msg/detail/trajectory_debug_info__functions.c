// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice
#include "planning_debug_tools/msg/detail/trajectory_debug_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `arclength`
// Member `curvature`
// Member `velocity`
// Member `acceleration`
// Member `yaw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
planning_debug_tools__msg__TrajectoryDebugInfo__init(planning_debug_tools__msg__TrajectoryDebugInfo * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
    return false;
  }
  // size
  // arclength
  if (!rosidl_runtime_c__double__Sequence__init(&msg->arclength, 0)) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
    return false;
  }
  // curvature
  if (!rosidl_runtime_c__double__Sequence__init(&msg->curvature, 0)) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration, 0)) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
    return false;
  }
  // yaw
  if (!rosidl_runtime_c__double__Sequence__init(&msg->yaw, 0)) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
    return false;
  }
  return true;
}

void
planning_debug_tools__msg__TrajectoryDebugInfo__fini(planning_debug_tools__msg__TrajectoryDebugInfo * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // size
  // arclength
  rosidl_runtime_c__double__Sequence__fini(&msg->arclength);
  // curvature
  rosidl_runtime_c__double__Sequence__fini(&msg->curvature);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration);
  // yaw
  rosidl_runtime_c__double__Sequence__fini(&msg->yaw);
}

bool
planning_debug_tools__msg__TrajectoryDebugInfo__are_equal(const planning_debug_tools__msg__TrajectoryDebugInfo * lhs, const planning_debug_tools__msg__TrajectoryDebugInfo * rhs)
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
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // arclength
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->arclength), &(rhs->arclength)))
  {
    return false;
  }
  // curvature
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->curvature), &(rhs->curvature)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // yaw
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->yaw), &(rhs->yaw)))
  {
    return false;
  }
  return true;
}

bool
planning_debug_tools__msg__TrajectoryDebugInfo__copy(
  const planning_debug_tools__msg__TrajectoryDebugInfo * input,
  planning_debug_tools__msg__TrajectoryDebugInfo * output)
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
  // size
  output->size = input->size;
  // arclength
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->arclength), &(output->arclength)))
  {
    return false;
  }
  // curvature
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->curvature), &(output->curvature)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // yaw
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->yaw), &(output->yaw)))
  {
    return false;
  }
  return true;
}

planning_debug_tools__msg__TrajectoryDebugInfo *
planning_debug_tools__msg__TrajectoryDebugInfo__create()
{
  planning_debug_tools__msg__TrajectoryDebugInfo * msg = (planning_debug_tools__msg__TrajectoryDebugInfo *)malloc(sizeof(planning_debug_tools__msg__TrajectoryDebugInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_debug_tools__msg__TrajectoryDebugInfo));
  bool success = planning_debug_tools__msg__TrajectoryDebugInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_debug_tools__msg__TrajectoryDebugInfo__destroy(planning_debug_tools__msg__TrajectoryDebugInfo * msg)
{
  if (msg) {
    planning_debug_tools__msg__TrajectoryDebugInfo__fini(msg);
  }
  free(msg);
}


bool
planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__init(planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_debug_tools__msg__TrajectoryDebugInfo * data = NULL;
  if (size) {
    data = (planning_debug_tools__msg__TrajectoryDebugInfo *)calloc(size, sizeof(planning_debug_tools__msg__TrajectoryDebugInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_debug_tools__msg__TrajectoryDebugInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_debug_tools__msg__TrajectoryDebugInfo__fini(&data[i - 1]);
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
planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__fini(planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_debug_tools__msg__TrajectoryDebugInfo__fini(&array->data[i]);
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

planning_debug_tools__msg__TrajectoryDebugInfo__Sequence *
planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__create(size_t size)
{
  planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * array = (planning_debug_tools__msg__TrajectoryDebugInfo__Sequence *)malloc(sizeof(planning_debug_tools__msg__TrajectoryDebugInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__destroy(planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * array)
{
  if (array) {
    planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__fini(array);
  }
  free(array);
}

bool
planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__are_equal(const planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * lhs, const planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_debug_tools__msg__TrajectoryDebugInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_debug_tools__msg__TrajectoryDebugInfo__Sequence__copy(
  const planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * input,
  planning_debug_tools__msg__TrajectoryDebugInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_debug_tools__msg__TrajectoryDebugInfo);
    planning_debug_tools__msg__TrajectoryDebugInfo * data =
      (planning_debug_tools__msg__TrajectoryDebugInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_debug_tools__msg__TrajectoryDebugInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          planning_debug_tools__msg__TrajectoryDebugInfo__fini(&data[i]);
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
    if (!planning_debug_tools__msg__TrajectoryDebugInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
