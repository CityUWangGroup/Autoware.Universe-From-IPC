// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_hmi_msgs:srv/Announce.idl
// generated code does not contain a copyright notice
#include "tier4_hmi_msgs/srv/detail/announce__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_hmi_msgs/srv/detail/announce__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tier4_hmi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
cdr_serialize(
  const tier4_hmi_msgs::srv::Announce_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kind
  cdr << ros_message.kind;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_hmi_msgs::srv::Announce_Request & ros_message)
{
  // Member: kind
  cdr >> ros_message.kind;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
get_serialized_size(
  const tier4_hmi_msgs::srv::Announce_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kind
  {
    size_t item_size = sizeof(ros_message.kind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
max_serialized_size_Announce_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: kind
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Announce_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_hmi_msgs::srv::Announce_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Announce_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_hmi_msgs::srv::Announce_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Announce_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_hmi_msgs::srv::Announce_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Announce_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Announce_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Announce_Request__callbacks = {
  "tier4_hmi_msgs::srv",
  "Announce_Request",
  _Announce_Request__cdr_serialize,
  _Announce_Request__cdr_deserialize,
  _Announce_Request__get_serialized_size,
  _Announce_Request__max_serialized_size
};

static rosidl_message_type_support_t _Announce_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Announce_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tier4_hmi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_hmi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_hmi_msgs::srv::Announce_Request>()
{
  return &tier4_hmi_msgs::srv::typesupport_fastrtps_cpp::_Announce_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_hmi_msgs, srv, Announce_Request)() {
  return &tier4_hmi_msgs::srv::typesupport_fastrtps_cpp::_Announce_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tier4_external_api_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_external_api_msgs::msg::ResponseStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_external_api_msgs::msg::ResponseStatus &);
size_t get_serialized_size(
  const tier4_external_api_msgs::msg::ResponseStatus &,
  size_t current_alignment);
size_t
max_serialized_size_ResponseStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_external_api_msgs


namespace tier4_hmi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
cdr_serialize(
  const tier4_hmi_msgs::srv::Announce_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_hmi_msgs::srv::Announce_Response & ros_message)
{
  // Member: status
  tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
get_serialized_size(
  const tier4_hmi_msgs::srv::Announce_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status

  current_alignment +=
    tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_hmi_msgs
max_serialized_size_Announce_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ResponseStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Announce_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_hmi_msgs::srv::Announce_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Announce_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_hmi_msgs::srv::Announce_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Announce_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_hmi_msgs::srv::Announce_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Announce_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Announce_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Announce_Response__callbacks = {
  "tier4_hmi_msgs::srv",
  "Announce_Response",
  _Announce_Response__cdr_serialize,
  _Announce_Response__cdr_deserialize,
  _Announce_Response__get_serialized_size,
  _Announce_Response__max_serialized_size
};

static rosidl_message_type_support_t _Announce_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Announce_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tier4_hmi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_hmi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_hmi_msgs::srv::Announce_Response>()
{
  return &tier4_hmi_msgs::srv::typesupport_fastrtps_cpp::_Announce_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_hmi_msgs, srv, Announce_Response)() {
  return &tier4_hmi_msgs::srv::typesupport_fastrtps_cpp::_Announce_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tier4_hmi_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Announce__callbacks = {
  "tier4_hmi_msgs::srv",
  "Announce",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_hmi_msgs, srv, Announce_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_hmi_msgs, srv, Announce_Response)(),
};

static rosidl_service_type_support_t _Announce__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Announce__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tier4_hmi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_hmi_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<tier4_hmi_msgs::srv::Announce>()
{
  return &tier4_hmi_msgs::srv::typesupport_fastrtps_cpp::_Announce__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_hmi_msgs, srv, Announce)() {
  return &tier4_hmi_msgs::srv::typesupport_fastrtps_cpp::_Announce__handle;
}

#ifdef __cplusplus
}
#endif
