// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/hazard_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `diag_no_fault`
// Member `diag_safe_fault`
// Member `diag_latent_fault`
// Member `diag_single_point_fault`
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

bool
autoware_auto_system_msgs__msg__HazardStatus__init(autoware_auto_system_msgs__msg__HazardStatus * msg)
{
  if (!msg) {
    return false;
  }
  // level
  msg->level = 0;
  // emergency
  msg->emergency = false;
  // emergency_holding
  msg->emergency_holding = false;
  // diag_no_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_no_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diag_safe_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_safe_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diag_latent_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_latent_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diag_single_point_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_single_point_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_system_msgs__msg__HazardStatus__fini(autoware_auto_system_msgs__msg__HazardStatus * msg)
{
  if (!msg) {
    return;
  }
  // level
  // emergency
  // emergency_holding
  // diag_no_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_no_fault);
  // diag_safe_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_safe_fault);
  // diag_latent_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_latent_fault);
  // diag_single_point_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_single_point_fault);
}

bool
autoware_auto_system_msgs__msg__HazardStatus__are_equal(const autoware_auto_system_msgs__msg__HazardStatus * lhs, const autoware_auto_system_msgs__msg__HazardStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // emergency
  if (lhs->emergency != rhs->emergency) {
    return false;
  }
  // emergency_holding
  if (lhs->emergency_holding != rhs->emergency_holding) {
    return false;
  }
  // diag_no_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_no_fault), &(rhs->diag_no_fault)))
  {
    return false;
  }
  // diag_safe_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_safe_fault), &(rhs->diag_safe_fault)))
  {
    return false;
  }
  // diag_latent_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_latent_fault), &(rhs->diag_latent_fault)))
  {
    return false;
  }
  // diag_single_point_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_single_point_fault), &(rhs->diag_single_point_fault)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__HazardStatus__copy(
  const autoware_auto_system_msgs__msg__HazardStatus * input,
  autoware_auto_system_msgs__msg__HazardStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // level
  output->level = input->level;
  // emergency
  output->emergency = input->emergency;
  // emergency_holding
  output->emergency_holding = input->emergency_holding;
  // diag_no_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_no_fault), &(output->diag_no_fault)))
  {
    return false;
  }
  // diag_safe_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_safe_fault), &(output->diag_safe_fault)))
  {
    return false;
  }
  // diag_latent_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_latent_fault), &(output->diag_latent_fault)))
  {
    return false;
  }
  // diag_single_point_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_single_point_fault), &(output->diag_single_point_fault)))
  {
    return false;
  }
  return true;
}

autoware_auto_system_msgs__msg__HazardStatus *
autoware_auto_system_msgs__msg__HazardStatus__create()
{
  autoware_auto_system_msgs__msg__HazardStatus * msg = (autoware_auto_system_msgs__msg__HazardStatus *)malloc(sizeof(autoware_auto_system_msgs__msg__HazardStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_system_msgs__msg__HazardStatus));
  bool success = autoware_auto_system_msgs__msg__HazardStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_system_msgs__msg__HazardStatus__destroy(autoware_auto_system_msgs__msg__HazardStatus * msg)
{
  if (msg) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_system_msgs__msg__HazardStatus__Sequence__init(autoware_auto_system_msgs__msg__HazardStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_system_msgs__msg__HazardStatus * data = NULL;
  if (size) {
    data = (autoware_auto_system_msgs__msg__HazardStatus *)calloc(size, sizeof(autoware_auto_system_msgs__msg__HazardStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_system_msgs__msg__HazardStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_system_msgs__msg__HazardStatus__fini(&data[i - 1]);
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
autoware_auto_system_msgs__msg__HazardStatus__Sequence__fini(autoware_auto_system_msgs__msg__HazardStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_system_msgs__msg__HazardStatus__fini(&array->data[i]);
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

autoware_auto_system_msgs__msg__HazardStatus__Sequence *
autoware_auto_system_msgs__msg__HazardStatus__Sequence__create(size_t size)
{
  autoware_auto_system_msgs__msg__HazardStatus__Sequence * array = (autoware_auto_system_msgs__msg__HazardStatus__Sequence *)malloc(sizeof(autoware_auto_system_msgs__msg__HazardStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_system_msgs__msg__HazardStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_system_msgs__msg__HazardStatus__Sequence__destroy(autoware_auto_system_msgs__msg__HazardStatus__Sequence * array)
{
  if (array) {
    autoware_auto_system_msgs__msg__HazardStatus__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_system_msgs__msg__HazardStatus__Sequence__are_equal(const autoware_auto_system_msgs__msg__HazardStatus__Sequence * lhs, const autoware_auto_system_msgs__msg__HazardStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_system_msgs__msg__HazardStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__HazardStatus__Sequence__copy(
  const autoware_auto_system_msgs__msg__HazardStatus__Sequence * input,
  autoware_auto_system_msgs__msg__HazardStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_system_msgs__msg__HazardStatus);
    autoware_auto_system_msgs__msg__HazardStatus * data =
      (autoware_auto_system_msgs__msg__HazardStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_system_msgs__msg__HazardStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_system_msgs__msg__HazardStatus__fini(&data[i]);
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
    if (!autoware_auto_system_msgs__msg__HazardStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
