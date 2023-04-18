// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
enum
{
  tier4_api_msgs__msg__IntersectionStatus__STOP = 0l
};

/// Constant 'GO'.
enum
{
  tier4_api_msgs__msg__IntersectionStatus__GO = 1l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/IntersectionStatus in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__IntersectionStatus
{
  std_msgs__msg__Header header;
  int32_t status;
} tier4_api_msgs__msg__IntersectionStatus;

// Struct for a sequence of tier4_api_msgs__msg__IntersectionStatus.
typedef struct tier4_api_msgs__msg__IntersectionStatus__Sequence
{
  tier4_api_msgs__msg__IntersectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__IntersectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_H_
