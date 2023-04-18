// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_system_msgs:msg/ServiceLog.idl
// generated code does not contain a copyright notice
#include "tier4_system_msgs/msg/detail/service_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `name`
// Member `node`
// Member `yaml`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_system_msgs__msg__ServiceLog__init(tier4_system_msgs__msg__ServiceLog * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_system_msgs__msg__ServiceLog__fini(msg);
    return false;
  }
  // type
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tier4_system_msgs__msg__ServiceLog__fini(msg);
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__init(&msg->node)) {
    tier4_system_msgs__msg__ServiceLog__fini(msg);
    return false;
  }
  // yaml
  if (!rosidl_runtime_c__String__init(&msg->yaml)) {
    tier4_system_msgs__msg__ServiceLog__fini(msg);
    return false;
  }
  return true;
}

void
tier4_system_msgs__msg__ServiceLog__fini(tier4_system_msgs__msg__ServiceLog * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // type
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // node
  rosidl_runtime_c__String__fini(&msg->node);
  // yaml
  rosidl_runtime_c__String__fini(&msg->yaml);
}

bool
tier4_system_msgs__msg__ServiceLog__are_equal(const tier4_system_msgs__msg__ServiceLog * lhs, const tier4_system_msgs__msg__ServiceLog * rhs)
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // yaml
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yaml), &(rhs->yaml)))
  {
    return false;
  }
  return true;
}

bool
tier4_system_msgs__msg__ServiceLog__copy(
  const tier4_system_msgs__msg__ServiceLog * input,
  tier4_system_msgs__msg__ServiceLog * output)
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
  // type
  output->type = input->type;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // yaml
  if (!rosidl_runtime_c__String__copy(
      &(input->yaml), &(output->yaml)))
  {
    return false;
  }
  return true;
}

tier4_system_msgs__msg__ServiceLog *
tier4_system_msgs__msg__ServiceLog__create()
{
  tier4_system_msgs__msg__ServiceLog * msg = (tier4_system_msgs__msg__ServiceLog *)malloc(sizeof(tier4_system_msgs__msg__ServiceLog));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_system_msgs__msg__ServiceLog));
  bool success = tier4_system_msgs__msg__ServiceLog__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_system_msgs__msg__ServiceLog__destroy(tier4_system_msgs__msg__ServiceLog * msg)
{
  if (msg) {
    tier4_system_msgs__msg__ServiceLog__fini(msg);
  }
  free(msg);
}


bool
tier4_system_msgs__msg__ServiceLog__Sequence__init(tier4_system_msgs__msg__ServiceLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_system_msgs__msg__ServiceLog * data = NULL;
  if (size) {
    data = (tier4_system_msgs__msg__ServiceLog *)calloc(size, sizeof(tier4_system_msgs__msg__ServiceLog));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_system_msgs__msg__ServiceLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_system_msgs__msg__ServiceLog__fini(&data[i - 1]);
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
tier4_system_msgs__msg__ServiceLog__Sequence__fini(tier4_system_msgs__msg__ServiceLog__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_system_msgs__msg__ServiceLog__fini(&array->data[i]);
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

tier4_system_msgs__msg__ServiceLog__Sequence *
tier4_system_msgs__msg__ServiceLog__Sequence__create(size_t size)
{
  tier4_system_msgs__msg__ServiceLog__Sequence * array = (tier4_system_msgs__msg__ServiceLog__Sequence *)malloc(sizeof(tier4_system_msgs__msg__ServiceLog__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_system_msgs__msg__ServiceLog__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_system_msgs__msg__ServiceLog__Sequence__destroy(tier4_system_msgs__msg__ServiceLog__Sequence * array)
{
  if (array) {
    tier4_system_msgs__msg__ServiceLog__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_system_msgs__msg__ServiceLog__Sequence__are_equal(const tier4_system_msgs__msg__ServiceLog__Sequence * lhs, const tier4_system_msgs__msg__ServiceLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_system_msgs__msg__ServiceLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_system_msgs__msg__ServiceLog__Sequence__copy(
  const tier4_system_msgs__msg__ServiceLog__Sequence * input,
  tier4_system_msgs__msg__ServiceLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_system_msgs__msg__ServiceLog);
    tier4_system_msgs__msg__ServiceLog * data =
      (tier4_system_msgs__msg__ServiceLog *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_system_msgs__msg__ServiceLog__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_system_msgs__msg__ServiceLog__fini(&data[i]);
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
    if (!tier4_system_msgs__msg__ServiceLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
