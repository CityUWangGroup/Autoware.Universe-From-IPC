// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_debug_msgs:msg/Float32MultiArrayStamped.idl
// generated code does not contain a copyright notice
#include "tier4_debug_msgs/msg/detail/float32_multi_array_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `layout`
#include "tier4_debug_msgs/msg/detail/multi_array_layout__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tier4_debug_msgs__msg__Float32MultiArrayStamped__init(tier4_debug_msgs__msg__Float32MultiArrayStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(msg);
    return false;
  }
  // layout
  if (!tier4_debug_msgs__msg__MultiArrayLayout__init(&msg->layout)) {
    tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(msg);
    return false;
  }
  return true;
}

void
tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(tier4_debug_msgs__msg__Float32MultiArrayStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // layout
  tier4_debug_msgs__msg__MultiArrayLayout__fini(&msg->layout);
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

bool
tier4_debug_msgs__msg__Float32MultiArrayStamped__are_equal(const tier4_debug_msgs__msg__Float32MultiArrayStamped * lhs, const tier4_debug_msgs__msg__Float32MultiArrayStamped * rhs)
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
  // layout
  if (!tier4_debug_msgs__msg__MultiArrayLayout__are_equal(
      &(lhs->layout), &(rhs->layout)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
tier4_debug_msgs__msg__Float32MultiArrayStamped__copy(
  const tier4_debug_msgs__msg__Float32MultiArrayStamped * input,
  tier4_debug_msgs__msg__Float32MultiArrayStamped * output)
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
  // layout
  if (!tier4_debug_msgs__msg__MultiArrayLayout__copy(
      &(input->layout), &(output->layout)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

tier4_debug_msgs__msg__Float32MultiArrayStamped *
tier4_debug_msgs__msg__Float32MultiArrayStamped__create()
{
  tier4_debug_msgs__msg__Float32MultiArrayStamped * msg = (tier4_debug_msgs__msg__Float32MultiArrayStamped *)malloc(sizeof(tier4_debug_msgs__msg__Float32MultiArrayStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_debug_msgs__msg__Float32MultiArrayStamped));
  bool success = tier4_debug_msgs__msg__Float32MultiArrayStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_debug_msgs__msg__Float32MultiArrayStamped__destroy(tier4_debug_msgs__msg__Float32MultiArrayStamped * msg)
{
  if (msg) {
    tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(msg);
  }
  free(msg);
}


bool
tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__init(tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_debug_msgs__msg__Float32MultiArrayStamped * data = NULL;
  if (size) {
    data = (tier4_debug_msgs__msg__Float32MultiArrayStamped *)calloc(size, sizeof(tier4_debug_msgs__msg__Float32MultiArrayStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_debug_msgs__msg__Float32MultiArrayStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(&data[i - 1]);
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
tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__fini(tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(&array->data[i]);
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

tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence *
tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__create(size_t size)
{
  tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * array = (tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence *)malloc(sizeof(tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__destroy(tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * array)
{
  if (array) {
    tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__are_equal(const tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * lhs, const tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_debug_msgs__msg__Float32MultiArrayStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence__copy(
  const tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * input,
  tier4_debug_msgs__msg__Float32MultiArrayStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_debug_msgs__msg__Float32MultiArrayStamped);
    tier4_debug_msgs__msg__Float32MultiArrayStamped * data =
      (tier4_debug_msgs__msg__Float32MultiArrayStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_debug_msgs__msg__Float32MultiArrayStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_debug_msgs__msg__Float32MultiArrayStamped__fini(&data[i]);
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
    if (!tier4_debug_msgs__msg__Float32MultiArrayStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
