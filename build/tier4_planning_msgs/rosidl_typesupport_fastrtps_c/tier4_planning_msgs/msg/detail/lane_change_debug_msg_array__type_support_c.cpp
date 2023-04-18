// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsgArray.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg_array__struct.h"
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg_array__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__functions.h"  // lane_change_info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_planning_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_planning_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
size_t get_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, LaneChangeDebugMsg)();


using _LaneChangeDebugMsgArray__ros_msg_type = tier4_planning_msgs__msg__LaneChangeDebugMsgArray;

static bool _LaneChangeDebugMsgArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneChangeDebugMsgArray__ros_msg_type * ros_message = static_cast<const _LaneChangeDebugMsgArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: lane_change_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, LaneChangeDebugMsg
      )()->data);
    size_t size = ros_message->lane_change_info.size;
    auto array_ptr = ros_message->lane_change_info.data;
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

static bool _LaneChangeDebugMsgArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneChangeDebugMsgArray__ros_msg_type * ros_message = static_cast<_LaneChangeDebugMsgArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: lane_change_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, LaneChangeDebugMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_change_info.data) {
      tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__fini(&ros_message->lane_change_info);
    }
    if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__init(&ros_message->lane_change_info, size)) {
      fprintf(stderr, "failed to create array for field 'lane_change_info'");
      return false;
    }
    auto array_ptr = ros_message->lane_change_info.data;
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
size_t get_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsgArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneChangeDebugMsgArray__ros_msg_type * ros_message = static_cast<const _LaneChangeDebugMsgArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name lane_change_info
  {
    size_t array_size = ros_message->lane_change_info.size;
    auto array_ptr = ros_message->lane_change_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneChangeDebugMsgArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsgArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t max_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsgArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: lane_change_info
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneChangeDebugMsgArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_planning_msgs__msg__LaneChangeDebugMsgArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneChangeDebugMsgArray = {
  "tier4_planning_msgs::msg",
  "LaneChangeDebugMsgArray",
  _LaneChangeDebugMsgArray__cdr_serialize,
  _LaneChangeDebugMsgArray__cdr_deserialize,
  _LaneChangeDebugMsgArray__get_serialized_size,
  _LaneChangeDebugMsgArray__max_serialized_size
};

static rosidl_message_type_support_t _LaneChangeDebugMsgArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneChangeDebugMsgArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, LaneChangeDebugMsgArray)() {
  return &_LaneChangeDebugMsgArray__type_support;
}

#if defined(__cplusplus)
}
#endif
