// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__struct.h"
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__functions.h"
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

#include "morai_msgs/msg/detail/ctrl_cmd__functions.h"  // command

// forward declare type support functions
size_t get_serialized_size_morai_msgs__msg__CtrlCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__CtrlCmd(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, CtrlCmd)();


using _SyncModeCtrlCmd__ros_msg_type = morai_msgs__msg__SyncModeCtrlCmd;

static bool _SyncModeCtrlCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SyncModeCtrlCmd__ros_msg_type * ros_message = static_cast<const _SyncModeCtrlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: frame
  {
    cdr << ros_message->frame;
  }

  // Field name: command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, CtrlCmd
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->command, cdr))
    {
      return false;
    }
  }

  // Field name: sensor_capture
  {
    cdr << (ros_message->sensor_capture ? true : false);
  }

  return true;
}

static bool _SyncModeCtrlCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SyncModeCtrlCmd__ros_msg_type * ros_message = static_cast<_SyncModeCtrlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: frame
  {
    cdr >> ros_message->frame;
  }

  // Field name: command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, CtrlCmd
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->command))
    {
      return false;
    }
  }

  // Field name: sensor_capture
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sensor_capture = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__SyncModeCtrlCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SyncModeCtrlCmd__ros_msg_type * ros_message = static_cast<const _SyncModeCtrlCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name frame
  {
    size_t item_size = sizeof(ros_message->frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command

  current_alignment += get_serialized_size_morai_msgs__msg__CtrlCmd(
    &(ros_message->command), current_alignment);
  // field.name sensor_capture
  {
    size_t item_size = sizeof(ros_message->sensor_capture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SyncModeCtrlCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__SyncModeCtrlCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__SyncModeCtrlCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__CtrlCmd(
        full_bounded, current_alignment);
    }
  }
  // member: sensor_capture
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SyncModeCtrlCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__msg__SyncModeCtrlCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SyncModeCtrlCmd = {
  "morai_msgs::msg",
  "SyncModeCtrlCmd",
  _SyncModeCtrlCmd__cdr_serialize,
  _SyncModeCtrlCmd__cdr_deserialize,
  _SyncModeCtrlCmd__get_serialized_size,
  _SyncModeCtrlCmd__max_serialized_size
};

static rosidl_message_type_support_t _SyncModeCtrlCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SyncModeCtrlCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, SyncModeCtrlCmd)() {
  return &_SyncModeCtrlCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
