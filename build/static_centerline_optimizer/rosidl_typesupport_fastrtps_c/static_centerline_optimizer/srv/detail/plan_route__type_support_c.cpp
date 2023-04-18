// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from static_centerline_optimizer:srv/PlanRoute.idl
// generated code does not contain a copyright notice
#include "static_centerline_optimizer/srv/detail/plan_route__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "static_centerline_optimizer/srv/detail/plan_route__struct.h"
#include "static_centerline_optimizer/srv/detail/plan_route__functions.h"
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


using _PlanRoute_Request__ros_msg_type = static_centerline_optimizer__srv__PlanRoute_Request;

static bool _PlanRoute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanRoute_Request__ros_msg_type * ros_message = static_cast<const _PlanRoute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_lane_id
  {
    cdr << ros_message->start_lane_id;
  }

  // Field name: end_lane_id
  {
    cdr << ros_message->end_lane_id;
  }

  return true;
}

static bool _PlanRoute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanRoute_Request__ros_msg_type * ros_message = static_cast<_PlanRoute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_lane_id
  {
    cdr >> ros_message->start_lane_id;
  }

  // Field name: end_lane_id
  {
    cdr >> ros_message->end_lane_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t get_serialized_size_static_centerline_optimizer__srv__PlanRoute_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanRoute_Request__ros_msg_type * ros_message = static_cast<const _PlanRoute_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_lane_id
  {
    size_t item_size = sizeof(ros_message->start_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_lane_id
  {
    size_t item_size = sizeof(ros_message->end_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanRoute_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_static_centerline_optimizer__srv__PlanRoute_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t max_serialized_size_static_centerline_optimizer__srv__PlanRoute_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: start_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanRoute_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_static_centerline_optimizer__srv__PlanRoute_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanRoute_Request = {
  "static_centerline_optimizer::srv",
  "PlanRoute_Request",
  _PlanRoute_Request__cdr_serialize,
  _PlanRoute_Request__cdr_deserialize,
  _PlanRoute_Request__get_serialized_size,
  _PlanRoute_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlanRoute_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanRoute_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanRoute_Request)() {
  return &_PlanRoute_Request__type_support;
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
// #include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_route__struct.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_route__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // lane_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // lane_ids
#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _PlanRoute_Response__ros_msg_type = static_centerline_optimizer__srv__PlanRoute_Response;

static bool _PlanRoute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanRoute_Response__ros_msg_type * ros_message = static_cast<const _PlanRoute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_ids
  {
    size_t size = ros_message->lane_ids.size;
    auto array_ptr = ros_message->lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
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

static bool _PlanRoute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanRoute_Response__ros_msg_type * ros_message = static_cast<_PlanRoute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_ids.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->lane_ids);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->lane_ids.data;
    cdr.deserializeArray(array_ptr, size);
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t get_serialized_size_static_centerline_optimizer__srv__PlanRoute_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanRoute_Response__ros_msg_type * ros_message = static_cast<const _PlanRoute_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_ids
  {
    size_t array_size = ros_message->lane_ids.size;
    auto array_ptr = ros_message->lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _PlanRoute_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_static_centerline_optimizer__srv__PlanRoute_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t max_serialized_size_static_centerline_optimizer__srv__PlanRoute_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lane_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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

static size_t _PlanRoute_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_static_centerline_optimizer__srv__PlanRoute_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanRoute_Response = {
  "static_centerline_optimizer::srv",
  "PlanRoute_Response",
  _PlanRoute_Response__cdr_serialize,
  _PlanRoute_Response__cdr_deserialize,
  _PlanRoute_Response__get_serialized_size,
  _PlanRoute_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlanRoute_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanRoute_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanRoute_Response)() {
  return &_PlanRoute_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "static_centerline_optimizer/srv/plan_route.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlanRoute__callbacks = {
  "static_centerline_optimizer::srv",
  "PlanRoute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanRoute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanRoute_Response)(),
};

static rosidl_service_type_support_t PlanRoute__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlanRoute__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanRoute)() {
  return &PlanRoute__handle;
}

#if defined(__cplusplus)
}
#endif
