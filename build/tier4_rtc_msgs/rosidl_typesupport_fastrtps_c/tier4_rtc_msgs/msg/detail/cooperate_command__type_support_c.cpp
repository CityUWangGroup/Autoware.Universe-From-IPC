// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_rtc_msgs:msg/CooperateCommand.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_command__struct.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_command__functions.h"
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

#include "tier4_rtc_msgs/msg/detail/command__functions.h"  // command
#include "tier4_rtc_msgs/msg/detail/module__functions.h"  // module
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // uuid

// forward declare type support functions
size_t get_serialized_size_tier4_rtc_msgs__msg__Command(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_rtc_msgs__msg__Command(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Command)();
size_t get_serialized_size_tier4_rtc_msgs__msg__Module(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_rtc_msgs__msg__Module(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CooperateCommand__ros_msg_type = tier4_rtc_msgs__msg__CooperateCommand;

static bool _CooperateCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CooperateCommand__ros_msg_type * ros_message = static_cast<const _CooperateCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: uuid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->uuid, cdr))
    {
      return false;
    }
  }

  // Field name: module
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->module, cdr))
    {
      return false;
    }
  }

  // Field name: command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Command
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->command, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CooperateCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CooperateCommand__ros_msg_type * ros_message = static_cast<_CooperateCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: uuid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->uuid))
    {
      return false;
    }
  }

  // Field name: module
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->module))
    {
      return false;
    }
  }

  // Field name: command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Command
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->command))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t get_serialized_size_tier4_rtc_msgs__msg__CooperateCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CooperateCommand__ros_msg_type * ros_message = static_cast<const _CooperateCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name uuid

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->uuid), current_alignment);
  // field.name module

  current_alignment += get_serialized_size_tier4_rtc_msgs__msg__Module(
    &(ros_message->module), current_alignment);
  // field.name command

  current_alignment += get_serialized_size_tier4_rtc_msgs__msg__Command(
    &(ros_message->command), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CooperateCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_rtc_msgs__msg__CooperateCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t max_serialized_size_tier4_rtc_msgs__msg__CooperateCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: uuid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: module
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_rtc_msgs__msg__Module(
        full_bounded, current_alignment);
    }
  }
  // member: command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_rtc_msgs__msg__Command(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CooperateCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_rtc_msgs__msg__CooperateCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CooperateCommand = {
  "tier4_rtc_msgs::msg",
  "CooperateCommand",
  _CooperateCommand__cdr_serialize,
  _CooperateCommand__cdr_deserialize,
  _CooperateCommand__get_serialized_size,
  _CooperateCommand__max_serialized_size
};

static rosidl_message_type_support_t _CooperateCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CooperateCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateCommand)() {
  return &_CooperateCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
