// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/ExpandStopRange.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__EXPAND_STOP_RANGE__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__EXPAND_STOP_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/ExpandStopRange in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__ExpandStopRange
{
  builtin_interfaces__msg__Time stamp;
  float expand_stop_range;
} tier4_planning_msgs__msg__ExpandStopRange;

// Struct for a sequence of tier4_planning_msgs__msg__ExpandStopRange.
typedef struct tier4_planning_msgs__msg__ExpandStopRange__Sequence
{
  tier4_planning_msgs__msg__ExpandStopRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__ExpandStopRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__EXPAND_STOP_RANGE__STRUCT_H_
