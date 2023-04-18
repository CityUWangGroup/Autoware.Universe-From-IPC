// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/route_section__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `lane_ids`
// Member `continued_lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tier4_external_api_msgs__msg__RouteSection__init(tier4_external_api_msgs__msg__RouteSection * msg)
{
  if (!msg) {
    return false;
  }
  // preferred_lane_id
  // lane_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->lane_ids, 0)) {
    tier4_external_api_msgs__msg__RouteSection__fini(msg);
    return false;
  }
  // continued_lane_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->continued_lane_ids, 0)) {
    tier4_external_api_msgs__msg__RouteSection__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__RouteSection__fini(tier4_external_api_msgs__msg__RouteSection * msg)
{
  if (!msg) {
    return;
  }
  // preferred_lane_id
  // lane_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->lane_ids);
  // continued_lane_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->continued_lane_ids);
}

bool
tier4_external_api_msgs__msg__RouteSection__are_equal(const tier4_external_api_msgs__msg__RouteSection * lhs, const tier4_external_api_msgs__msg__RouteSection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // preferred_lane_id
  if (lhs->preferred_lane_id != rhs->preferred_lane_id) {
    return false;
  }
  // lane_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->lane_ids), &(rhs->lane_ids)))
  {
    return false;
  }
  // continued_lane_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->continued_lane_ids), &(rhs->continued_lane_ids)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__RouteSection__copy(
  const tier4_external_api_msgs__msg__RouteSection * input,
  tier4_external_api_msgs__msg__RouteSection * output)
{
  if (!input || !output) {
    return false;
  }
  // preferred_lane_id
  output->preferred_lane_id = input->preferred_lane_id;
  // lane_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->lane_ids), &(output->lane_ids)))
  {
    return false;
  }
  // continued_lane_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->continued_lane_ids), &(output->continued_lane_ids)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__RouteSection *
tier4_external_api_msgs__msg__RouteSection__create()
{
  tier4_external_api_msgs__msg__RouteSection * msg = (tier4_external_api_msgs__msg__RouteSection *)malloc(sizeof(tier4_external_api_msgs__msg__RouteSection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__RouteSection));
  bool success = tier4_external_api_msgs__msg__RouteSection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__RouteSection__destroy(tier4_external_api_msgs__msg__RouteSection * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__RouteSection__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__RouteSection__Sequence__init(tier4_external_api_msgs__msg__RouteSection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__RouteSection * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__RouteSection *)calloc(size, sizeof(tier4_external_api_msgs__msg__RouteSection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__RouteSection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__RouteSection__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__RouteSection__Sequence__fini(tier4_external_api_msgs__msg__RouteSection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__RouteSection__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__RouteSection__Sequence *
tier4_external_api_msgs__msg__RouteSection__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__RouteSection__Sequence * array = (tier4_external_api_msgs__msg__RouteSection__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__RouteSection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__RouteSection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__RouteSection__Sequence__destroy(tier4_external_api_msgs__msg__RouteSection__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__RouteSection__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__RouteSection__Sequence__are_equal(const tier4_external_api_msgs__msg__RouteSection__Sequence * lhs, const tier4_external_api_msgs__msg__RouteSection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__RouteSection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__RouteSection__Sequence__copy(
  const tier4_external_api_msgs__msg__RouteSection__Sequence * input,
  tier4_external_api_msgs__msg__RouteSection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__RouteSection);
    tier4_external_api_msgs__msg__RouteSection * data =
      (tier4_external_api_msgs__msg__RouteSection *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__RouteSection__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__RouteSection__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__RouteSection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
