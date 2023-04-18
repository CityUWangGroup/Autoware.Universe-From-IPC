// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_H_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'version_map_format'
// Member 'version_map'
// Member 'name_map'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LaneletMapBin in the package autoware_map_msgs.
typedef struct autoware_map_msgs__msg__LaneletMapBin
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String version_map_format;
  rosidl_runtime_c__String version_map;
  rosidl_runtime_c__String name_map;
  rosidl_runtime_c__uint8__Sequence data;
} autoware_map_msgs__msg__LaneletMapBin;

// Struct for a sequence of autoware_map_msgs__msg__LaneletMapBin.
typedef struct autoware_map_msgs__msg__LaneletMapBin__Sequence
{
  autoware_map_msgs__msg__LaneletMapBin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__msg__LaneletMapBin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_H_
