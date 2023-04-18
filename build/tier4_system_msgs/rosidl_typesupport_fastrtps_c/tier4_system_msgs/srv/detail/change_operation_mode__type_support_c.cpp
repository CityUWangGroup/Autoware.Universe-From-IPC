// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_system_msgs:srv/ChangeOperationMode.idl
// generated code does not contain a copyright notice
#include "tier4_system_msgs/srv/detail/change_operation_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_system_msgs/srv/detail/change_operation_mode__struct.h"
#include "tier4_system_msgs/srv/detail/change_operation_mode__functions.h"
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


// forward declare type support functions


using _ChangeOperationMode_Request__ros_msg_type = tier4_system_msgs__srv__ChangeOperationMode_Request;

static bool _ChangeOperationMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeOperationMode_Request__ros_msg_type * ros_message = static_cast<const _ChangeOperationMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  return true;
}

static bool _ChangeOperationMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeOperationMode_Request__ros_msg_type * ros_message = static_cast<_ChangeOperationMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_system_msgs
size_t get_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeOperationMode_Request__ros_msg_type * ros_message = static_cast<const _ChangeOperationMode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeOperationMode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_system_msgs
size_t max_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ChangeOperationMode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ChangeOperationMode_Request = {
  "tier4_system_msgs::srv",
  "ChangeOperationMode_Request",
  _ChangeOperationMode_Request__cdr_serialize,
  _ChangeOperationMode_Request__cdr_deserialize,
  _ChangeOperationMode_Request__get_serialized_size,
  _ChangeOperationMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChangeOperationMode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeOperationMode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_system_msgs, srv, ChangeOperationMode_Request)() {
  return &_ChangeOperationMode_Request__type_support;
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
// #include "tier4_system_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_operation_mode__struct.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_operation_mode__functions.h"
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

#include "autoware_common_msgs/msg/detail/response_status__functions.h"  // status

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_system_msgs
size_t get_serialized_size_autoware_common_msgs__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_system_msgs
size_t max_serialized_size_autoware_common_msgs__msg__ResponseStatus(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_system_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_common_msgs, msg, ResponseStatus)();


using _ChangeOperationMode_Response__ros_msg_type = tier4_system_msgs__srv__ChangeOperationMode_Response;

static bool _ChangeOperationMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeOperationMode_Response__ros_msg_type * ros_message = static_cast<const _ChangeOperationMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_common_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ChangeOperationMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeOperationMode_Response__ros_msg_type * ros_message = static_cast<_ChangeOperationMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_common_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_system_msgs
size_t get_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeOperationMode_Response__ros_msg_type * ros_message = static_cast<const _ChangeOperationMode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_autoware_common_msgs__msg__ResponseStatus(
    &(ros_message->status), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeOperationMode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_system_msgs
size_t max_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_common_msgs__msg__ResponseStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ChangeOperationMode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_system_msgs__srv__ChangeOperationMode_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ChangeOperationMode_Response = {
  "tier4_system_msgs::srv",
  "ChangeOperationMode_Response",
  _ChangeOperationMode_Response__cdr_serialize,
  _ChangeOperationMode_Response__cdr_deserialize,
  _ChangeOperationMode_Response__get_serialized_size,
  _ChangeOperationMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChangeOperationMode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeOperationMode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_system_msgs, srv, ChangeOperationMode_Response)() {
  return &_ChangeOperationMode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tier4_system_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_system_msgs/srv/change_operation_mode.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ChangeOperationMode__callbacks = {
  "tier4_system_msgs::srv",
  "ChangeOperationMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_system_msgs, srv, ChangeOperationMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_system_msgs, srv, ChangeOperationMode_Response)(),
};

static rosidl_service_type_support_t ChangeOperationMode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ChangeOperationMode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_system_msgs, srv, ChangeOperationMode)() {
  return &ChangeOperationMode__handle;
}

#if defined(__cplusplus)
}
#endif
