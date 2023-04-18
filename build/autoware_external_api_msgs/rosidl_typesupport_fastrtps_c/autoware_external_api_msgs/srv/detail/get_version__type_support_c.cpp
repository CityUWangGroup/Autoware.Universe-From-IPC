// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_external_api_msgs:srv/GetVersion.idl
// generated code does not contain a copyright notice
#include "autoware_external_api_msgs/srv/detail/get_version__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_external_api_msgs/srv/detail/get_version__struct.h"
#include "autoware_external_api_msgs/srv/detail/get_version__functions.h"
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


using _GetVersion_Request__ros_msg_type = autoware_external_api_msgs__srv__GetVersion_Request;

static bool _GetVersion_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVersion_Request__ros_msg_type * ros_message = static_cast<const _GetVersion_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetVersion_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVersion_Request__ros_msg_type * ros_message = static_cast<_GetVersion_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_external_api_msgs
size_t get_serialized_size_autoware_external_api_msgs__srv__GetVersion_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVersion_Request__ros_msg_type * ros_message = static_cast<const _GetVersion_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetVersion_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_external_api_msgs__srv__GetVersion_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_external_api_msgs
size_t max_serialized_size_autoware_external_api_msgs__srv__GetVersion_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetVersion_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_external_api_msgs__srv__GetVersion_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetVersion_Request = {
  "autoware_external_api_msgs::srv",
  "GetVersion_Request",
  _GetVersion_Request__cdr_serialize,
  _GetVersion_Request__cdr_deserialize,
  _GetVersion_Request__get_serialized_size,
  _GetVersion_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetVersion_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVersion_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_external_api_msgs, srv, GetVersion_Request)() {
  return &_GetVersion_Request__type_support;
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
// #include "autoware_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autoware_external_api_msgs/srv/detail/get_version__struct.h"
// already included above
// #include "autoware_external_api_msgs/srv/detail/get_version__functions.h"
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

#include "rosidl_runtime_c/string.h"  // version
#include "rosidl_runtime_c/string_functions.h"  // version
#include "tier4_external_api_msgs/msg/detail/response_status__functions.h"  // status

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_external_api_msgs
size_t get_serialized_size_tier4_external_api_msgs__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_external_api_msgs
size_t max_serialized_size_tier4_external_api_msgs__msg__ResponseStatus(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_external_api_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, ResponseStatus)();


using _GetVersion_Response__ros_msg_type = autoware_external_api_msgs__srv__GetVersion_Response;

static bool _GetVersion_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVersion_Response__ros_msg_type * ros_message = static_cast<const _GetVersion_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  // Field name: version
  {
    const rosidl_runtime_c__String * str = &ros_message->version;
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

static bool _GetVersion_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVersion_Response__ros_msg_type * ros_message = static_cast<_GetVersion_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  // Field name: version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version.data) {
      rosidl_runtime_c__String__init(&ros_message->version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_external_api_msgs
size_t get_serialized_size_autoware_external_api_msgs__srv__GetVersion_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVersion_Response__ros_msg_type * ros_message = static_cast<const _GetVersion_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_tier4_external_api_msgs__msg__ResponseStatus(
    &(ros_message->status), current_alignment);
  // field.name version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetVersion_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_external_api_msgs__srv__GetVersion_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_external_api_msgs
size_t max_serialized_size_autoware_external_api_msgs__srv__GetVersion_Response(
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
        max_serialized_size_tier4_external_api_msgs__msg__ResponseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: version
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

static size_t _GetVersion_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_external_api_msgs__srv__GetVersion_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetVersion_Response = {
  "autoware_external_api_msgs::srv",
  "GetVersion_Response",
  _GetVersion_Response__cdr_serialize,
  _GetVersion_Response__cdr_deserialize,
  _GetVersion_Response__get_serialized_size,
  _GetVersion_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetVersion_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVersion_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_external_api_msgs, srv, GetVersion_Response)() {
  return &_GetVersion_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autoware_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_external_api_msgs/srv/get_version.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetVersion__callbacks = {
  "autoware_external_api_msgs::srv",
  "GetVersion",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_external_api_msgs, srv, GetVersion_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_external_api_msgs, srv, GetVersion_Response)(),
};

static rosidl_service_type_support_t GetVersion__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetVersion__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_external_api_msgs, srv, GetVersion)() {
  return &GetVersion__handle;
}

#if defined(__cplusplus)
}
#endif
