// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `module`
#include "tier4_rtc_msgs/msg/detail/module__functions.h"

bool
tier4_rtc_msgs__msg__CooperateResponse__init(tier4_rtc_msgs__msg__CooperateResponse * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    tier4_rtc_msgs__msg__CooperateResponse__fini(msg);
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__init(&msg->module)) {
    tier4_rtc_msgs__msg__CooperateResponse__fini(msg);
    return false;
  }
  // success
  return true;
}

void
tier4_rtc_msgs__msg__CooperateResponse__fini(tier4_rtc_msgs__msg__CooperateResponse * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // module
  tier4_rtc_msgs__msg__Module__fini(&msg->module);
  // success
}

bool
tier4_rtc_msgs__msg__CooperateResponse__are_equal(const tier4_rtc_msgs__msg__CooperateResponse * lhs, const tier4_rtc_msgs__msg__CooperateResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__are_equal(
      &(lhs->module), &(rhs->module)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
tier4_rtc_msgs__msg__CooperateResponse__copy(
  const tier4_rtc_msgs__msg__CooperateResponse * input,
  tier4_rtc_msgs__msg__CooperateResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__copy(
      &(input->module), &(output->module)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

tier4_rtc_msgs__msg__CooperateResponse *
tier4_rtc_msgs__msg__CooperateResponse__create()
{
  tier4_rtc_msgs__msg__CooperateResponse * msg = (tier4_rtc_msgs__msg__CooperateResponse *)malloc(sizeof(tier4_rtc_msgs__msg__CooperateResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_rtc_msgs__msg__CooperateResponse));
  bool success = tier4_rtc_msgs__msg__CooperateResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_rtc_msgs__msg__CooperateResponse__destroy(tier4_rtc_msgs__msg__CooperateResponse * msg)
{
  if (msg) {
    tier4_rtc_msgs__msg__CooperateResponse__fini(msg);
  }
  free(msg);
}


bool
tier4_rtc_msgs__msg__CooperateResponse__Sequence__init(tier4_rtc_msgs__msg__CooperateResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_rtc_msgs__msg__CooperateResponse * data = NULL;
  if (size) {
    data = (tier4_rtc_msgs__msg__CooperateResponse *)calloc(size, sizeof(tier4_rtc_msgs__msg__CooperateResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_rtc_msgs__msg__CooperateResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_rtc_msgs__msg__CooperateResponse__fini(&data[i - 1]);
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
tier4_rtc_msgs__msg__CooperateResponse__Sequence__fini(tier4_rtc_msgs__msg__CooperateResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_rtc_msgs__msg__CooperateResponse__fini(&array->data[i]);
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

tier4_rtc_msgs__msg__CooperateResponse__Sequence *
tier4_rtc_msgs__msg__CooperateResponse__Sequence__create(size_t size)
{
  tier4_rtc_msgs__msg__CooperateResponse__Sequence * array = (tier4_rtc_msgs__msg__CooperateResponse__Sequence *)malloc(sizeof(tier4_rtc_msgs__msg__CooperateResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_rtc_msgs__msg__CooperateResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_rtc_msgs__msg__CooperateResponse__Sequence__destroy(tier4_rtc_msgs__msg__CooperateResponse__Sequence * array)
{
  if (array) {
    tier4_rtc_msgs__msg__CooperateResponse__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_rtc_msgs__msg__CooperateResponse__Sequence__are_equal(const tier4_rtc_msgs__msg__CooperateResponse__Sequence * lhs, const tier4_rtc_msgs__msg__CooperateResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_rtc_msgs__msg__CooperateResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_rtc_msgs__msg__CooperateResponse__Sequence__copy(
  const tier4_rtc_msgs__msg__CooperateResponse__Sequence * input,
  tier4_rtc_msgs__msg__CooperateResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_rtc_msgs__msg__CooperateResponse);
    tier4_rtc_msgs__msg__CooperateResponse * data =
      (tier4_rtc_msgs__msg__CooperateResponse *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_rtc_msgs__msg__CooperateResponse__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_rtc_msgs__msg__CooperateResponse__fini(&data[i]);
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
    if (!tier4_rtc_msgs__msg__CooperateResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
