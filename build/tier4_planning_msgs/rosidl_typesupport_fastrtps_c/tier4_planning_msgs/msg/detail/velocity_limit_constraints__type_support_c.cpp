// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__struct.h"
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VelocityLimitConstraints__ros_msg_type = tier4_planning_msgs__msg__VelocityLimitConstraints;

static bool _VelocityLimitConstraints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VelocityLimitConstraints__ros_msg_type * ros_message = static_cast<const _VelocityLimitConstraints__ros_msg_type *>(untyped_ros_message);
  // Field name: min_acceleration
  {
    cdr << ros_message->min_acceleration;
  }

  // Field name: max_jerk
  {
    cdr << ros_message->max_jerk;
  }

  // Field name: min_jerk
  {
    cdr << ros_message->min_jerk;
  }

  return true;
}

static bool _VelocityLimitConstraints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VelocityLimitConstraints__ros_msg_type * ros_message = static_cast<_VelocityLimitConstraints__ros_msg_type *>(untyped_ros_message);
  // Field name: min_acceleration
  {
    cdr >> ros_message->min_acceleration;
  }

  // Field name: max_jerk
  {
    cdr >> ros_message->max_jerk;
  }

  // Field name: min_jerk
  {
    cdr >> ros_message->min_jerk;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t get_serialized_size_tier4_planning_msgs__msg__VelocityLimitConstraints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VelocityLimitConstraints__ros_msg_type * ros_message = static_cast<const _VelocityLimitConstraints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name min_acceleration
  {
    size_t item_size = sizeof(ros_message->min_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_jerk
  {
    size_t item_size = sizeof(ros_message->max_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_jerk
  {
    size_t item_size = sizeof(ros_message->min_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VelocityLimitConstraints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_planning_msgs__msg__VelocityLimitConstraints(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t max_serialized_size_tier4_planning_msgs__msg__VelocityLimitConstraints(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: min_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VelocityLimitConstraints__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_planning_msgs__msg__VelocityLimitConstraints(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VelocityLimitConstraints = {
  "tier4_planning_msgs::msg",
  "VelocityLimitConstraints",
  _VelocityLimitConstraints__cdr_serialize,
  _VelocityLimitConstraints__cdr_deserialize,
  _VelocityLimitConstraints__get_serialized_size,
  _VelocityLimitConstraints__max_serialized_size
};

static rosidl_message_type_support_t _VelocityLimitConstraints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VelocityLimitConstraints,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, VelocityLimitConstraints)() {
  return &_VelocityLimitConstraints__type_support;
}

#if defined(__cplusplus)
}
#endif
