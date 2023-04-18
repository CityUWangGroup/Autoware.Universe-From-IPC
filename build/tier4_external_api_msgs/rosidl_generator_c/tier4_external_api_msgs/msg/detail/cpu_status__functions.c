// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/cpu_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tier4_external_api_msgs__msg__CpuStatus__init(tier4_external_api_msgs__msg__CpuStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // total
  // usr
  // nice
  // sys
  // idle
  return true;
}

void
tier4_external_api_msgs__msg__CpuStatus__fini(tier4_external_api_msgs__msg__CpuStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  // total
  // usr
  // nice
  // sys
  // idle
}

bool
tier4_external_api_msgs__msg__CpuStatus__are_equal(const tier4_external_api_msgs__msg__CpuStatus * lhs, const tier4_external_api_msgs__msg__CpuStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // total
  if (lhs->total != rhs->total) {
    return false;
  }
  // usr
  if (lhs->usr != rhs->usr) {
    return false;
  }
  // nice
  if (lhs->nice != rhs->nice) {
    return false;
  }
  // sys
  if (lhs->sys != rhs->sys) {
    return false;
  }
  // idle
  if (lhs->idle != rhs->idle) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__CpuStatus__copy(
  const tier4_external_api_msgs__msg__CpuStatus * input,
  tier4_external_api_msgs__msg__CpuStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // total
  output->total = input->total;
  // usr
  output->usr = input->usr;
  // nice
  output->nice = input->nice;
  // sys
  output->sys = input->sys;
  // idle
  output->idle = input->idle;
  return true;
}

tier4_external_api_msgs__msg__CpuStatus *
tier4_external_api_msgs__msg__CpuStatus__create()
{
  tier4_external_api_msgs__msg__CpuStatus * msg = (tier4_external_api_msgs__msg__CpuStatus *)malloc(sizeof(tier4_external_api_msgs__msg__CpuStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__CpuStatus));
  bool success = tier4_external_api_msgs__msg__CpuStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__CpuStatus__destroy(tier4_external_api_msgs__msg__CpuStatus * msg)
{
  if (msg) {
    tier4_external_api_msgs__msg__CpuStatus__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__msg__CpuStatus__Sequence__init(tier4_external_api_msgs__msg__CpuStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__msg__CpuStatus * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__msg__CpuStatus *)calloc(size, sizeof(tier4_external_api_msgs__msg__CpuStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__CpuStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__CpuStatus__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__CpuStatus__Sequence__fini(tier4_external_api_msgs__msg__CpuStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__msg__CpuStatus__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__CpuStatus__Sequence *
tier4_external_api_msgs__msg__CpuStatus__Sequence__create(size_t size)
{
  tier4_external_api_msgs__msg__CpuStatus__Sequence * array = (tier4_external_api_msgs__msg__CpuStatus__Sequence *)malloc(sizeof(tier4_external_api_msgs__msg__CpuStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__CpuStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__CpuStatus__Sequence__destroy(tier4_external_api_msgs__msg__CpuStatus__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__msg__CpuStatus__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__msg__CpuStatus__Sequence__are_equal(const tier4_external_api_msgs__msg__CpuStatus__Sequence * lhs, const tier4_external_api_msgs__msg__CpuStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__CpuStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__CpuStatus__Sequence__copy(
  const tier4_external_api_msgs__msg__CpuStatus__Sequence * input,
  tier4_external_api_msgs__msg__CpuStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__CpuStatus);
    tier4_external_api_msgs__msg__CpuStatus * data =
      (tier4_external_api_msgs__msg__CpuStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__CpuStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__CpuStatus__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__CpuStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
