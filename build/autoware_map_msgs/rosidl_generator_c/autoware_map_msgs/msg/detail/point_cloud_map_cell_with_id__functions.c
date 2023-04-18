// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `cell_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pointcloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
autoware_map_msgs__msg__PointCloudMapCellWithID__init(autoware_map_msgs__msg__PointCloudMapCellWithID * msg)
{
  if (!msg) {
    return false;
  }
  // cell_id
  if (!rosidl_runtime_c__String__init(&msg->cell_id)) {
    autoware_map_msgs__msg__PointCloudMapCellWithID__fini(msg);
    return false;
  }
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->pointcloud)) {
    autoware_map_msgs__msg__PointCloudMapCellWithID__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__msg__PointCloudMapCellWithID__fini(autoware_map_msgs__msg__PointCloudMapCellWithID * msg)
{
  if (!msg) {
    return;
  }
  // cell_id
  rosidl_runtime_c__String__fini(&msg->cell_id);
  // pointcloud
  sensor_msgs__msg__PointCloud2__fini(&msg->pointcloud);
}

bool
autoware_map_msgs__msg__PointCloudMapCellWithID__are_equal(const autoware_map_msgs__msg__PointCloudMapCellWithID * lhs, const autoware_map_msgs__msg__PointCloudMapCellWithID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cell_id), &(rhs->cell_id)))
  {
    return false;
  }
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->pointcloud), &(rhs->pointcloud)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__msg__PointCloudMapCellWithID__copy(
  const autoware_map_msgs__msg__PointCloudMapCellWithID * input,
  autoware_map_msgs__msg__PointCloudMapCellWithID * output)
{
  if (!input || !output) {
    return false;
  }
  // cell_id
  if (!rosidl_runtime_c__String__copy(
      &(input->cell_id), &(output->cell_id)))
  {
    return false;
  }
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->pointcloud), &(output->pointcloud)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__msg__PointCloudMapCellWithID *
autoware_map_msgs__msg__PointCloudMapCellWithID__create()
{
  autoware_map_msgs__msg__PointCloudMapCellWithID * msg = (autoware_map_msgs__msg__PointCloudMapCellWithID *)malloc(sizeof(autoware_map_msgs__msg__PointCloudMapCellWithID));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__msg__PointCloudMapCellWithID));
  bool success = autoware_map_msgs__msg__PointCloudMapCellWithID__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__msg__PointCloudMapCellWithID__destroy(autoware_map_msgs__msg__PointCloudMapCellWithID * msg)
{
  if (msg) {
    autoware_map_msgs__msg__PointCloudMapCellWithID__fini(msg);
  }
  free(msg);
}


bool
autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__init(autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_map_msgs__msg__PointCloudMapCellWithID * data = NULL;
  if (size) {
    data = (autoware_map_msgs__msg__PointCloudMapCellWithID *)calloc(size, sizeof(autoware_map_msgs__msg__PointCloudMapCellWithID));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__msg__PointCloudMapCellWithID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__msg__PointCloudMapCellWithID__fini(&data[i - 1]);
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
autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__fini(autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_map_msgs__msg__PointCloudMapCellWithID__fini(&array->data[i]);
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

autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence *
autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__create(size_t size)
{
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * array = (autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence *)malloc(sizeof(autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__destroy(autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * array)
{
  if (array) {
    autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__are_equal(const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * lhs, const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__msg__PointCloudMapCellWithID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__copy(
  const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * input,
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__msg__PointCloudMapCellWithID);
    autoware_map_msgs__msg__PointCloudMapCellWithID * data =
      (autoware_map_msgs__msg__PointCloudMapCellWithID *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__msg__PointCloudMapCellWithID__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__msg__PointCloudMapCellWithID__fini(&data[i]);
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
    if (!autoware_map_msgs__msg__PointCloudMapCellWithID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
