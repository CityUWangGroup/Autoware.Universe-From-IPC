// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/error_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_performance_analysis/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_performance_analysis/msg/detail/error_stamped__struct.h"
#include "control_performance_analysis/msg/detail/error_stamped__functions.h"
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

#include "control_performance_analysis/msg/detail/error__functions.h"  // error
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_control_performance_analysis__msg__Error(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_performance_analysis__msg__Error(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, Error)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_performance_analysis
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_performance_analysis
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_performance_analysis
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ErrorStamped__ros_msg_type = control_performance_analysis__msg__ErrorStamped;

static bool _ErrorStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ErrorStamped__ros_msg_type * ros_message = static_cast<const _ErrorStamped__ros_msg_type *>(untyped_ros_message);
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

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, Error
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ErrorStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ErrorStamped__ros_msg_type * ros_message = static_cast<_ErrorStamped__ros_msg_type *>(untyped_ros_message);
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

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, Error
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_performance_analysis
size_t get_serialized_size_control_performance_analysis__msg__ErrorStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ErrorStamped__ros_msg_type * ros_message = static_cast<const _ErrorStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name error

  current_alignment += get_serialized_size_control_performance_analysis__msg__Error(
    &(ros_message->error), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ErrorStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_performance_analysis__msg__ErrorStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_performance_analysis
size_t max_serialized_size_control_performance_analysis__msg__ErrorStamped(
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
  // member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_control_performance_analysis__msg__Error(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ErrorStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_control_performance_analysis__msg__ErrorStamped(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ErrorStamped = {
  "control_performance_analysis::msg",
  "ErrorStamped",
  _ErrorStamped__cdr_serialize,
  _ErrorStamped__cdr_deserialize,
  _ErrorStamped__get_serialized_size,
  _ErrorStamped__max_serialized_size
};

static rosidl_message_type_support_t _ErrorStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ErrorStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, ErrorStamped)() {
  return &_ErrorStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
