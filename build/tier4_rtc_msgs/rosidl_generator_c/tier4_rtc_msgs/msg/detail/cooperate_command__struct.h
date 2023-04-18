// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:msg/CooperateCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__STRUCT_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.h"
// Member 'command'
#include "tier4_rtc_msgs/msg/detail/command__struct.h"

// Struct defined in msg/CooperateCommand in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__msg__CooperateCommand
{
  unique_identifier_msgs__msg__UUID uuid;
  tier4_rtc_msgs__msg__Module module;
  tier4_rtc_msgs__msg__Command command;
} tier4_rtc_msgs__msg__CooperateCommand;

// Struct for a sequence of tier4_rtc_msgs__msg__CooperateCommand.
typedef struct tier4_rtc_msgs__msg__CooperateCommand__Sequence
{
  tier4_rtc_msgs__msg__CooperateCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__msg__CooperateCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__STRUCT_H_
