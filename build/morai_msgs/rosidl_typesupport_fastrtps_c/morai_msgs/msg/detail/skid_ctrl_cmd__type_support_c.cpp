// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/skid_ctrl_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/skid_ctrl_cmd__struct.h"
#include "morai_msgs/msg/detail/skid_ctrl_cmd__functions.h"
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

#include "geometry_msgs/msg/detail/twist__functions.h"  // velocity_ctrl
#include "morai_msgs/msg/detail/skid_model__functions.h"  // skid_model_ctrl

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_morai_msgs
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_morai_msgs
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_morai_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();
size_t get_serialized_size_morai_msgs__msg__SkidModel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__SkidModel(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, SkidModel)();


using _SkidCtrlCmd__ros_msg_type = morai_msgs__msg__SkidCtrlCmd;

static bool _SkidCtrlCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SkidCtrlCmd__ros_msg_type * ros_message = static_cast<const _SkidCtrlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    cdr << ros_message->cmd_type;
  }

  // Field name: skid_model_ctrl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, SkidModel
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->skid_model_ctrl, cdr))
    {
      return false;
    }
  }

  // Field name: velocity_ctrl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity_ctrl, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SkidCtrlCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SkidCtrlCmd__ros_msg_type * ros_message = static_cast<_SkidCtrlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    cdr >> ros_message->cmd_type;
  }

  // Field name: skid_model_ctrl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, SkidModel
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->skid_model_ctrl))
    {
      return false;
    }
  }

  // Field name: velocity_ctrl
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity_ctrl))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__SkidCtrlCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SkidCtrlCmd__ros_msg_type * ros_message = static_cast<const _SkidCtrlCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_type
  {
    size_t item_size = sizeof(ros_message->cmd_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name skid_model_ctrl

  current_alignment += get_serialized_size_morai_msgs__msg__SkidModel(
    &(ros_message->skid_model_ctrl), current_alignment);
  // field.name velocity_ctrl

  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->velocity_ctrl), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SkidCtrlCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__SkidCtrlCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__SkidCtrlCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cmd_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: skid_model_ctrl
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__SkidModel(
        full_bounded, current_alignment);
    }
  }
  // member: velocity_ctrl
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Twist(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SkidCtrlCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__msg__SkidCtrlCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SkidCtrlCmd = {
  "morai_msgs::msg",
  "SkidCtrlCmd",
  _SkidCtrlCmd__cdr_serialize,
  _SkidCtrlCmd__cdr_deserialize,
  _SkidCtrlCmd__get_serialized_size,
  _SkidCtrlCmd__max_serialized_size
};

static rosidl_message_type_support_t _SkidCtrlCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SkidCtrlCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, SkidCtrlCmd)() {
  return &_SkidCtrlCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
