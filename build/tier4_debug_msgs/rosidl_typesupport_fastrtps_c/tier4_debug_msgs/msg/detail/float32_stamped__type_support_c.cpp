// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_debug_msgs:msg/Float32Stamped.idl
// generated code does not contain a copyright notice
#include "tier4_debug_msgs/msg/detail/float32_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_debug_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_debug_msgs/msg/detail/float32_stamped__struct.h"
#include "tier4_debug_msgs/msg/detail/float32_stamped__functions.h"
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

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_debug_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_debug_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_debug_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _Float32Stamped__ros_msg_type = tier4_debug_msgs__msg__Float32Stamped;

static bool _Float32Stamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Float32Stamped__ros_msg_type * ros_message = static_cast<const _Float32Stamped__ros_msg_type *>(untyped_ros_message);
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

  // Field name: data
  {
    cdr << ros_message->data;
  }

  return true;
}

static bool _Float32Stamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Float32Stamped__ros_msg_type * ros_message = static_cast<_Float32Stamped__ros_msg_type *>(untyped_ros_message);
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

  // Field name: data
  {
    cdr >> ros_message->data;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_debug_msgs
size_t get_serialized_size_tier4_debug_msgs__msg__Float32Stamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Float32Stamped__ros_msg_type * ros_message = static_cast<const _Float32Stamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Float32Stamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_debug_msgs__msg__Float32Stamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_debug_msgs
size_t max_serialized_size_tier4_debug_msgs__msg__Float32Stamped(
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
  // member: data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Float32Stamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_debug_msgs__msg__Float32Stamped(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Float32Stamped = {
  "tier4_debug_msgs::msg",
  "Float32Stamped",
  _Float32Stamped__cdr_serialize,
  _Float32Stamped__cdr_deserialize,
  _Float32Stamped__get_serialized_size,
  _Float32Stamped__max_serialized_size
};

static rosidl_message_type_support_t _Float32Stamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Float32Stamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_debug_msgs, msg, Float32Stamped)() {
  return &_Float32Stamped__type_support;
}

#if defined(__cplusplus)
}
#endif
