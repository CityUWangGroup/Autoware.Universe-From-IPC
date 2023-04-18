// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:srv/SetDoor.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/srv/detail/set_door__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
tier4_external_api_msgs__srv__SetDoor_Request__init(tier4_external_api_msgs__srv__SetDoor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // open
  return true;
}

void
tier4_external_api_msgs__srv__SetDoor_Request__fini(tier4_external_api_msgs__srv__SetDoor_Request * msg)
{
  if (!msg) {
    return;
  }
  // open
}

bool
tier4_external_api_msgs__srv__SetDoor_Request__are_equal(const tier4_external_api_msgs__srv__SetDoor_Request * lhs, const tier4_external_api_msgs__srv__SetDoor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // open
  if (lhs->open != rhs->open) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__srv__SetDoor_Request__copy(
  const tier4_external_api_msgs__srv__SetDoor_Request * input,
  tier4_external_api_msgs__srv__SetDoor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // open
  output->open = input->open;
  return true;
}

tier4_external_api_msgs__srv__SetDoor_Request *
tier4_external_api_msgs__srv__SetDoor_Request__create()
{
  tier4_external_api_msgs__srv__SetDoor_Request * msg = (tier4_external_api_msgs__srv__SetDoor_Request *)malloc(sizeof(tier4_external_api_msgs__srv__SetDoor_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__srv__SetDoor_Request));
  bool success = tier4_external_api_msgs__srv__SetDoor_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__srv__SetDoor_Request__destroy(tier4_external_api_msgs__srv__SetDoor_Request * msg)
{
  if (msg) {
    tier4_external_api_msgs__srv__SetDoor_Request__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__srv__SetDoor_Request__Sequence__init(tier4_external_api_msgs__srv__SetDoor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__srv__SetDoor_Request * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__srv__SetDoor_Request *)calloc(size, sizeof(tier4_external_api_msgs__srv__SetDoor_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__srv__SetDoor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__srv__SetDoor_Request__fini(&data[i - 1]);
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
tier4_external_api_msgs__srv__SetDoor_Request__Sequence__fini(tier4_external_api_msgs__srv__SetDoor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__srv__SetDoor_Request__fini(&array->data[i]);
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

tier4_external_api_msgs__srv__SetDoor_Request__Sequence *
tier4_external_api_msgs__srv__SetDoor_Request__Sequence__create(size_t size)
{
  tier4_external_api_msgs__srv__SetDoor_Request__Sequence * array = (tier4_external_api_msgs__srv__SetDoor_Request__Sequence *)malloc(sizeof(tier4_external_api_msgs__srv__SetDoor_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__srv__SetDoor_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__srv__SetDoor_Request__Sequence__destroy(tier4_external_api_msgs__srv__SetDoor_Request__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__srv__SetDoor_Request__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__srv__SetDoor_Request__Sequence__are_equal(const tier4_external_api_msgs__srv__SetDoor_Request__Sequence * lhs, const tier4_external_api_msgs__srv__SetDoor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__srv__SetDoor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__srv__SetDoor_Request__Sequence__copy(
  const tier4_external_api_msgs__srv__SetDoor_Request__Sequence * input,
  tier4_external_api_msgs__srv__SetDoor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__srv__SetDoor_Request);
    tier4_external_api_msgs__srv__SetDoor_Request * data =
      (tier4_external_api_msgs__srv__SetDoor_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__srv__SetDoor_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__srv__SetDoor_Request__fini(&data[i]);
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
    if (!tier4_external_api_msgs__srv__SetDoor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "tier4_external_api_msgs/msg/detail/response_status__functions.h"

bool
tier4_external_api_msgs__srv__SetDoor_Response__init(tier4_external_api_msgs__srv__SetDoor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!tier4_external_api_msgs__msg__ResponseStatus__init(&msg->status)) {
    tier4_external_api_msgs__srv__SetDoor_Response__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__srv__SetDoor_Response__fini(tier4_external_api_msgs__srv__SetDoor_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  tier4_external_api_msgs__msg__ResponseStatus__fini(&msg->status);
}

bool
tier4_external_api_msgs__srv__SetDoor_Response__are_equal(const tier4_external_api_msgs__srv__SetDoor_Response * lhs, const tier4_external_api_msgs__srv__SetDoor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!tier4_external_api_msgs__msg__ResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__srv__SetDoor_Response__copy(
  const tier4_external_api_msgs__srv__SetDoor_Response * input,
  tier4_external_api_msgs__srv__SetDoor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!tier4_external_api_msgs__msg__ResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__srv__SetDoor_Response *
tier4_external_api_msgs__srv__SetDoor_Response__create()
{
  tier4_external_api_msgs__srv__SetDoor_Response * msg = (tier4_external_api_msgs__srv__SetDoor_Response *)malloc(sizeof(tier4_external_api_msgs__srv__SetDoor_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__srv__SetDoor_Response));
  bool success = tier4_external_api_msgs__srv__SetDoor_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__srv__SetDoor_Response__destroy(tier4_external_api_msgs__srv__SetDoor_Response * msg)
{
  if (msg) {
    tier4_external_api_msgs__srv__SetDoor_Response__fini(msg);
  }
  free(msg);
}


bool
tier4_external_api_msgs__srv__SetDoor_Response__Sequence__init(tier4_external_api_msgs__srv__SetDoor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_external_api_msgs__srv__SetDoor_Response * data = NULL;
  if (size) {
    data = (tier4_external_api_msgs__srv__SetDoor_Response *)calloc(size, sizeof(tier4_external_api_msgs__srv__SetDoor_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__srv__SetDoor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__srv__SetDoor_Response__fini(&data[i - 1]);
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
tier4_external_api_msgs__srv__SetDoor_Response__Sequence__fini(tier4_external_api_msgs__srv__SetDoor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_external_api_msgs__srv__SetDoor_Response__fini(&array->data[i]);
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

tier4_external_api_msgs__srv__SetDoor_Response__Sequence *
tier4_external_api_msgs__srv__SetDoor_Response__Sequence__create(size_t size)
{
  tier4_external_api_msgs__srv__SetDoor_Response__Sequence * array = (tier4_external_api_msgs__srv__SetDoor_Response__Sequence *)malloc(sizeof(tier4_external_api_msgs__srv__SetDoor_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__srv__SetDoor_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__srv__SetDoor_Response__Sequence__destroy(tier4_external_api_msgs__srv__SetDoor_Response__Sequence * array)
{
  if (array) {
    tier4_external_api_msgs__srv__SetDoor_Response__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_external_api_msgs__srv__SetDoor_Response__Sequence__are_equal(const tier4_external_api_msgs__srv__SetDoor_Response__Sequence * lhs, const tier4_external_api_msgs__srv__SetDoor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__srv__SetDoor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__srv__SetDoor_Response__Sequence__copy(
  const tier4_external_api_msgs__srv__SetDoor_Response__Sequence * input,
  tier4_external_api_msgs__srv__SetDoor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__srv__SetDoor_Response);
    tier4_external_api_msgs__srv__SetDoor_Response * data =
      (tier4_external_api_msgs__srv__SetDoor_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__srv__SetDoor_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__srv__SetDoor_Response__fini(&data[i]);
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
    if (!tier4_external_api_msgs__srv__SetDoor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
