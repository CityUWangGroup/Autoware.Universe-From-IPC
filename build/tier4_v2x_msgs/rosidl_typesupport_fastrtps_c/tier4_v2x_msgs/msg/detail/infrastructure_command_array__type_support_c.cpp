// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommandArray.idl
// generated code does not contain a copyright notice
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__struct.h"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__functions.h"  // commands

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_v2x_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_v2x_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommand(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_v2x_msgs, msg, InfrastructureCommand)();


using _InfrastructureCommandArray__ros_msg_type = tier4_v2x_msgs__msg__InfrastructureCommandArray;

static bool _InfrastructureCommandArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InfrastructureCommandArray__ros_msg_type * ros_message = static_cast<const _InfrastructureCommandArray__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_v2x_msgs, msg, InfrastructureCommand
      )()->data);
    size_t size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
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

static bool _InfrastructureCommandArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InfrastructureCommandArray__ros_msg_type * ros_message = static_cast<_InfrastructureCommandArray__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_v2x_msgs, msg, InfrastructureCommand
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->commands.data) {
      tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__fini(&ros_message->commands);
    }
    if (!tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__init(&ros_message->commands, size)) {
      fprintf(stderr, "failed to create array for field 'commands'");
      return false;
    }
    auto array_ptr = ros_message->commands.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_v2x_msgs
size_t get_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommandArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InfrastructureCommandArray__ros_msg_type * ros_message = static_cast<const _InfrastructureCommandArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name commands
  {
    size_t array_size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommand(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InfrastructureCommandArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommandArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_v2x_msgs
size_t max_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommandArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _InfrastructureCommandArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_v2x_msgs__msg__InfrastructureCommandArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InfrastructureCommandArray = {
  "tier4_v2x_msgs::msg",
  "InfrastructureCommandArray",
  _InfrastructureCommandArray__cdr_serialize,
  _InfrastructureCommandArray__cdr_deserialize,
  _InfrastructureCommandArray__get_serialized_size,
  _InfrastructureCommandArray__max_serialized_size
};

static rosidl_message_type_support_t _InfrastructureCommandArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InfrastructureCommandArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_v2x_msgs, msg, InfrastructureCommandArray)() {
  return &_InfrastructureCommandArray__type_support;
}

#if defined(__cplusplus)
}
#endif
