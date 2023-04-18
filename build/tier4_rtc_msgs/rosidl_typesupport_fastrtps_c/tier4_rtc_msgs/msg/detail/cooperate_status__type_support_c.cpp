// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status__functions.h"
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
#include "tier4_rtc_msgs/msg/detail/command__functions.h"  // command_status
#include "tier4_rtc_msgs/msg/detail/module__functions.h"  // module
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // uuid

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
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


using _CooperateStatus__ros_msg_type = tier4_rtc_msgs__msg__CooperateStatus;

static bool _CooperateStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CooperateStatus__ros_msg_type * ros_message = static_cast<const _CooperateStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: safe
  {
    cdr << (ros_message->safe ? true : false);
  }

  // Field name: command_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Command
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->command_status, cdr))
    {
      return false;
    }
  }

  // Field name: auto_mode
  {
    cdr << (ros_message->auto_mode ? true : false);
  }

  // Field name: start_distance
  {
    cdr << ros_message->start_distance;
  }

  // Field name: finish_distance
  {
    cdr << ros_message->finish_distance;
  }

  return true;
}

static bool _CooperateStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CooperateStatus__ros_msg_type * ros_message = static_cast<_CooperateStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: safe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safe = tmp ? true : false;
  }

  // Field name: command_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Command
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->command_status))
    {
      return false;
    }
  }

  // Field name: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mode = tmp ? true : false;
  }

  // Field name: start_distance
  {
    cdr >> ros_message->start_distance;
  }

  // Field name: finish_distance
  {
    cdr >> ros_message->finish_distance;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t get_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CooperateStatus__ros_msg_type * ros_message = static_cast<const _CooperateStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name uuid

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->uuid), current_alignment);
  // field.name module

  current_alignment += get_serialized_size_tier4_rtc_msgs__msg__Module(
    &(ros_message->module), current_alignment);
  // field.name safe
  {
    size_t item_size = sizeof(ros_message->safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command_status

  current_alignment += get_serialized_size_tier4_rtc_msgs__msg__Command(
    &(ros_message->command_status), current_alignment);
  // field.name auto_mode
  {
    size_t item_size = sizeof(ros_message->auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_distance
  {
    size_t item_size = sizeof(ros_message->start_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finish_distance
  {
    size_t item_size = sizeof(ros_message->finish_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CooperateStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t max_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
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
  // member: safe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: command_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_rtc_msgs__msg__Command(
        full_bounded, current_alignment);
    }
  }
  // member: auto_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: start_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: finish_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CooperateStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CooperateStatus = {
  "tier4_rtc_msgs::msg",
  "CooperateStatus",
  _CooperateStatus__cdr_serialize,
  _CooperateStatus__cdr_deserialize,
  _CooperateStatus__get_serialized_size,
  _CooperateStatus__max_serialized_size
};

static rosidl_message_type_support_t _CooperateStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CooperateStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateStatus)() {
  return &_CooperateStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
