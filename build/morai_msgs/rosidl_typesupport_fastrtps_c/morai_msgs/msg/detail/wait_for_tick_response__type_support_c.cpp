// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/wait_for_tick_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/wait_for_tick_response__struct.h"
#include "morai_msgs/msg/detail/wait_for_tick_response__functions.h"
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

#include "morai_msgs/msg/detail/ego_vehicle_status__functions.h"  // vehicle_status
#include "rosidl_runtime_c/string.h"  // time
#include "rosidl_runtime_c/string_functions.h"  // time

// forward declare type support functions
size_t get_serialized_size_morai_msgs__msg__EgoVehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__EgoVehicleStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, EgoVehicleStatus)();


using _WaitForTickResponse__ros_msg_type = morai_msgs__msg__WaitForTickResponse;

static bool _WaitForTickResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WaitForTickResponse__ros_msg_type * ros_message = static_cast<const _WaitForTickResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: tick_status
  {
    cdr << (ros_message->tick_status ? true : false);
  }

  // Field name: pause_status
  {
    cdr << (ros_message->pause_status ? true : false);
  }

  // Field name: frame
  {
    cdr << ros_message->frame;
  }

  // Field name: vehicle_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, EgoVehicleStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_status, cdr))
    {
      return false;
    }
  }

  // Field name: time
  {
    const rosidl_runtime_c__String * str = &ros_message->time;
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

  return true;
}

static bool _WaitForTickResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WaitForTickResponse__ros_msg_type * ros_message = static_cast<_WaitForTickResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: tick_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tick_status = tmp ? true : false;
  }

  // Field name: pause_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pause_status = tmp ? true : false;
  }

  // Field name: frame
  {
    cdr >> ros_message->frame;
  }

  // Field name: vehicle_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, EgoVehicleStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_status))
    {
      return false;
    }
  }

  // Field name: time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time.data) {
      rosidl_runtime_c__String__init(&ros_message->time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__WaitForTickResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WaitForTickResponse__ros_msg_type * ros_message = static_cast<const _WaitForTickResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tick_status
  {
    size_t item_size = sizeof(ros_message->tick_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pause_status
  {
    size_t item_size = sizeof(ros_message->pause_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame
  {
    size_t item_size = sizeof(ros_message->frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_status

  current_alignment += get_serialized_size_morai_msgs__msg__EgoVehicleStatus(
    &(ros_message->vehicle_status), current_alignment);
  // field.name time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WaitForTickResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__WaitForTickResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__WaitForTickResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tick_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pause_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vehicle_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__EgoVehicleStatus(
        full_bounded, current_alignment);
    }
  }
  // member: time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WaitForTickResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__msg__WaitForTickResponse(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WaitForTickResponse = {
  "morai_msgs::msg",
  "WaitForTickResponse",
  _WaitForTickResponse__cdr_serialize,
  _WaitForTickResponse__cdr_deserialize,
  _WaitForTickResponse__get_serialized_size,
  _WaitForTickResponse__max_serialized_size
};

static rosidl_message_type_support_t _WaitForTickResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WaitForTickResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, WaitForTickResponse)() {
  return &_WaitForTickResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
