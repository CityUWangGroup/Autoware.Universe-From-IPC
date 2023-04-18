// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_sensing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.h"
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__functions.h"
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

#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_sensing_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_sensing_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();


using _GnssInsOrientation__ros_msg_type = autoware_sensing_msgs__msg__GnssInsOrientation;

static bool _GnssInsOrientation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GnssInsOrientation__ros_msg_type * ros_message = static_cast<const _GnssInsOrientation__ros_msg_type *>(untyped_ros_message);
  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->orientation, cdr))
    {
      return false;
    }
  }

  // Field name: rmse_rotation_x
  {
    cdr << ros_message->rmse_rotation_x;
  }

  // Field name: rmse_rotation_y
  {
    cdr << ros_message->rmse_rotation_y;
  }

  // Field name: rmse_rotation_z
  {
    cdr << ros_message->rmse_rotation_z;
  }

  return true;
}

static bool _GnssInsOrientation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GnssInsOrientation__ros_msg_type * ros_message = static_cast<_GnssInsOrientation__ros_msg_type *>(untyped_ros_message);
  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->orientation))
    {
      return false;
    }
  }

  // Field name: rmse_rotation_x
  {
    cdr >> ros_message->rmse_rotation_x;
  }

  // Field name: rmse_rotation_y
  {
    cdr >> ros_message->rmse_rotation_y;
  }

  // Field name: rmse_rotation_z
  {
    cdr >> ros_message->rmse_rotation_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_sensing_msgs
size_t get_serialized_size_autoware_sensing_msgs__msg__GnssInsOrientation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GnssInsOrientation__ros_msg_type * ros_message = static_cast<const _GnssInsOrientation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name orientation

  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);
  // field.name rmse_rotation_x
  {
    size_t item_size = sizeof(ros_message->rmse_rotation_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rmse_rotation_y
  {
    size_t item_size = sizeof(ros_message->rmse_rotation_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rmse_rotation_z
  {
    size_t item_size = sizeof(ros_message->rmse_rotation_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GnssInsOrientation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_sensing_msgs__msg__GnssInsOrientation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_sensing_msgs
size_t max_serialized_size_autoware_sensing_msgs__msg__GnssInsOrientation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Quaternion(
        full_bounded, current_alignment);
    }
  }
  // member: rmse_rotation_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rmse_rotation_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rmse_rotation_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GnssInsOrientation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_sensing_msgs__msg__GnssInsOrientation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GnssInsOrientation = {
  "autoware_sensing_msgs::msg",
  "GnssInsOrientation",
  _GnssInsOrientation__cdr_serialize,
  _GnssInsOrientation__cdr_deserialize,
  _GnssInsOrientation__get_serialized_size,
  _GnssInsOrientation__max_serialized_size
};

static rosidl_message_type_support_t _GnssInsOrientation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GnssInsOrientation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_sensing_msgs, msg, GnssInsOrientation)() {
  return &_GnssInsOrientation__type_support;
}

#if defined(__cplusplus)
}
#endif
