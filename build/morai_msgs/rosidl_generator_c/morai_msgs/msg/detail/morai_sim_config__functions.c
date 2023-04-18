// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/morai_sim_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sensor_config_file_name`
// Member `publisher_list`
// Member `subscriber_list`
// Member `service_list`
// Member `camera_list`
// Member `gps_list`
// Member `imu_list`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__MoraiSimConfig__init(morai_msgs__msg__MoraiSimConfig * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_config_file_name
  if (!rosidl_runtime_c__String__init(&msg->sensor_config_file_name)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  // publisher_list
  if (!rosidl_runtime_c__String__init(&msg->publisher_list)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  // subscriber_list
  if (!rosidl_runtime_c__String__init(&msg->subscriber_list)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  // service_list
  if (!rosidl_runtime_c__String__init(&msg->service_list)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  // camera_list
  if (!rosidl_runtime_c__String__init(&msg->camera_list)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  // gps_list
  if (!rosidl_runtime_c__String__init(&msg->gps_list)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  // imu_list
  if (!rosidl_runtime_c__String__init(&msg->imu_list)) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__MoraiSimConfig__fini(morai_msgs__msg__MoraiSimConfig * msg)
{
  if (!msg) {
    return;
  }
  // sensor_config_file_name
  rosidl_runtime_c__String__fini(&msg->sensor_config_file_name);
  // publisher_list
  rosidl_runtime_c__String__fini(&msg->publisher_list);
  // subscriber_list
  rosidl_runtime_c__String__fini(&msg->subscriber_list);
  // service_list
  rosidl_runtime_c__String__fini(&msg->service_list);
  // camera_list
  rosidl_runtime_c__String__fini(&msg->camera_list);
  // gps_list
  rosidl_runtime_c__String__fini(&msg->gps_list);
  // imu_list
  rosidl_runtime_c__String__fini(&msg->imu_list);
}

bool
morai_msgs__msg__MoraiSimConfig__are_equal(const morai_msgs__msg__MoraiSimConfig * lhs, const morai_msgs__msg__MoraiSimConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_config_file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_config_file_name), &(rhs->sensor_config_file_name)))
  {
    return false;
  }
  // publisher_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->publisher_list), &(rhs->publisher_list)))
  {
    return false;
  }
  // subscriber_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->subscriber_list), &(rhs->subscriber_list)))
  {
    return false;
  }
  // service_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_list), &(rhs->service_list)))
  {
    return false;
  }
  // camera_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_list), &(rhs->camera_list)))
  {
    return false;
  }
  // gps_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gps_list), &(rhs->gps_list)))
  {
    return false;
  }
  // imu_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->imu_list), &(rhs->imu_list)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__MoraiSimConfig__copy(
  const morai_msgs__msg__MoraiSimConfig * input,
  morai_msgs__msg__MoraiSimConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_config_file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_config_file_name), &(output->sensor_config_file_name)))
  {
    return false;
  }
  // publisher_list
  if (!rosidl_runtime_c__String__copy(
      &(input->publisher_list), &(output->publisher_list)))
  {
    return false;
  }
  // subscriber_list
  if (!rosidl_runtime_c__String__copy(
      &(input->subscriber_list), &(output->subscriber_list)))
  {
    return false;
  }
  // service_list
  if (!rosidl_runtime_c__String__copy(
      &(input->service_list), &(output->service_list)))
  {
    return false;
  }
  // camera_list
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_list), &(output->camera_list)))
  {
    return false;
  }
  // gps_list
  if (!rosidl_runtime_c__String__copy(
      &(input->gps_list), &(output->gps_list)))
  {
    return false;
  }
  // imu_list
  if (!rosidl_runtime_c__String__copy(
      &(input->imu_list), &(output->imu_list)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__MoraiSimConfig *
morai_msgs__msg__MoraiSimConfig__create()
{
  morai_msgs__msg__MoraiSimConfig * msg = (morai_msgs__msg__MoraiSimConfig *)malloc(sizeof(morai_msgs__msg__MoraiSimConfig));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__MoraiSimConfig));
  bool success = morai_msgs__msg__MoraiSimConfig__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__MoraiSimConfig__destroy(morai_msgs__msg__MoraiSimConfig * msg)
{
  if (msg) {
    morai_msgs__msg__MoraiSimConfig__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__MoraiSimConfig__Sequence__init(morai_msgs__msg__MoraiSimConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__MoraiSimConfig * data = NULL;
  if (size) {
    data = (morai_msgs__msg__MoraiSimConfig *)calloc(size, sizeof(morai_msgs__msg__MoraiSimConfig));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__MoraiSimConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__MoraiSimConfig__fini(&data[i - 1]);
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
morai_msgs__msg__MoraiSimConfig__Sequence__fini(morai_msgs__msg__MoraiSimConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__MoraiSimConfig__fini(&array->data[i]);
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

morai_msgs__msg__MoraiSimConfig__Sequence *
morai_msgs__msg__MoraiSimConfig__Sequence__create(size_t size)
{
  morai_msgs__msg__MoraiSimConfig__Sequence * array = (morai_msgs__msg__MoraiSimConfig__Sequence *)malloc(sizeof(morai_msgs__msg__MoraiSimConfig__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__MoraiSimConfig__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__MoraiSimConfig__Sequence__destroy(morai_msgs__msg__MoraiSimConfig__Sequence * array)
{
  if (array) {
    morai_msgs__msg__MoraiSimConfig__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__MoraiSimConfig__Sequence__are_equal(const morai_msgs__msg__MoraiSimConfig__Sequence * lhs, const morai_msgs__msg__MoraiSimConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__MoraiSimConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__MoraiSimConfig__Sequence__copy(
  const morai_msgs__msg__MoraiSimConfig__Sequence * input,
  morai_msgs__msg__MoraiSimConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__MoraiSimConfig);
    morai_msgs__msg__MoraiSimConfig * data =
      (morai_msgs__msg__MoraiSimConfig *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__MoraiSimConfig__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__MoraiSimConfig__fini(&data[i]);
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
    if (!morai_msgs__msg__MoraiSimConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
