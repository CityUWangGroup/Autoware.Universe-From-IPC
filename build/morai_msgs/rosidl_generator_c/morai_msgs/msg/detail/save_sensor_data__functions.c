// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SaveSensorData.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/save_sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `custom_file_name`
// Member `file_dir`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__SaveSensorData__init(morai_msgs__msg__SaveSensorData * msg)
{
  if (!msg) {
    return false;
  }
  // is_custom_file_name
  // custom_file_name
  if (!rosidl_runtime_c__String__init(&msg->custom_file_name)) {
    morai_msgs__msg__SaveSensorData__fini(msg);
    return false;
  }
  // file_dir
  if (!rosidl_runtime_c__String__init(&msg->file_dir)) {
    morai_msgs__msg__SaveSensorData__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__SaveSensorData__fini(morai_msgs__msg__SaveSensorData * msg)
{
  if (!msg) {
    return;
  }
  // is_custom_file_name
  // custom_file_name
  rosidl_runtime_c__String__fini(&msg->custom_file_name);
  // file_dir
  rosidl_runtime_c__String__fini(&msg->file_dir);
}

bool
morai_msgs__msg__SaveSensorData__are_equal(const morai_msgs__msg__SaveSensorData * lhs, const morai_msgs__msg__SaveSensorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_custom_file_name
  if (lhs->is_custom_file_name != rhs->is_custom_file_name) {
    return false;
  }
  // custom_file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->custom_file_name), &(rhs->custom_file_name)))
  {
    return false;
  }
  // file_dir
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_dir), &(rhs->file_dir)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SaveSensorData__copy(
  const morai_msgs__msg__SaveSensorData * input,
  morai_msgs__msg__SaveSensorData * output)
{
  if (!input || !output) {
    return false;
  }
  // is_custom_file_name
  output->is_custom_file_name = input->is_custom_file_name;
  // custom_file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->custom_file_name), &(output->custom_file_name)))
  {
    return false;
  }
  // file_dir
  if (!rosidl_runtime_c__String__copy(
      &(input->file_dir), &(output->file_dir)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__SaveSensorData *
morai_msgs__msg__SaveSensorData__create()
{
  morai_msgs__msg__SaveSensorData * msg = (morai_msgs__msg__SaveSensorData *)malloc(sizeof(morai_msgs__msg__SaveSensorData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SaveSensorData));
  bool success = morai_msgs__msg__SaveSensorData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SaveSensorData__destroy(morai_msgs__msg__SaveSensorData * msg)
{
  if (msg) {
    morai_msgs__msg__SaveSensorData__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__SaveSensorData__Sequence__init(morai_msgs__msg__SaveSensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__SaveSensorData * data = NULL;
  if (size) {
    data = (morai_msgs__msg__SaveSensorData *)calloc(size, sizeof(morai_msgs__msg__SaveSensorData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SaveSensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SaveSensorData__fini(&data[i - 1]);
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
morai_msgs__msg__SaveSensorData__Sequence__fini(morai_msgs__msg__SaveSensorData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__SaveSensorData__fini(&array->data[i]);
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

morai_msgs__msg__SaveSensorData__Sequence *
morai_msgs__msg__SaveSensorData__Sequence__create(size_t size)
{
  morai_msgs__msg__SaveSensorData__Sequence * array = (morai_msgs__msg__SaveSensorData__Sequence *)malloc(sizeof(morai_msgs__msg__SaveSensorData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SaveSensorData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SaveSensorData__Sequence__destroy(morai_msgs__msg__SaveSensorData__Sequence * array)
{
  if (array) {
    morai_msgs__msg__SaveSensorData__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__SaveSensorData__Sequence__are_equal(const morai_msgs__msg__SaveSensorData__Sequence * lhs, const morai_msgs__msg__SaveSensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SaveSensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SaveSensorData__Sequence__copy(
  const morai_msgs__msg__SaveSensorData__Sequence * input,
  morai_msgs__msg__SaveSensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SaveSensorData);
    morai_msgs__msg__SaveSensorData * data =
      (morai_msgs__msg__SaveSensorData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SaveSensorData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SaveSensorData__fini(&data[i]);
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
    if (!morai_msgs__msg__SaveSensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
