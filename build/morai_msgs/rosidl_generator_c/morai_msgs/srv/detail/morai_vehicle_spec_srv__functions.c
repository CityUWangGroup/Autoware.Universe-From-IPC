// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:srv/MoraiVehicleSpecSrv.idl
// generated code does not contain a copyright notice
#include "morai_msgs/srv/detail/morai_vehicle_spec_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `request`
#include "morai_msgs/msg/detail/vehicle_spec_index__functions.h"

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Request__init(morai_msgs__srv__MoraiVehicleSpecSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!morai_msgs__msg__VehicleSpecIndex__init(&msg->request)) {
    morai_msgs__srv__MoraiVehicleSpecSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__srv__MoraiVehicleSpecSrv_Request__fini(morai_msgs__srv__MoraiVehicleSpecSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  morai_msgs__msg__VehicleSpecIndex__fini(&msg->request);
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Request__are_equal(const morai_msgs__srv__MoraiVehicleSpecSrv_Request * lhs, const morai_msgs__srv__MoraiVehicleSpecSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!morai_msgs__msg__VehicleSpecIndex__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Request__copy(
  const morai_msgs__srv__MoraiVehicleSpecSrv_Request * input,
  morai_msgs__srv__MoraiVehicleSpecSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!morai_msgs__msg__VehicleSpecIndex__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

morai_msgs__srv__MoraiVehicleSpecSrv_Request *
morai_msgs__srv__MoraiVehicleSpecSrv_Request__create()
{
  morai_msgs__srv__MoraiVehicleSpecSrv_Request * msg = (morai_msgs__srv__MoraiVehicleSpecSrv_Request *)malloc(sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Request));
  bool success = morai_msgs__srv__MoraiVehicleSpecSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__srv__MoraiVehicleSpecSrv_Request__destroy(morai_msgs__srv__MoraiVehicleSpecSrv_Request * msg)
{
  if (msg) {
    morai_msgs__srv__MoraiVehicleSpecSrv_Request__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__init(morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__srv__MoraiVehicleSpecSrv_Request * data = NULL;
  if (size) {
    data = (morai_msgs__srv__MoraiVehicleSpecSrv_Request *)calloc(size, sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__srv__MoraiVehicleSpecSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__srv__MoraiVehicleSpecSrv_Request__fini(&data[i - 1]);
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
morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__fini(morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__srv__MoraiVehicleSpecSrv_Request__fini(&array->data[i]);
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

morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence *
morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__create(size_t size)
{
  morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * array = (morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence *)malloc(sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__destroy(morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * array)
{
  if (array) {
    morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__are_equal(const morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * lhs, const morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__srv__MoraiVehicleSpecSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence__copy(
  const morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * input,
  morai_msgs__srv__MoraiVehicleSpecSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Request);
    morai_msgs__srv__MoraiVehicleSpecSrv_Request * data =
      (morai_msgs__srv__MoraiVehicleSpecSrv_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__srv__MoraiVehicleSpecSrv_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__srv__MoraiVehicleSpecSrv_Request__fini(&data[i]);
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
    if (!morai_msgs__srv__MoraiVehicleSpecSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "morai_msgs/msg/detail/vehicle_spec__functions.h"

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Response__init(morai_msgs__srv__MoraiVehicleSpecSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!morai_msgs__msg__VehicleSpec__init(&msg->response)) {
    morai_msgs__srv__MoraiVehicleSpecSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__srv__MoraiVehicleSpecSrv_Response__fini(morai_msgs__srv__MoraiVehicleSpecSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  morai_msgs__msg__VehicleSpec__fini(&msg->response);
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Response__are_equal(const morai_msgs__srv__MoraiVehicleSpecSrv_Response * lhs, const morai_msgs__srv__MoraiVehicleSpecSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!morai_msgs__msg__VehicleSpec__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Response__copy(
  const morai_msgs__srv__MoraiVehicleSpecSrv_Response * input,
  morai_msgs__srv__MoraiVehicleSpecSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!morai_msgs__msg__VehicleSpec__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

morai_msgs__srv__MoraiVehicleSpecSrv_Response *
morai_msgs__srv__MoraiVehicleSpecSrv_Response__create()
{
  morai_msgs__srv__MoraiVehicleSpecSrv_Response * msg = (morai_msgs__srv__MoraiVehicleSpecSrv_Response *)malloc(sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Response));
  bool success = morai_msgs__srv__MoraiVehicleSpecSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__srv__MoraiVehicleSpecSrv_Response__destroy(morai_msgs__srv__MoraiVehicleSpecSrv_Response * msg)
{
  if (msg) {
    morai_msgs__srv__MoraiVehicleSpecSrv_Response__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__init(morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__srv__MoraiVehicleSpecSrv_Response * data = NULL;
  if (size) {
    data = (morai_msgs__srv__MoraiVehicleSpecSrv_Response *)calloc(size, sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__srv__MoraiVehicleSpecSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__srv__MoraiVehicleSpecSrv_Response__fini(&data[i - 1]);
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
morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__fini(morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__srv__MoraiVehicleSpecSrv_Response__fini(&array->data[i]);
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

morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence *
morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__create(size_t size)
{
  morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * array = (morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence *)malloc(sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__destroy(morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * array)
{
  if (array) {
    morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__are_equal(const morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * lhs, const morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__srv__MoraiVehicleSpecSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence__copy(
  const morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * input,
  morai_msgs__srv__MoraiVehicleSpecSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__srv__MoraiVehicleSpecSrv_Response);
    morai_msgs__srv__MoraiVehicleSpecSrv_Response * data =
      (morai_msgs__srv__MoraiVehicleSpecSrv_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__srv__MoraiVehicleSpecSrv_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__srv__MoraiVehicleSpecSrv_Response__fini(&data[i]);
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
    if (!morai_msgs__srv__MoraiVehicleSpecSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
