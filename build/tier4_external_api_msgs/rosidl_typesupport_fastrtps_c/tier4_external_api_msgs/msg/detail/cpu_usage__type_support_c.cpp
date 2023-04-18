// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_external_api_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/cpu_usage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_external_api_msgs/msg/detail/cpu_usage__struct.h"
#include "tier4_external_api_msgs/msg/detail/cpu_usage__functions.h"
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
#include "tier4_external_api_msgs/msg/detail/cpu_status__functions.h"  // all, cpus

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_external_api_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_external_api_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_tier4_external_api_msgs__msg__CpuStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_external_api_msgs__msg__CpuStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, CpuStatus)();


using _CpuUsage__ros_msg_type = tier4_external_api_msgs__msg__CpuUsage;

static bool _CpuUsage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CpuUsage__ros_msg_type * ros_message = static_cast<const _CpuUsage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: all
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, CpuStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->all, cdr))
    {
      return false;
    }
  }

  // Field name: cpus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, CpuStatus
      )()->data);
    size_t size = ros_message->cpus.size;
    auto array_ptr = ros_message->cpus.data;
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

static bool _CpuUsage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CpuUsage__ros_msg_type * ros_message = static_cast<_CpuUsage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: all
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, CpuStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->all))
    {
      return false;
    }
  }

  // Field name: cpus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, CpuStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cpus.data) {
      tier4_external_api_msgs__msg__CpuStatus__Sequence__fini(&ros_message->cpus);
    }
    if (!tier4_external_api_msgs__msg__CpuStatus__Sequence__init(&ros_message->cpus, size)) {
      fprintf(stderr, "failed to create array for field 'cpus'");
      return false;
    }
    auto array_ptr = ros_message->cpus.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t get_serialized_size_tier4_external_api_msgs__msg__CpuUsage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CpuUsage__ros_msg_type * ros_message = static_cast<const _CpuUsage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name all

  current_alignment += get_serialized_size_tier4_external_api_msgs__msg__CpuStatus(
    &(ros_message->all), current_alignment);
  // field.name cpus
  {
    size_t array_size = ros_message->cpus.size;
    auto array_ptr = ros_message->cpus.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tier4_external_api_msgs__msg__CpuStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CpuUsage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_external_api_msgs__msg__CpuUsage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t max_serialized_size_tier4_external_api_msgs__msg__CpuUsage(
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
  // member: all
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_external_api_msgs__msg__CpuStatus(
        full_bounded, current_alignment);
    }
  }
  // member: cpus
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_external_api_msgs__msg__CpuStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CpuUsage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_external_api_msgs__msg__CpuUsage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CpuUsage = {
  "tier4_external_api_msgs::msg",
  "CpuUsage",
  _CpuUsage__cdr_serialize,
  _CpuUsage__cdr_deserialize,
  _CpuUsage__get_serialized_size,
  _CpuUsage__max_serialized_size
};

static rosidl_message_type_support_t _CpuUsage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CpuUsage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, CpuUsage)() {
  return &_CpuUsage__type_support;
}

#if defined(__cplusplus)
}
#endif
