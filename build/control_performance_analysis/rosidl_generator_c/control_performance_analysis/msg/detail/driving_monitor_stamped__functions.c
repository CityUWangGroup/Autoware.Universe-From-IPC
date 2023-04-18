// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `longitudinal_acceleration`
// Member `longitudinal_jerk`
// Member `lateral_acceleration`
// Member `lateral_jerk`
// Member `desired_steering_angle`
// Member `controller_processing_time`
#include "control_performance_analysis/msg/detail/float_stamped__functions.h"

bool
control_performance_analysis__msg__DrivingMonitorStamped__init(control_performance_analysis__msg__DrivingMonitorStamped * msg)
{
  if (!msg) {
    return false;
  }
  // longitudinal_acceleration
  if (!control_performance_analysis__msg__FloatStamped__init(&msg->longitudinal_acceleration)) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
    return false;
  }
  // longitudinal_jerk
  if (!control_performance_analysis__msg__FloatStamped__init(&msg->longitudinal_jerk)) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
    return false;
  }
  // lateral_acceleration
  if (!control_performance_analysis__msg__FloatStamped__init(&msg->lateral_acceleration)) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
    return false;
  }
  // lateral_jerk
  if (!control_performance_analysis__msg__FloatStamped__init(&msg->lateral_jerk)) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
    return false;
  }
  // desired_steering_angle
  if (!control_performance_analysis__msg__FloatStamped__init(&msg->desired_steering_angle)) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
    return false;
  }
  // controller_processing_time
  if (!control_performance_analysis__msg__FloatStamped__init(&msg->controller_processing_time)) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
    return false;
  }
  return true;
}

void
control_performance_analysis__msg__DrivingMonitorStamped__fini(control_performance_analysis__msg__DrivingMonitorStamped * msg)
{
  if (!msg) {
    return;
  }
  // longitudinal_acceleration
  control_performance_analysis__msg__FloatStamped__fini(&msg->longitudinal_acceleration);
  // longitudinal_jerk
  control_performance_analysis__msg__FloatStamped__fini(&msg->longitudinal_jerk);
  // lateral_acceleration
  control_performance_analysis__msg__FloatStamped__fini(&msg->lateral_acceleration);
  // lateral_jerk
  control_performance_analysis__msg__FloatStamped__fini(&msg->lateral_jerk);
  // desired_steering_angle
  control_performance_analysis__msg__FloatStamped__fini(&msg->desired_steering_angle);
  // controller_processing_time
  control_performance_analysis__msg__FloatStamped__fini(&msg->controller_processing_time);
}

bool
control_performance_analysis__msg__DrivingMonitorStamped__are_equal(const control_performance_analysis__msg__DrivingMonitorStamped * lhs, const control_performance_analysis__msg__DrivingMonitorStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // longitudinal_acceleration
  if (!control_performance_analysis__msg__FloatStamped__are_equal(
      &(lhs->longitudinal_acceleration), &(rhs->longitudinal_acceleration)))
  {
    return false;
  }
  // longitudinal_jerk
  if (!control_performance_analysis__msg__FloatStamped__are_equal(
      &(lhs->longitudinal_jerk), &(rhs->longitudinal_jerk)))
  {
    return false;
  }
  // lateral_acceleration
  if (!control_performance_analysis__msg__FloatStamped__are_equal(
      &(lhs->lateral_acceleration), &(rhs->lateral_acceleration)))
  {
    return false;
  }
  // lateral_jerk
  if (!control_performance_analysis__msg__FloatStamped__are_equal(
      &(lhs->lateral_jerk), &(rhs->lateral_jerk)))
  {
    return false;
  }
  // desired_steering_angle
  if (!control_performance_analysis__msg__FloatStamped__are_equal(
      &(lhs->desired_steering_angle), &(rhs->desired_steering_angle)))
  {
    return false;
  }
  // controller_processing_time
  if (!control_performance_analysis__msg__FloatStamped__are_equal(
      &(lhs->controller_processing_time), &(rhs->controller_processing_time)))
  {
    return false;
  }
  return true;
}

