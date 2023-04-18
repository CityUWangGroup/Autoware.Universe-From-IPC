// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/get_traffic_light_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/get_traffic_light_status__struct.h"
#include "morai_msgs/msg/detail/get_traffic_light_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // traffic_light_index
#include "rosidl_runtime_c/string_functions.h"  // traffic_light_index
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_morai_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_morai_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_morai_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GetTrafficLightStatus__ros_msg_type = morai_msgs__msg__GetTrafficLightStatus;

static bool _GetTrafficLightStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetTrafficLightStatus__ros_msg_type * ros_message = static_cast<const _GetTrafficLightStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: traffic_light_index
  {
    const rosidl_runtime_c__String * str = &ros_message->traffic_light_index;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: traffic_light_type
  {
    cdr << ros_message->traffic_light_type;
  }

  // Field name: traffic_light_status
  {
    cdr << ros_message->traffic_light_status;
  }

  return true;
}

static bool _GetTrafficLightStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetTrafficLightStatus__ros_msg_type * ros_message = static_cast<_GetTrafficLightStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: traffic_light_index
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->traffic_light_index.data) {
      rosidl_runtime_c__String__init(&ros_message->traffic_light_index);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->traffic_light_index,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'traffic_light_index'\n");
      return false;
    }
  }

  // Field name: traffic_light_type
  {
    cdr >> ros_message->traffic_light_type;
  }

  // Field name: traffic_light_status
  {
    cdr >> ros_message->traffic_light_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__GetTrafficLightStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTrafficLightStatus__ros_msg_type * ros_message = static_cast<const _GetTrafficLightStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name traffic_light_index
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->traffic_light_index.size + 1);
  // field.name traffic_light_type
  {
    size_t item_size = sizeof(ros_message->traffic_light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_light_status
  {
    size_t item_size = sizeof(ros_message->traffic_light_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetTrafficLightStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__GetTrafficLightStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__GetTrafficLightStatus(
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
  // member: traffic_light_index
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: traffic_light_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: traffic_light_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetTrafficLightStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__msg__GetTrafficLightStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetTrafficLightStatus = {
  "morai_msgs::msg",
  "GetTrafficLightStatus",
  _GetTrafficLightStatus__cdr_serialize,
  _GetTrafficLightStatus__cdr_deserialize,
  _GetTrafficLightStatus__get_serialized_size,
  _GetTrafficLightStatus__max_serialized_size
};

static rosidl_message_type_support_t _GetTrafficLightStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetTrafficLightStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, GetTrafficLightStatus)() {
  return &_GetTrafficLightStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
