// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_control_msgs:srv/ExternalCommandSelect.idl
// generated code does not contain a copyright notice
#include "tier4_control_msgs/srv/detail/external_command_select__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_control_msgs/srv/detail/external_command_select__struct.h"
#include "tier4_control_msgs/srv/detail/external_command_select__functions.h"
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

#include "tier4_control_msgs/msg/detail/external_command_selector_mode__functions.h"  // mode

// forward declare type support functions
size_t get_serialized_size_tier4_control_msgs__msg__ExternalCommandSelectorMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_control_msgs__msg__ExternalCommandSelectorMode(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, msg, ExternalCommandSelectorMode)();


using _ExternalCommandSelect_Request__ros_msg_type = tier4_control_msgs__srv__ExternalCommandSelect_Request;

static bool _ExternalCommandSelect_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExternalCommandSelect_Request__ros_msg_type * ros_message = static_cast<const _ExternalCommandSelect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_control_msgs, msg, ExternalCommandSelectorMode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mode, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ExternalCommandSelect_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExternalCommandSelect_Request__ros_msg_type * ros_message = static_cast<_ExternalCommandSelect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_control_msgs, msg, ExternalCommandSelectorMode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mode))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t get_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExternalCommandSelect_Request__ros_msg_type * ros_message = static_cast<const _ExternalCommandSelect_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode

  current_alignment += get_serialized_size_tier4_control_msgs__msg__ExternalCommandSelectorMode(
    &(ros_message->mode), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ExternalCommandSelect_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t max_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Request(
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


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tier4_control_msgs__msg__ExternalCommandSelectorMode(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ExternalCommandSelect_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ExternalCommandSelect_Request = {
  "tier4_control_msgs::srv",
  "ExternalCommandSelect_Request",
  _ExternalCommandSelect_Request__cdr_serialize,
  _ExternalCommandSelect_Request__cdr_deserialize,
  _ExternalCommandSelect_Request__get_serialized_size,
  _ExternalCommandSelect_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExternalCommandSelect_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExternalCommandSelect_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, ExternalCommandSelect_Request)() {
  return &_ExternalCommandSelect_Request__type_support;
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
// #include "tier4_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tier4_control_msgs/srv/detail/external_command_select__struct.h"
// already included above
// #include "tier4_control_msgs/srv/detail/external_command_select__functions.h"
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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _ExternalCommandSelect_Response__ros_msg_type = tier4_control_msgs__srv__ExternalCommandSelect_Response;

static bool _ExternalCommandSelect_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExternalCommandSelect_Response__ros_msg_type * ros_message = static_cast<const _ExternalCommandSelect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

static bool _ExternalCommandSelect_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExternalCommandSelect_Response__ros_msg_type * ros_message = static_cast<_ExternalCommandSelect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t get_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExternalCommandSelect_Response__ros_msg_type * ros_message = static_cast<const _ExternalCommandSelect_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ExternalCommandSelect_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_control_msgs
size_t max_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Response(
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
  // member: message
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

static size_t _ExternalCommandSelect_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tier4_control_msgs__srv__ExternalCommandSelect_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ExternalCommandSelect_Response = {
  "tier4_control_msgs::srv",
  "ExternalCommandSelect_Response",
  _ExternalCommandSelect_Response__cdr_serialize,
  _ExternalCommandSelect_Response__cdr_deserialize,
  _ExternalCommandSelect_Response__get_serialized_size,
  _ExternalCommandSelect_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExternalCommandSelect_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExternalCommandSelect_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, ExternalCommandSelect_Response)() {
  return &_ExternalCommandSelect_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tier4_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_control_msgs/srv/external_command_select.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ExternalCommandSelect__callbacks = {
  "tier4_control_msgs::srv",
  "ExternalCommandSelect",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, ExternalCommandSelect_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, ExternalCommandSelect_Response)(),
};

static rosidl_service_type_support_t ExternalCommandSelect__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ExternalCommandSelect__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_control_msgs, srv, ExternalCommandSelect)() {
  return &ExternalCommandSelect__handle;
}

#if defined(__cplusplus)
}
#endif
