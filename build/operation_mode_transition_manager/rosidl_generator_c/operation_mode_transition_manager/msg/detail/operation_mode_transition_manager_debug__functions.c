// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `previous_state`
// Member `current_state`
#include "rosidl_runtime_c/string_functions.h"

bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(msg);
    return false;
  }
  // previous_state
  if (!rosidl_runtime_c__String__init(&msg->previous_state)) {
    operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(msg);
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__init(&msg->current_state)) {
    operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(msg);
    return false;
  }
  // is_all_ok
  // engage_allowed_for_stopped_vehicle
  // trajectory_available_ok
  // lateral_deviation_ok
  // yaw_deviation_ok
  // speed_upper_deviation_ok
  // speed_lower_deviation_ok
  // stop_ok
  // large_acceleration_ok
  // large_lateral_acceleration_ok
  // large_lateral_acceleration_diff_ok
  // current_speed
  // target_control_speed
  // target_planning_speed
  // target_control_acceleration
  // lateral_acceleration
  // lateral_acceleration_deviation
  // lateral_deviation
  // yaw_deviation
  // speed_deviation
  return true;
}

void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // previous_state
  rosidl_runtime_c__String__fini(&msg->previous_state);
  // current_state
  rosidl_runtime_c__String__fini(&msg->current_state);
  // is_all_ok
  // engage_allowed_for_stopped_vehicle
  // trajectory_available_ok
  // lateral_deviation_ok
  // yaw_deviation_ok
  // speed_upper_deviation_ok
  // speed_lower_deviation_ok
  // stop_ok
  // large_acceleration_ok
  // large_lateral_acceleration_ok
  // large_lateral_acceleration_diff_ok
  // current_speed
  // target_control_speed
  // target_planning_speed
  // target_control_acceleration
  // lateral_acceleration
  // lateral_acceleration_deviation
  // lateral_deviation
  // yaw_deviation
  // speed_deviation
}

bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__are_equal(const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * lhs, const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * rhs)
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
  // previous_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->previous_state), &(rhs->previous_state)))
  {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  // is_all_ok
  if (lhs->is_all_ok != rhs->is_all_ok) {
    return false;
  }
  // engage_allowed_for_stopped_vehicle
  if (lhs->engage_allowed_for_stopped_vehicle != rhs->engage_allowed_for_stopped_vehicle) {
    return false;
  }
  // trajectory_available_ok
  if (lhs->trajectory_available_ok != rhs->trajectory_available_ok) {
    return false;
  }
  // lateral_deviation_ok
  if (lhs->lateral_deviation_ok != rhs->lateral_deviation_ok) {
    return false;
  }
  // yaw_deviation_ok
  if (lhs->yaw_deviation_ok != rhs->yaw_deviation_ok) {
    return false;
  }
  // speed_upper_deviation_ok
  if (lhs->speed_upper_deviation_ok != rhs->speed_upper_deviation_ok) {
    return false;
  }
  // speed_lower_deviation_ok
  if (lhs->speed_lower_deviation_ok != rhs->speed_lower_deviation_ok) {
    return false;
  }
  // stop_ok
  if (lhs->stop_ok != rhs->stop_ok) {
    return false;
  }
  // large_acceleration_ok
  if (lhs->large_acceleration_ok != rhs->large_acceleration_ok) {
    return false;
  }
  // large_lateral_acceleration_ok
  if (lhs->large_lateral_acceleration_ok != rhs->large_lateral_acceleration_ok) {
    return false;
  }
  // large_lateral_acceleration_diff_ok
  if (lhs->large_lateral_acceleration_diff_ok != rhs->large_lateral_acceleration_diff_ok) {
    return false;
  }
  // current_speed
  if (lhs->current_speed != rhs->current_speed) {
    return false;
  }
  // target_control_speed
  if (lhs->target_control_speed != rhs->target_control_speed) {
    return false;
  }
  // target_planning_speed
  if (lhs->target_planning_speed != rhs->target_planning_speed) {
    return false;
  }
  // target_control_acceleration
  if (lhs->target_control_acceleration != rhs->target_control_acceleration) {
    return false;
  }
  // lateral_acceleration
  if (lhs->lateral_acceleration != rhs->lateral_acceleration) {
    return false;
  }
  // lateral_acceleration_deviation
  if (lhs->lateral_acceleration_deviation != rhs->lateral_acceleration_deviation) {
    return false;
  }
  // lateral_deviation
  if (lhs->lateral_deviation != rhs->lateral_deviation) {
    return false;
  }
  // yaw_deviation
  if (lhs->yaw_deviation != rhs->yaw_deviation) {
    return false;
  }
  // speed_deviation
  if (lhs->speed_deviation != rhs->speed_deviation) {
    return false;
  }
  return true;
}

bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__copy(
  const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * input,
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * output)
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
  // previous_state
  if (!rosidl_runtime_c__String__copy(
      &(input->previous_state), &(output->previous_state)))
  {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  // is_all_ok
  output->is_all_ok = input->is_all_ok;
  // engage_allowed_for_stopped_vehicle
  output->engage_allowed_for_stopped_vehicle = input->engage_allowed_for_stopped_vehicle;
  // trajectory_available_ok
  output->trajectory_available_ok = input->trajectory_available_ok;
  // lateral_deviation_ok
  output->lateral_deviation_ok = input->lateral_deviation_ok;
  // yaw_deviation_ok
  output->yaw_deviation_ok = input->yaw_deviation_ok;
  // speed_upper_deviation_ok
  output->speed_upper_deviation_ok = input->speed_upper_deviation_ok;
  // speed_lower_deviation_ok
  output->speed_lower_deviation_ok = input->speed_lower_deviation_ok;
  // stop_ok
  output->stop_ok = input->stop_ok;
  // large_acceleration_ok
  output->large_acceleration_ok = input->large_acceleration_ok;
  // large_lateral_acceleration_ok
  output->large_lateral_acceleration_ok = input->large_lateral_acceleration_ok;
  // large_lateral_acceleration_diff_ok
  output->large_lateral_acceleration_diff_ok = input->large_lateral_acceleration_diff_ok;
  // current_speed
  output->current_speed = input->current_speed;
  // target_control_speed
  output->target_control_speed = input->target_control_speed;
  // target_planning_speed
  output->target_planning_speed = input->target_planning_speed;
  // target_control_acceleration
  output->target_control_acceleration = input->target_control_acceleration;
  // lateral_acceleration
  output->lateral_acceleration = input->lateral_acceleration;
  // lateral_acceleration_deviation
  output->lateral_acceleration_deviation = input->lateral_acceleration_deviation;
  // lateral_deviation
  output->lateral_deviation = input->lateral_deviation;
  // yaw_deviation
  output->yaw_deviation = input->yaw_deviation;
  // speed_deviation
  output->speed_deviation = input->speed_deviation;
  return true;
}

operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug *
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__create()
{
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg = (operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug *)malloc(sizeof(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug));
  bool success = operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__destroy(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg)
{
  if (msg) {
    operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(msg);
  }
  free(msg);
}


bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__init(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * data = NULL;
  if (size) {
    data = (operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug *)calloc(size, sizeof(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(&data[i - 1]);
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
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__fini(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(&array->data[i]);
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

operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence *
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__create(size_t size)
{
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array = (operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence *)malloc(sizeof(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__destroy(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array)
{
  if (array) {
    operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__fini(array);
  }
  free(array);
}

bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__are_equal(const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * lhs, const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__copy(
  const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * input,
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug);
    operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * data =
      (operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(&data[i]);
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
    if (!operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
