// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice
#include "tier4_system_msgs/msg/detail/hazard_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `diagnostics_nf`
// Member `diagnostics_sf`
// Member `diagnostics_lf`
// Member `diagnostics_spf`
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

bool
tier4_system_msgs__msg__HazardStatus__init(tier4_system_msgs__msg__HazardStatus * msg)
{
  if (!msg) {
    return false;
  }
  // level
  // emergency
  // emergency_holding
  // diagnostics_nf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diagnostics_nf, 0)) {
    tier4_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diagnostics_sf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diagnostics_sf, 0)) {
    tier4_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diagnostics_lf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diagnostics_lf, 0)) {
    tier4_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diagnostics_spf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diagnostics_spf, 0)) {
    tier4_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  return true;
}

void
tier4_system_msgs__msg__HazardStatus__fini(tier4_system_msgs__msg__HazardStatus * msg)
{
  if (!msg) {
    return;
  }
  // level
  // emergency
  // emergency_holding
  // diagnostics_nf
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diagnostics_nf);
  // diagnostics_sf
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diagnostics_sf);
  // diagnostics_lf
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diagnostics_lf);
  // diagnostics_spf
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diagnostics_spf);
}

bool
tier4_system_msgs__msg__HazardStatus__are_equal(const tier4_system_msgs__msg__HazardStatus * lhs, const tier4_system_msgs__msg__HazardStatus * rhs)
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
  // diagnostics_nf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diagnostics_nf), &(rhs->diagnostics_nf)))
  {
    return false;
  }
  // diagnostics_sf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diagnostics_sf), &(rhs->diagnostics_sf)))
  {
    return false;
  }
  // diagnostics_lf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diagnostics_lf), &(rhs->diagnostics_lf)))
  {
    return false;
  }
  // diagnostics_spf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diagnostics_spf), &(rhs->diagnostics_spf)))
  {
    return false;
  }
  return true;
}

bool
tier4_system_msgs__msg__HazardStatus__copy(
  const tier4_system_msgs__msg__HazardStatus * input,
  tier4_system_msgs__msg__HazardStatus * output)
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
  // diagnostics_nf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diagnostics_nf), &(output->diagnostics_nf)))
  {
    return false;
  }
  // diagnostics_sf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diagnostics_sf), &(output->diagnostics_sf)))
  {
    return false;
  }
  // diagnostics_lf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diagnostics_lf), &(output->diagnostics_lf)))
  {
    return false;
  }
  // diagnostics_spf
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diagnostics_spf), &(output->diagnostics_spf)))
  {
    return false;
  }
  return true;
}

tier4_system_msgs__msg__HazardStatus *
tier4_system_msgs__msg__HazardStatus__create()
{
  tier4_system_msgs__msg__HazardStatus * msg = (tier4_system_msgs__msg__HazardStatus *)malloc(sizeof(tier4_system_msgs__msg__HazardStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_system_msgs__msg__HazardStatus));
  bool success = tier4_system_msgs__msg__HazardStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_system_msgs__msg__HazardStatus__destroy(tier4_system_msgs__msg__HazardStatus * msg)
{
  if (msg) {
    tier4_system_msgs__msg__HazardStatus__fini(msg);
  }
  free(msg);
}


bool
tier4_system_msgs__msg__HazardStatus__Sequence__init(tier4_system_msgs__msg__HazardStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_system_msgs__msg__HazardStatus * data = NULL;
  if (size) {
    data = (tier4_system_msgs__msg__HazardStatus *)calloc(size, sizeof(tier4_system_msgs__msg__HazardStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_system_msgs__msg__HazardStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_system_msgs__msg__HazardStatus__fini(&data[i - 1]);
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
tier4_system_msgs__msg__HazardStatus__Sequence__fini(tier4_system_msgs__msg__HazardStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_system_msgs__msg__HazardStatus__fini(&array->data[i]);
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

tier4_system_msgs__msg__HazardStatus__Sequence *
tier4_system_msgs__msg__HazardStatus__Sequence__create(size_t size)
{
  tier4_system_msgs__msg__HazardStatus__Sequence * array = (tier4_system_msgs__msg__HazardStatus__Sequence *)malloc(sizeof(tier4_system_msgs__msg__HazardStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_system_msgs__msg__HazardStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_system_msgs__msg__HazardStatus__Sequence__destroy(tier4_system_msgs__msg__HazardStatus__Sequence * array)
{
  if (array) {
    tier4_system_msgs__msg__HazardStatus__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_system_msgs__msg__HazardStatus__Sequence__are_equal(const tier4_system_msgs__msg__HazardStatus__Sequence * lhs, const tier4_system_msgs__msg__HazardStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_system_msgs__msg__HazardStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_system_msgs__msg__HazardStatus__Sequence__copy(
  const tier4_system_msgs__msg__HazardStatus__Sequence * input,
  tier4_system_msgs__msg__HazardStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_system_msgs__msg__HazardStatus);
    tier4_system_msgs__msg__HazardStatus * data =
      (tier4_system_msgs__msg__HazardStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_system_msgs__msg__HazardStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_system_msgs__msg__HazardStatus__fini(&data[i]);
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
    if (!tier4_system_msgs__msg__HazardStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
