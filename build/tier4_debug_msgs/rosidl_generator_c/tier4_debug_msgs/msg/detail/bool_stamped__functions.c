// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_debug_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice
#include "tier4_debug_msgs/msg/detail/bool_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tier4_debug_msgs__msg__BoolStamped__init(tier4_debug_msgs__msg__BoolStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_debug_msgs__msg__BoolStamped__fini(msg);
    return false;
  }
  // data
  return true;
}

void
tier4_debug_msgs__msg__BoolStamped__fini(tier4_debug_msgs__msg__BoolStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
}

bool
tier4_debug_msgs__msg__BoolStamped__are_equal(const tier4_debug_msgs__msg__BoolStamped * lhs, const tier4_debug_msgs__msg__BoolStamped * rhs)
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
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
tier4_debug_msgs__msg__BoolStamped__copy(
  const tier4_debug_msgs__msg__BoolStamped * input,
  tier4_debug_msgs__msg__BoolStamped * output)
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
  // data
  output->data = input->data;
  return true;
}

tier4_debug_msgs__msg__BoolStamped *
tier4_debug_msgs__msg__BoolStamped__create()
{
  tier4_debug_msgs__msg__BoolStamped * msg = (tier4_debug_msgs__msg__BoolStamped *)malloc(sizeof(tier4_debug_msgs__msg__BoolStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_debug_msgs__msg__BoolStamped));
  bool success = tier4_debug_msgs__msg__BoolStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_debug_msgs__msg__BoolStamped__destroy(tier4_debug_msgs__msg__BoolStamped * msg)
{
  if (msg) {
    tier4_debug_msgs__msg__BoolStamped__fini(msg);
  }
  free(msg);
}


bool
tier4_debug_msgs__msg__BoolStamped__Sequence__init(tier4_debug_msgs__msg__BoolStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_debug_msgs__msg__BoolStamped * data = NULL;
  if (size) {
    data = (tier4_debug_msgs__msg__BoolStamped *)calloc(size, sizeof(tier4_debug_msgs__msg__BoolStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_debug_msgs__msg__BoolStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_debug_msgs__msg__BoolStamped__fini(&data[i - 1]);
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
tier4_debug_msgs__msg__BoolStamped__Sequence__fini(tier4_debug_msgs__msg__BoolStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_debug_msgs__msg__BoolStamped__fini(&array->data[i]);
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

tier4_debug_msgs__msg__BoolStamped__Sequence *
tier4_debug_msgs__msg__BoolStamped__Sequence__create(size_t size)
{
  tier4_debug_msgs__msg__BoolStamped__Sequence * array = (tier4_debug_msgs__msg__BoolStamped__Sequence *)malloc(sizeof(tier4_debug_msgs__msg__BoolStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_debug_msgs__msg__BoolStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_debug_msgs__msg__BoolStamped__Sequence__destroy(tier4_debug_msgs__msg__BoolStamped__Sequence * array)
{
  if (array) {
    tier4_debug_msgs__msg__BoolStamped__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_debug_msgs__msg__BoolStamped__Sequence__are_equal(const tier4_debug_msgs__msg__BoolStamped__Sequence * lhs, const tier4_debug_msgs__msg__BoolStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_debug_msgs__msg__BoolStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_debug_msgs__msg__BoolStamped__Sequence__copy(
  const tier4_debug_msgs__msg__BoolStamped__Sequence * input,
  tier4_debug_msgs__msg__BoolStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_debug_msgs__msg__BoolStamped);
    tier4_debug_msgs__msg__BoolStamped * data =
      (tier4_debug_msgs__msg__BoolStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_debug_msgs__msg__BoolStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_debug_msgs__msg__BoolStamped__fini(&data[i]);
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
    if (!tier4_debug_msgs__msg__BoolStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
