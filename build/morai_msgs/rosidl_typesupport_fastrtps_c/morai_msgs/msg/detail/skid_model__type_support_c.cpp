// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/skid_model__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/skid_model__struct.h"
#include "morai_msgs/msg/detail/skid_model__functions.h"
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

#include "morai_msgs/msg/detail/wheel_rpm__functions.h"  // rpm
#include "morai_msgs/msg/detail/wheel_torque__functions.h"  // torque

// forward declare type support functions
size_t get_serialized_size_morai_msgs__msg__WheelRpm(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__WheelRpm(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, WheelRpm)();
size_t get_serialized_size_morai_msgs__msg__WheelTorque(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__WheelTorque(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, WheelTorque)();


using _SkidModel__ros_msg_type = morai_msgs__msg__SkidModel;

static bool _SkidModel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SkidModel__ros_msg_type * ros_message = static_cast<const _SkidModel__ros_msg_type *>(untyped_ros_message);
  // Field name: rpm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, WheelRpm
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rpm, cdr))
    {
      return false;
    }
  }

  // Field name: torque
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, WheelTorque
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->torque, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SkidModel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SkidModel__ros_msg_type * ros_message = static_cast<_SkidModel__ros_msg_type *>(untyped_ros_message);
  // Field name: rpm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, WheelRpm
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rpm))
    {
      return false;
    }
  }

  // Field name: torque
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, WheelTorque
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->torque))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__SkidModel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SkidModel__ros_msg_type * ros_message = static_cast<const _SkidModel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rpm

  current_alignment += get_serialized_size_morai_msgs__msg__WheelRpm(
    &(ros_message->rpm), current_alignment);
  // field.name torque

  current_alignment += get_serialized_size_morai_msgs__msg__WheelTorque(
    &(ros_message->torque), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SkidModel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__SkidModel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__SkidModel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rpm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__WheelRpm(
        full_bounded, current_alignment);
    }
  }
  // member: torque
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__WheelTorque(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SkidModel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__msg__SkidModel(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SkidModel = {
  "morai_msgs::msg",
  "SkidModel",
  _SkidModel__cdr_serialize,
  _SkidModel__cdr_deserialize,
  _SkidModel__get_serialized_size,
  _SkidModel__max_serialized_size
};

static rosidl_message_type_support_t _SkidModel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SkidModel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, SkidModel)() {
  return &_SkidModel__type_support;
}

#if defined(__cplusplus)
}
#endif
