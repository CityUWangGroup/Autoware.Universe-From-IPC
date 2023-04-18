// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleCommand in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__VehicleCommand
{
  double velocity;
  double acceleration;
} tier4_external_api_msgs__msg__VehicleCommand;

// Struct for a sequence of tier4_external_api_msgs__msg__VehicleCommand.
typedef struct tier4_external_api_msgs__msg__VehicleCommand__Sequence
{
  tier4_external_api_msgs__msg__VehicleCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__VehicleCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_
