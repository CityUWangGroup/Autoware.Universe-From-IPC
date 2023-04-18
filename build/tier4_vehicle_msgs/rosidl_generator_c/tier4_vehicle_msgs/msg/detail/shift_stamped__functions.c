// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_vehicle_msgs:msg/ShiftStamped.idl
// generated code does not contain a copyright notice
#include "tier4_vehicle_msgs/msg/detail/shift_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `shift`
#include "tier4_vehicle_msgs/msg/detail/shift__functions.h"

bool
tier4_vehicle_msgs__msg__ShiftStamped__init(tier4_vehicle_msgs__msg__ShiftStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_vehicle_msgs__msg__ShiftStamped__fini(msg);
    return false;
  }
  // shift
  if (!tier4_vehicle_msgs__msg__Shift__init(&msg->shift)) {
    tier4_vehicle_msgs__msg__ShiftStamped__fini(msg);
    return false;
  }
  return true;
}

void
tier4_vehicle_msgs__msg__ShiftStamped__fini(tier4_vehicle_msgs__msg__ShiftStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // shift
  tier4_vehicle_msgs__msg__Shift__fini(&msg->shift);
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__are_equal(const tier4_vehicle_msgs__msg__ShiftStamped * lhs, const tier4_vehicle_msgs__msg__ShiftStamped * rhs)
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
  // shift
  if (!tier4_vehicle_msgs__msg__Shift__are_equal(
      &(lhs->shift), &(rhs->shift)))
  {
    return false;
  }
  return true;
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__copy(
  const tier4_vehicle_msgs__msg__ShiftStamped * input,
  tier4_vehicle_msgs__msg__ShiftStamped * output)
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
  // shift
  if (!tier4_vehicle_msgs__msg__Shift__copy(
      &(input->shift), &(output->shift)))
  {
    return false;
  }
  return true;
}

tier4_vehicle_msgs__msg__ShiftStamped *
tier4_vehicle_msgs__msg__ShiftStamped__create()
{
  tier4_vehicle_msgs__msg__ShiftStamped * msg = (tier4_vehicle_msgs__msg__ShiftStamped *)malloc(sizeof(tier4_vehicle_msgs__msg__ShiftStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_vehicle_msgs__msg__ShiftStamped));
  bool success = tier4_vehicle_msgs__msg__ShiftStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_vehicle_msgs__msg__ShiftStamped__destroy(tier4_vehicle_msgs__msg__ShiftStamped * msg)
{
  if (msg) {
    tier4_vehicle_msgs__msg__ShiftStamped__fini(msg);
  }
  free(msg);
}


bool
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__init(tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_vehicle_msgs__msg__ShiftStamped * data = NULL;
  if (size) {
    data = (tier4_vehicle_msgs__msg__ShiftStamped *)calloc(size, sizeof(tier4_vehicle_msgs__msg__ShiftStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_vehicle_msgs__msg__ShiftStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_vehicle_msgs__msg__ShiftStamped__fini(&data[i - 1]);
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
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__fini(tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_vehicle_msgs__msg__ShiftStamped__fini(&array->data[i]);
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

tier4_vehicle_msgs__msg__ShiftStamped__Sequence *
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__create(size_t size)
{
  tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array = (tier4_vehicle_msgs__msg__ShiftStamped__Sequence *)malloc(sizeof(tier4_vehicle_msgs__msg__ShiftStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_vehicle_msgs__msg__ShiftStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__destroy(tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array)
{
  if (array) {
    tier4_vehicle_msgs__msg__ShiftStamped__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__are_equal(const tier4_vehicle_msgs__msg__ShiftStamped__Sequence * lhs, const tier4_vehicle_msgs__msg__ShiftStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_vehicle_msgs__msg__ShiftStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__copy(
  const tier4_vehicle_msgs__msg__ShiftStamped__Sequence * input,
  tier4_vehicle_msgs__msg__ShiftStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_vehicle_msgs__msg__ShiftStamped);
    tier4_vehicle_msgs__msg__ShiftStamped * data =
      (tier4_vehicle_msgs__msg__ShiftStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_vehicle_msgs__msg__ShiftStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_vehicle_msgs__msg__ShiftStamped__fini(&data[i]);
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
    if (!tier4_vehicle_msgs__msg__ShiftStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
