// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__struct.hpp"

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

namespace tier4_external_api_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_serialize(
  const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
get_serialized_size(
  const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
max_serialized_size_GetAccelBrakeMapCalibrationData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetAccelBrakeMapCalibrationData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAccelBrakeMapCalibrationData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAccelBrakeMapCalibrationData_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAccelBrakeMapCalibrationData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAccelBrakeMapCalibrationData_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAccelBrakeMapCalibrationData_Request__callbacks = {
  "tier4_external_api_msgs::srv",
  "GetAccelBrakeMapCalibrationData_Request",
  _GetAccelBrakeMapCalibrationData_Request__cdr_serialize,
  _GetAccelBrakeMapCalibrationData_Request__cdr_deserialize,
  _GetAccelBrakeMapCalibrationData_Request__get_serialized_size,
  _GetAccelBrakeMapCalibrationData_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAccelBrakeMapCalibrationData_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAccelBrakeMapCalibrationData_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>()
{
  return &tier4_external_api_msgs::srv::typesupport_fastrtps_cpp::_GetAccelBrakeMapCalibrationData_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Request)() {
  return &tier4_external_api_msgs::srv::typesupport_fastrtps_cpp::_GetAccelBrakeMapCalibrationData_Request__handle;
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_serialize(
  const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: graph_image
  {
    cdr << ros_message.graph_image;
  }
  // Member: accel_map
  cdr << ros_message.accel_map;
  // Member: brake_map
  cdr << ros_message.brake_map;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & ros_message)
{
  // Member: graph_image
  {
    cdr >> ros_message.graph_image;
  }

  // Member: accel_map
  cdr >> ros_message.accel_map;

  // Member: brake_map
  cdr >> ros_message.brake_map;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
get_serialized_size(
  const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: graph_image
  {
    size_t array_size = ros_message.graph_image.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.graph_image[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_map
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.accel_map.size() + 1);
  // Member: brake_map
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.brake_map.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
max_serialized_size_GetAccelBrakeMapCalibrationData_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: graph_image
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_map
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: brake_map
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

static bool _GetAccelBrakeMapCalibrationData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAccelBrakeMapCalibrationData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAccelBrakeMapCalibrationData_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAccelBrakeMapCalibrationData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAccelBrakeMapCalibrationData_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAccelBrakeMapCalibrationData_Response__callbacks = {
  "tier4_external_api_msgs::srv",
  "GetAccelBrakeMapCalibrationData_Response",
  _GetAccelBrakeMapCalibrationData_Response__cdr_serialize,
  _GetAccelBrakeMapCalibrationData_Response__cdr_deserialize,
  _GetAccelBrakeMapCalibrationData_Response__get_serialized_size,
  _GetAccelBrakeMapCalibrationData_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAccelBrakeMapCalibrationData_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAccelBrakeMapCalibrationData_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>()
{
  return &tier4_external_api_msgs::srv::typesupport_fastrtps_cpp::_GetAccelBrakeMapCalibrationData_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Response)() {
  return &tier4_external_api_msgs::srv::typesupport_fastrtps_cpp::_GetAccelBrakeMapCalibrationData_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tier4_external_api_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetAccelBrakeMapCalibrationData__callbacks = {
  "tier4_external_api_msgs::srv",
  "GetAccelBrakeMapCalibrationData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Response)(),
};

static rosidl_service_type_support_t _GetAccelBrakeMapCalibrationData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAccelBrakeMapCalibrationData__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_external_api_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData>()
{
  return &tier4_external_api_msgs::srv::typesupport_fastrtps_cpp::_GetAccelBrakeMapCalibrationData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData)() {
  return &tier4_external_api_msgs::srv::typesupport_fastrtps_cpp::_GetAccelBrakeMapCalibrationData__handle;
}

#ifdef __cplusplus
}
#endif
