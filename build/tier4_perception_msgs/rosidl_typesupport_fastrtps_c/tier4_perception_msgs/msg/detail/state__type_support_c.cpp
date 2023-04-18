// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_perception_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_perception_msgs/msg/detail/state__struct.h"
#include "tier4_perception_msgs/msg/detail/state__functions.h"
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

#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"  // acceleration_covariance
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"  // pose_covariance
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"  // twist_covariance
#include "tier4_perception_msgs/msg/detail/predicted_path__functions.h"  // predicted_paths

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance)();
size_t get_serialized_size_tier4_perception_msgs__msg__PredictedPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_perception_msgs__msg__PredictedPath(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_perception_msgs, msg, PredictedPath)();


using _State__ros_msg_type = tier4_perception_msgs__msg__State;

static bool _State__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _State__ros_msg_type * ros_message = static_cast<const _State__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose_covariance, cdr))
    {
      return false;
    }
  }

  // Field name: orientation_reliable
  {
    cdr << (ros_message->orientation_reliable ? true : false);
  }

  // Field name: twist_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->twist_covariance, cdr))
    {
      return false;
    }
  }

  // Field name: twist_reliable
  {
    cdr << (ros_message->twist_reliable ? true : false);
  }

  // Field name: acceleration_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acceleration_covariance, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration_reliable
  {
    cdr << (ros_message->acceleration_reliable ? true : false);
  }

  // Field name: predicted_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_perception_msgs, msg, PredictedPath
      )()->data);
    size_t size = ros_message->predicted_paths.size;
    auto array_ptr = ros_message->predicted_paths.data;
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

static bool _State__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _State__ros_msg_type * ros_message = static_cast<_State__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose_covariance))
    {
      return false;
    }
  }

  // Field name: orientation_reliable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->orientation_reliable = tmp ? true : false;
  }

  // Field name: twist_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->twist_covariance))
    {
      return false;
    }
  }

  // Field name: twist_reliable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->twist_reliable = tmp ? true : false;
  }

  // Field name: acceleration_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acceleration_covariance))
    {
      return false;
    }
  }

  // Field name: acceleration_reliable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acceleration_reliable = tmp ? true : false;
  }

  // Field name: predicted_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_perception_msgs, msg, PredictedPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_paths.data) {
      tier4_perception_msgs__msg__PredictedPath__Sequence__fini(&ros_message->predicted_paths);
    }
    if (!tier4_perception_msgs__msg__PredictedPath__Sequence__init(&ros_message->predicted_paths, size)) {
      fprintf(stderr, "failed to create array for field 'predicted_paths'");
      return false;
    }
    auto array_ptr = ros_message->predicted_paths.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_perception_msgs
size_t get_serialized_size_tier4_perception_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _State__ros_msg_type * ros_message = static_cast<const _State__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose_covariance

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
    &(ros_message->pose_covariance), current_alignment);
  // field.name orientation_reliable
  {
    size_t item_size = sizeof(ros_message->orientation_reliable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twist_covariance

  current_alignment += get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->twist_covariance), current_alignment);
  // field.name twist_reliable
  {
    size_t item_size = sizeof(ros_message->twist_reliable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_covariance

  current_alignment += get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
    &(ros_message->acceleration_covariance), current_alignment);
  // field.name acceleration_reliable
  {
    size_t item_size = sizeof(ros_message->acceleration_reliable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_paths
  {
    size_t array_size = ros_message->predicted_paths.size;
    auto array_ptr = ros_message->predicted_paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tier4_perception_msgs__msg__PredictedPath(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _State__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_perception_msgs__msg__State(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_perception_msgs
size_t max_serialized_size_tier4_perception_msgs__msg__State(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pose_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: orientation_reliable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twist_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: twist_reliable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acceleration_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: acceleration_reliable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: predicted_paths
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_perception_msgs__msg__PredictedPath(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _State__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_perception_msgs__msg__State(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_State = {
  "tier4_perception_msgs::msg",
  "State",
  _State__cdr_serialize,
  _State__cdr_deserialize,
  _State__get_serialized_size,
  _State__max_serialized_size
};

static rosidl_message_type_support_t _State__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_State,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_perception_msgs, msg, State)() {
  return &_State__type_support;
}

#if defined(__cplusplus)
}
#endif
