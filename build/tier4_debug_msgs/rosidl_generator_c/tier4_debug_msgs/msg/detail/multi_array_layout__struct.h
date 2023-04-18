// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_debug_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dim'
#include "tier4_debug_msgs/msg/detail/multi_array_dimension__struct.h"

// Struct defined in msg/MultiArrayLayout in the package tier4_debug_msgs.
typedef struct tier4_debug_msgs__msg__MultiArrayLayout
{
  tier4_debug_msgs__msg__MultiArrayDimension__Sequence dim;
  uint32_t data_offset;
} tier4_debug_msgs__msg__MultiArrayLayout;

// Struct for a sequence of tier4_debug_msgs__msg__MultiArrayLayout.
typedef struct tier4_debug_msgs__msg__MultiArrayLayout__Sequence
{
  tier4_debug_msgs__msg__MultiArrayLayout * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_debug_msgs__msg__MultiArrayLayout__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
