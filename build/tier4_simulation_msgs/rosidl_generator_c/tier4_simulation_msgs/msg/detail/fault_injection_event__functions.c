// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
// generated code does not contain a copyright notice
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_simulation_msgs__msg__FaultInjectionEvent__init(tier4_simulation_msgs__msg__FaultInjectionEvent * msg)
{
  if (!msg) {
    return false;
  }
  // level
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tier4_simulation_msgs__msg__FaultInjectionEvent__fini(msg);
    return false;
  }
  return true;
}

void
tier4_simulation_msgs__msg__FaultInjectionEvent__fini(tier4_simulation_msgs__msg__FaultInjectionEvent * msg)
{
  if (!msg) {
    return;
  }
  // level
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
tier4_simulation_msgs__msg__FaultInjectionEvent__are_equal(const tier4_simulation_msgs__msg__FaultInjectionEvent * lhs, const tier4_simulation_msgs__msg__FaultInjectionEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
tier4_simulation_msgs__msg__FaultInjectionEvent__copy(
  const tier4_simulation_msgs__msg__FaultInjectionEvent * input,
  tier4_simulation_msgs__msg__FaultInjectionEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // level
  output->level = input->level;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

tier4_simulation_msgs__msg__FaultInjectionEvent *
tier4_simulation_msgs__msg__FaultInjectionEvent__create()
{
  tier4_simulation_msgs__msg__FaultInjectionEvent * msg = (tier4_simulation_msgs__msg__FaultInjectionEvent *)malloc(sizeof(tier4_simulation_msgs__msg__FaultInjectionEvent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_simulation_msgs__msg__FaultInjectionEvent));
  bool success = tier4_simulation_msgs__msg__FaultInjectionEvent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_simulation_msgs__msg__FaultInjectionEvent__destroy(tier4_simulation_msgs__msg__FaultInjectionEvent * msg)
{
  if (msg) {
    tier4_simulation_msgs__msg__FaultInjectionEvent__fini(msg);
  }
  free(msg);
}


bool
tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__init(tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_simulation_msgs__msg__FaultInjectionEvent * data = NULL;
  if (size) {
    data = (tier4_simulation_msgs__msg__FaultInjectionEvent *)calloc(size, sizeof(tier4_simulation_msgs__msg__FaultInjectionEvent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_simulation_msgs__msg__FaultInjectionEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_simulation_msgs__msg__FaultInjectionEvent__fini(&data[i - 1]);
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
tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__fini(tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_simulation_msgs__msg__FaultInjectionEvent__fini(&array->data[i]);
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

tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence *
tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__create(size_t size)
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * array = (tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence *)malloc(sizeof(tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__destroy(tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * array)
{
  if (array) {
    tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__are_equal(const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * lhs, const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_simulation_msgs__msg__FaultInjectionEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__copy(
  const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * input,
  tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_simulation_msgs__msg__FaultInjectionEvent);
    tier4_simulation_msgs__msg__FaultInjectionEvent * data =
      (tier4_simulation_msgs__msg__FaultInjectionEvent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_simulation_msgs__msg__FaultInjectionEvent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_simulation_msgs__msg__FaultInjectionEvent__fini(&data[i]);
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
    if (!tier4_simulation_msgs__msg__FaultInjectionEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
