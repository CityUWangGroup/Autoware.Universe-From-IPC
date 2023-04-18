// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/VehicleCommandStamped.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/vehicle_command_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `command`
#include "tier4_external_api_msgs/msg/detail/vehicle_command__functions.h"

bool
tier4_external_api_msgs__msg__VehicleCommandStamped__init(tier4_external_api_msgs__msg__VehicleCommandStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_external_api_msgs__msg__VehicleCommandStamped__fini(msg);
    return false;
  }
  // command
  if (!tier4_external_api_msgs__msg__VehicleCommand__init(&msg->command)) {
    tier4_external_api_msgs__msg__VehicleCommandStamped__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__VehicleCommandStamped__fini(tier4_external_api_msgs__msg__VehicleCommandStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // command
  tier4_external_api_msgs__msg__VehicleCommand__fini(&msg->command);
}

bool
tier4_external_api_msgs__msg__VehicleCommandStamped__are_equal(const tier4_external_api_msgs__msg__VehicleCommandStamped * lhs, const tier4_external_api_msgs__msg__VehicleCommandStamped * rhs)
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
  // command
  if (!tier4_external_api_msgs__msg__VehicleCommand__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__VehicleCommandStamped__copy(
  const tier4_external_api_msgs__msg__VehicleCommandStamped * input,
  tier4_external_api_msgs__msg__VehicleCommandStamped * output)
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
  // command
  if (!tier4_external_api_msgs__msg__VehicleCommand__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__VehicleCommandStamped *
tier4_external_api_msgs__msg__VehicleCommandStamped__create()
{
  tier4_external_api_msgs__msg__VehicleCommandStamped * msg = (tier4_external_api_msgs__msg__VehicleCommandStamped *)malloc(sizeof(tier4_external_api_msgs__msg__VehicleCommandStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__VehicleCommandStamped));
  bool success = tier4_external_api_msgs__msg__VehicleCommandStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__VehicleCommandStamped__destroy(tier4_external_api_msgs__msg__VehicleCommandStamped * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__VehicleCommandStamped__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__init(tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__VehicleCommandStamped * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__VehicleCommandStamped *)calloc(size, sizeof(tier4_external_api_msgs__msg__VehicleCommandStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__VehicleCommandStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__VehicleCommandStamped__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__fini(tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__VehicleCommandStamped__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence *
tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * array = (tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__destroy(tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__are_equal(const tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * lhs, const tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__VehicleCommandStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence__copy(
  const tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * input,
  tier4_external_api_msgs__msg__VehicleCommandStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__VehicleCommandStamped);
    tier4_external_api_msgs__msg__VehicleCommandStamped * data =
      (tier4_external_api_msgs__msg__VehicleCommandStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__VehicleCommandStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__VehicleCommandStamped__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__VehicleCommandStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
