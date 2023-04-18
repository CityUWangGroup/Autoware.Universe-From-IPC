// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_localization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__struct.h"
#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__functions.h"
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

#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"  // pose_with_covariance

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_localization_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_localization_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped)();


using _PoseWithCovarianceStamped_Request__ros_msg_type = tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request;

static bool _PoseWithCovarianceStamped_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PoseWithCovarianceStamped_Request__ros_msg_type * ros_message = static_cast<const _PoseWithCovarianceStamped_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_with_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose_with_covariance, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PoseWithCovarianceStamped_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PoseWithCovarianceStamped_Request__ros_msg_type * ros_message = static_cast<_PoseWithCovarianceStamped_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_with_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose_with_covariance))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_localization_msgs
size_t get_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PoseWithCovarianceStamped_Request__ros_msg_type * ros_message = static_cast<const _PoseWithCovarianceStamped_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose_with_covariance

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
    &(ros_message->pose_with_covariance), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PoseWithCovarianceStamped_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_localization_msgs
size_t max_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pose_with_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PoseWithCovarianceStamped_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PoseWithCovarianceStamped_Request = {
  "tier4_localization_msgs::srv",
  "PoseWithCovarianceStamped_Request",
  _PoseWithCovarianceStamped_Request__cdr_serialize,
  _PoseWithCovarianceStamped_Request__cdr_deserialize,
  _PoseWithCovarianceStamped_Request__get_serialized_size,
  _PoseWithCovarianceStamped_Request__max_serialized_size
};

static rosidl_message_type_support_t _PoseWithCovarianceStamped_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PoseWithCovarianceStamped_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Request)() {
  return &_PoseWithCovarianceStamped_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tier4_localization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__struct.h"
// already included above
// #include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"  // pose_with_covariance

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_localization_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_localization_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped)();


using _PoseWithCovarianceStamped_Response__ros_msg_type = tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response;

static bool _PoseWithCovarianceStamped_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PoseWithCovarianceStamped_Response__ros_msg_type * ros_message = static_cast<const _PoseWithCovarianceStamped_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: pose_with_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose_with_covariance, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PoseWithCovarianceStamped_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PoseWithCovarianceStamped_Response__ros_msg_type * ros_message = static_cast<_PoseWithCovarianceStamped_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: pose_with_covariance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose_with_covariance))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_localization_msgs
size_t get_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PoseWithCovarianceStamped_Response__ros_msg_type * ros_message = static_cast<const _PoseWithCovarianceStamped_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_with_covariance

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
    &(ros_message->pose_with_covariance), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PoseWithCovarianceStamped_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_localization_msgs
size_t max_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pose_with_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PoseWithCovarianceStamped_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PoseWithCovarianceStamped_Response = {
  "tier4_localization_msgs::srv",
  "PoseWithCovarianceStamped_Response",
  _PoseWithCovarianceStamped_Response__cdr_serialize,
  _PoseWithCovarianceStamped_Response__cdr_deserialize,
  _PoseWithCovarianceStamped_Response__get_serialized_size,
  _PoseWithCovarianceStamped_Response__max_serialized_size
};

static rosidl_message_type_support_t _PoseWithCovarianceStamped_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PoseWithCovarianceStamped_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Response)() {
  return &_PoseWithCovarianceStamped_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tier4_localization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_localization_msgs/srv/pose_with_covariance_stamped.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PoseWithCovarianceStamped__callbacks = {
  "tier4_localization_msgs::srv",
  "PoseWithCovarianceStamped",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Response)(),
};

static rosidl_service_type_support_t PoseWithCovarianceStamped__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PoseWithCovarianceStamped__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped)() {
  return &PoseWithCovarianceStamped__handle;
}

#if defined(__cplusplus)
}
#endif
