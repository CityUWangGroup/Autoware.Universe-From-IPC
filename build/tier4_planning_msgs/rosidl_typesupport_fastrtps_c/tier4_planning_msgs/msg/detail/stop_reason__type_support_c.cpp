// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_planning_msgs:msg/StopReason.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/stop_reason__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_planning_msgs/msg/detail/stop_reason__struct.h"
#include "tier4_planning_msgs/msg/detail/stop_reason__functions.h"
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

#include "rosidl_runtime_c/string.h"  // reason
#include "rosidl_runtime_c/string_functions.h"  // reason
#include "tier4_planning_msgs/msg/detail/stop_factor__functions.h"  // stop_factors

// forward declare type support functions
size_t get_serialized_size_tier4_planning_msgs__msg__StopFactor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_planning_msgs__msg__StopFactor(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopFactor)();


using _StopReason__ros_msg_type = tier4_planning_msgs__msg__StopReason;

static bool _StopReason__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StopReason__ros_msg_type * ros_message = static_cast<const _StopReason__ros_msg_type *>(untyped_ros_message);
  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stop_factors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopFactor
      )()->data);
    size_t size = ros_message->stop_factors.size;
    auto array_ptr = ros_message->stop_factors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _StopReason__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StopReason__ros_msg_type * ros_message = static_cast<_StopReason__ros_msg_type *>(untyped_ros_message);
  // Field name: reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reason.data) {
      rosidl_runtime_c__String__init(&ros_message->reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reason'\n");
      return false;
    }
  }

  // Field name: stop_factors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopFactor
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stop_factors.data) {
      tier4_planning_msgs__msg__StopFactor__Sequence__fini(&ros_message->stop_factors);
    }
    if (!tier4_planning_msgs__msg__StopFactor__Sequence__init(&ros_message->stop_factors, size)) {
      fprintf(stderr, "failed to create array for field 'stop_factors'");
      return false;
    }
    auto array_ptr = ros_message->stop_factors.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t get_serialized_size_tier4_planning_msgs__msg__StopReason(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StopReason__ros_msg_type * ros_message = static_cast<const _StopReason__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);
  // field.name stop_factors
  {
    size_t array_size = ros_message->stop_factors.size;
    auto array_ptr = ros_message->stop_factors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tier4_planning_msgs__msg__StopFactor(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StopReason__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_planning_msgs__msg__StopReason(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t max_serialized_size_tier4_planning_msgs__msg__StopReason(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stop_factors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_planning_msgs__msg__StopFactor(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StopReason__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_planning_msgs__msg__StopReason(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StopReason = {
  "tier4_planning_msgs::msg",
  "StopReason",
  _StopReason__cdr_serialize,
  _StopReason__cdr_deserialize,
  _StopReason__get_serialized_size,
  _StopReason__max_serialized_size
};

static rosidl_message_type_support_t _StopReason__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StopReason,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopReason)() {
  return &_StopReason__type_support;
}

#if defined(__cplusplus)
}
#endif
