// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:srv/GetDifferentialPointCloudMap.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `area`
#include "autoware_map_msgs/msg/detail/area_info__functions.h"
// Member `cached_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__init(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // area
  if (!autoware_map_msgs__msg__AreaInfo__init(&msg->area)) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(msg);
    return false;
  }
  // cached_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->cached_ids, 0)) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // area
  autoware_map_msgs__msg__AreaInfo__fini(&msg->area);
  // cached_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->cached_ids);
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__are_equal(const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * lhs, const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area
  if (!autoware_map_msgs__msg__AreaInfo__are_equal(
      &(lhs->area), &(rhs->area)))
  {
    return false;
  }
  // cached_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->cached_ids), &(rhs->cached_ids)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__copy(
  const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * input,
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // area
  if (!autoware_map_msgs__msg__AreaInfo__copy(
      &(input->area), &(output->area)))
  {
    return false;
  }
  // cached_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->cached_ids), &(output->cached_ids)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request *
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__create()
{
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * msg = (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request *)malloc(sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request));
  bool success = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__destroy(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * msg)
{
  if (msg) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(msg);
  }
  free(msg);
}


bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__init(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * data = NULL;
  if (size) {
    data = (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request *)calloc(size, sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(&data[i - 1]);
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
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__fini(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(&array->data[i]);
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

autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence *
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__create(size_t size)
{
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * array = (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence *)malloc(sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__destroy(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * array)
{
  if (array) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__are_equal(const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * lhs, const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence__copy(
  const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * input,
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request);
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request * data =
      (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__fini(&data[i]);
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
    if (!autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `new_pointcloud_with_ids`
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__functions.h"
// Member `ids_to_remove`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__init(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(msg);
    return false;
  }
  // new_pointcloud_with_ids
  if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__init(&msg->new_pointcloud_with_ids, 0)) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(msg);
    return false;
  }
  // ids_to_remove
  if (!rosidl_runtime_c__String__Sequence__init(&msg->ids_to_remove, 0)) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // new_pointcloud_with_ids
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__fini(&msg->new_pointcloud_with_ids);
  // ids_to_remove
  rosidl_runtime_c__String__Sequence__fini(&msg->ids_to_remove);
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__are_equal(const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * lhs, const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // new_pointcloud_with_ids
  if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__are_equal(
      &(lhs->new_pointcloud_with_ids), &(rhs->new_pointcloud_with_ids)))
  {
    return false;
  }
  // ids_to_remove
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->ids_to_remove), &(rhs->ids_to_remove)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__copy(
  const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * input,
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // new_pointcloud_with_ids
  if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__copy(
      &(input->new_pointcloud_with_ids), &(output->new_pointcloud_with_ids)))
  {
    return false;
  }
  // ids_to_remove
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->ids_to_remove), &(output->ids_to_remove)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response *
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__create()
{
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * msg = (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response *)malloc(sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response));
  bool success = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__destroy(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * msg)
{
  if (msg) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(msg);
  }
  free(msg);
}


bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__init(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * data = NULL;
  if (size) {
    data = (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response *)calloc(size, sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(&data[i - 1]);
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
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__fini(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(&array->data[i]);
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

autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence *
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__create(size_t size)
{
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * array = (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence *)malloc(sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__destroy(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * array)
{
  if (array) {
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__are_equal(const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * lhs, const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence__copy(
  const autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * input,
  autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response);
    autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response * data =
      (autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__fini(&data[i]);
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
    if (!autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
