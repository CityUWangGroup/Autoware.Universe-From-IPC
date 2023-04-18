// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:srv/MoraiScenarioLoadSrv.idl
// generated code does not contain a copyright notice
#include "morai_msgs/srv/detail/morai_scenario_load_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/srv/detail/morai_scenario_load_srv__struct.h"
#include "morai_msgs/srv/detail/morai_scenario_load_srv__functions.h"
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

#include "morai_msgs/msg/detail/scenario_load__functions.h"  // request

// forward declare type support functions
size_t get_serialized_size_morai_msgs__msg__ScenarioLoad(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__ScenarioLoad(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, ScenarioLoad)();


using _MoraiScenarioLoadSrv_Request__ros_msg_type = morai_msgs__srv__MoraiScenarioLoadSrv_Request;

static bool _MoraiScenarioLoadSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoraiScenarioLoadSrv_Request__ros_msg_type * ros_message = static_cast<const _MoraiScenarioLoadSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, ScenarioLoad
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->request, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MoraiScenarioLoadSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoraiScenarioLoadSrv_Request__ros_msg_type * ros_message = static_cast<_MoraiScenarioLoadSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, ScenarioLoad
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->request))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoraiScenarioLoadSrv_Request__ros_msg_type * ros_message = static_cast<const _MoraiScenarioLoadSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request

  current_alignment += get_serialized_size_morai_msgs__msg__ScenarioLoad(
    &(ros_message->request), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MoraiScenarioLoadSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: request
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__ScenarioLoad(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MoraiScenarioLoadSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MoraiScenarioLoadSrv_Request = {
  "morai_msgs::srv",
  "MoraiScenarioLoadSrv_Request",
  _MoraiScenarioLoadSrv_Request__cdr_serialize,
  _MoraiScenarioLoadSrv_Request__cdr_deserialize,
  _MoraiScenarioLoadSrv_Request__get_serialized_size,
  _MoraiScenarioLoadSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _MoraiScenarioLoadSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoraiScenarioLoadSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, srv, MoraiScenarioLoadSrv_Request)() {
  return &_MoraiScenarioLoadSrv_Request__type_support;
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
// #include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "morai_msgs/srv/detail/morai_scenario_load_srv__struct.h"
// already included above
// #include "morai_msgs/srv/detail/morai_scenario_load_srv__functions.h"
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

#include "morai_msgs/msg/detail/morai_srv_response__functions.h"  // response

// forward declare type support functions
size_t get_serialized_size_morai_msgs__msg__MoraiSrvResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_morai_msgs__msg__MoraiSrvResponse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, MoraiSrvResponse)();


using _MoraiScenarioLoadSrv_Response__ros_msg_type = morai_msgs__srv__MoraiScenarioLoadSrv_Response;

static bool _MoraiScenarioLoadSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoraiScenarioLoadSrv_Response__ros_msg_type * ros_message = static_cast<const _MoraiScenarioLoadSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, MoraiSrvResponse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MoraiScenarioLoadSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoraiScenarioLoadSrv_Response__ros_msg_type * ros_message = static_cast<_MoraiScenarioLoadSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, morai_msgs, msg, MoraiSrvResponse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoraiScenarioLoadSrv_Response__ros_msg_type * ros_message = static_cast<const _MoraiScenarioLoadSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response

  current_alignment += get_serialized_size_morai_msgs__msg__MoraiSrvResponse(
    &(ros_message->response), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MoraiScenarioLoadSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_morai_msgs__msg__MoraiSrvResponse(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MoraiScenarioLoadSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__srv__MoraiScenarioLoadSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MoraiScenarioLoadSrv_Response = {
  "morai_msgs::srv",
  "MoraiScenarioLoadSrv_Response",
  _MoraiScenarioLoadSrv_Response__cdr_serialize,
  _MoraiScenarioLoadSrv_Response__cdr_deserialize,
  _MoraiScenarioLoadSrv_Response__get_serialized_size,
  _MoraiScenarioLoadSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _MoraiScenarioLoadSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoraiScenarioLoadSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, srv, MoraiScenarioLoadSrv_Response)() {
  return &_MoraiScenarioLoadSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/srv/morai_scenario_load_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MoraiScenarioLoadSrv__callbacks = {
  "morai_msgs::srv",
  "MoraiScenarioLoadSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, srv, MoraiScenarioLoadSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, srv, MoraiScenarioLoadSrv_Response)(),
};

static rosidl_service_type_support_t MoraiScenarioLoadSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MoraiScenarioLoadSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, srv, MoraiScenarioLoadSrv)() {
  return &MoraiScenarioLoadSrv__handle;
}

#if defined(__cplusplus)
}
#endif
