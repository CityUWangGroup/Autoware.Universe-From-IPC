// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatusArray.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__struct.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__functions.h"
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
#include "tier4_rtc_msgs/msg/detail/cooperate_status__functions.h"  // statuses

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
size_t get_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateStatus)();


using _CooperateStatusArray__ros_msg_type = tier4_rtc_msgs__msg__CooperateStatusArray;

static bool _CooperateStatusArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CooperateStatusArray__ros_msg_type * ros_message = static_cast<const _CooperateStatusArray__ros_msg_type *>(untyped_ros_message);
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

  // Field name: statuses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateStatus
      )()->data);
    size_t size = ros_message->statuses.size;
    auto array_ptr = ros_message->statuses.data;
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

static bool _CooperateStatusArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CooperateStatusArray__ros_msg_type * ros_message = static_cast<_CooperateStatusArray__ros_msg_type *>(untyped_ros_message);
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

  // Field name: statuses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->statuses.data) {
      tier4_rtc_msgs__msg__CooperateStatus__Sequence__fini(&ros_message->statuses);
    }
    if (!tier4_rtc_msgs__msg__CooperateStatus__Sequence__init(&ros_message->statuses, size)) {
      fprintf(stderr, "failed to create array for field 'statuses'");
      return false;
    }
    auto array_ptr = ros_message->statuses.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t get_serialized_size_tier4_rtc_msgs__msg__CooperateStatusArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CooperateStatusArray__ros_msg_type * ros_message = static_cast<const _CooperateStatusArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name statuses
  {
    size_t array_size = ros_message->statuses.size;
    auto array_ptr = ros_message->statuses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CooperateStatusArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_rtc_msgs__msg__CooperateStatusArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t max_serialized_size_tier4_rtc_msgs__msg__CooperateStatusArray(
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
  // member: statuses
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_rtc_msgs__msg__CooperateStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CooperateStatusArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_rtc_msgs__msg__CooperateStatusArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CooperateStatusArray = {
  "tier4_rtc_msgs::msg",
  "CooperateStatusArray",
  _CooperateStatusArray__cdr_serialize,
  _CooperateStatusArray__cdr_deserialize,
  _CooperateStatusArray__get_serialized_size,
  _CooperateStatusArray__max_serialized_size
};

static rosidl_message_type_support_t _CooperateStatusArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CooperateStatusArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, CooperateStatusArray)() {
  return &_CooperateStatusArray__type_support;
}

#if defined(__cplusplus)
}
#endif
