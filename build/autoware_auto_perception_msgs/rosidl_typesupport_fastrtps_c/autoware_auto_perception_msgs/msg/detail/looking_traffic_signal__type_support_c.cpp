// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__functions.h"
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

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__functions.h"  // external, perception, result
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _LookingTrafficSignal__ros_msg_type = autoware_auto_perception_msgs__msg__LookingTrafficSignal;

static bool _LookingTrafficSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LookingTrafficSignal__ros_msg_type * ros_message = static_cast<const _LookingTrafficSignal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: is_module_running
  {
    cdr << (ros_message->is_module_running ? true : false);
  }

  // Field name: perception
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->perception, cdr))
    {
      return false;
    }
  }

  // Field name: external
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->external, cdr))
    {
      return false;
    }
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LookingTrafficSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LookingTrafficSignal__ros_msg_type * ros_message = static_cast<_LookingTrafficSignal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: is_module_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_module_running = tmp ? true : false;
  }

  // Field name: perception
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->perception))
    {
      return false;
    }
  }

  // Field name: external
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->external))
    {
      return false;
    }
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t get_serialized_size_autoware_auto_perception_msgs__msg__LookingTrafficSignal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LookingTrafficSignal__ros_msg_type * ros_message = static_cast<const _LookingTrafficSignal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name is_module_running
  {
    size_t item_size = sizeof(ros_message->is_module_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name perception

  current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
    &(ros_message->perception), current_alignment);
  // field.name external

  current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
    &(ros_message->external), current_alignment);
  // field.name result

  current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LookingTrafficSignal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_perception_msgs__msg__LookingTrafficSignal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t max_serialized_size_autoware_auto_perception_msgs__msg__LookingTrafficSignal(
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
  // member: is_module_running
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: perception
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
        full_bounded, current_alignment);
    }
  }
  // member: external
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
        full_bounded, current_alignment);
    }
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LookingTrafficSignal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_perception_msgs__msg__LookingTrafficSignal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LookingTrafficSignal = {
  "autoware_auto_perception_msgs::msg",
  "LookingTrafficSignal",
  _LookingTrafficSignal__cdr_serialize,
  _LookingTrafficSignal__cdr_deserialize,
  _LookingTrafficSignal__get_serialized_size,
  _LookingTrafficSignal__max_serialized_size
};

static rosidl_message_type_support_t _LookingTrafficSignal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LookingTrafficSignal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, LookingTrafficSignal)() {
  return &_LookingTrafficSignal__type_support;
}

#if defined(__cplusplus)
}
#endif