bool
control_performance_analysis__msg__DrivingMonitorStamped__copy(
  const control_performance_analysis__msg__DrivingMonitorStamped * input,
  control_performance_analysis__msg__DrivingMonitorStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // longitudinal_acceleration
  if (!control_performance_analysis__msg__FloatStamped__copy(
      &(input->longitudinal_acceleration), &(output->longitudinal_acceleration)))
  {
    return false;
  }
  // longitudinal_jerk
  if (!control_performance_analysis__msg__FloatStamped__copy(
      &(input->longitudinal_jerk), &(output->longitudinal_jerk)))
  {
    return false;
  }
  // lateral_acceleration
  if (!control_performance_analysis__msg__FloatStamped__copy(
      &(input->lateral_acceleration), &(output->lateral_acceleration)))
  {
    return false;
  }
  // lateral_jerk
  if (!control_performance_analysis__msg__FloatStamped__copy(
      &(input->lateral_jerk), &(output->lateral_jerk)))
  {
    return false;
  }
  // desired_steering_angle
  if (!control_performance_analysis__msg__FloatStamped__copy(
      &(input->desired_steering_angle), &(output->desired_steering_angle)))
  {
    return false;
  }
  // controller_processing_time
  if (!control_performance_analysis__msg__FloatStamped__copy(
      &(input->controller_processing_time), &(output->controller_processing_time)))
  {
    return false;
  }
  return true;
}

control_performance_analysis__msg__DrivingMonitorStamped *
control_performance_analysis__msg__DrivingMonitorStamped__create()
{
  control_performance_analysis__msg__DrivingMonitorStamped * msg = (control_performance_analysis__msg__DrivingMonitorStamped *)malloc(sizeof(control_performance_analysis__msg__DrivingMonitorStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_performance_analysis__msg__DrivingMonitorStamped));
  bool success = control_performance_analysis__msg__DrivingMonitorStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_performance_analysis__msg__DrivingMonitorStamped__destroy(control_performance_analysis__msg__DrivingMonitorStamped * msg)
{
  if (msg) {
    control_performance_analysis__msg__DrivingMonitorStamped__fini(msg);
  }
  free(msg);
}


bool
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__init(control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_performance_analysis__msg__DrivingMonitorStamped * data = NULL;
  if (size) {
    data = (control_performance_analysis__msg__DrivingMonitorStamped *)calloc(size, sizeof(control_performance_analysis__msg__DrivingMonitorStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_performance_analysis__msg__DrivingMonitorStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_performance_analysis__msg__DrivingMonitorStamped__fini(&data[i - 1]);
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
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__fini(control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_performance_analysis__msg__DrivingMonitorStamped__fini(&array->data[i]);
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

control_performance_analysis__msg__DrivingMonitorStamped__Sequence *
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__create(size_t size)
{
  control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array = (control_performance_analysis__msg__DrivingMonitorStamped__Sequence *)malloc(sizeof(control_performance_analysis__msg__DrivingMonitorStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_performance_analysis__msg__DrivingMonitorStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__destroy(control_performance_analysis__msg__DrivingMonitorStamped__Sequence * array)
{
  if (array) {
    control_performance_analysis__msg__DrivingMonitorStamped__Sequence__fini(array);
  }
  free(array);
}

bool
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__are_equal(const control_performance_analysis__msg__DrivingMonitorStamped__Sequence * lhs, const control_performance_analysis__msg__DrivingMonitorStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_performance_analysis__msg__DrivingMonitorStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_performance_analysis__msg__DrivingMonitorStamped__Sequence__copy(
  const control_performance_analysis__msg__DrivingMonitorStamped__Sequence * input,
  control_performance_analysis__msg__DrivingMonitorStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_performance_analysis__msg__DrivingMonitorStamped);
    control_performance_analysis__msg__DrivingMonitorStamped * data =
      (control_performance_analysis__msg__DrivingMonitorStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_performance_analysis__msg__DrivingMonitorStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          control_performance_analysis__msg__DrivingMonitorStamped__fini(&data[i]);
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
    if (!control_performance_analysis__msg__DrivingMonitorStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
