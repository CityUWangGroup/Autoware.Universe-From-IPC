// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/error_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "control_performance_analysis/msg/detail/error_stamped__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace control_performance_analysis
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const control_performance_analysis::msg::Error &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  control_performance_analysis::msg::Error &);
size_t get_serialized_size(
  const control_performance_analysis::msg::Error &,
  size_t current_alignment);
size_t
max_serialized_size_Error(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace control_performance_analysis


namespace control_performance_analysis
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_serialize(
  const control_performance_analysis::msg::ErrorStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: error
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.error,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_performance_analysis::msg::ErrorStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: error
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.error);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
get_serialized_size(
  const control_performance_analysis::msg::ErrorStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: error

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.error, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
max_serialized_size_ErrorStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_Error(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ErrorStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const control_performance_analysis::msg::ErrorStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ErrorStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<control_performance_analysis::msg::ErrorStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ErrorStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const control_performance_analysis::msg::ErrorStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ErrorStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ErrorStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _ErrorStamped__callbacks = {
  "control_performance_analysis::msg",
  "ErrorStamped",
  _ErrorStamped__cdr_serialize,
  _ErrorStamped__cdr_deserialize,
  _ErrorStamped__get_serialized_size,
  _ErrorStamped__max_serialized_size
};

static rosidl_message_type_support_t _ErrorStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ErrorStamped__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace control_performance_analysis

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_control_performance_analysis
const rosidl_message_type_support_t *
get_message_type_support_handle<control_performance_analysis::msg::ErrorStamped>()
{
  return &control_performance_analysis::msg::typesupport_fastrtps_cpp::_ErrorStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_performance_analysis, msg, ErrorStamped)() {
  return &control_performance_analysis::msg::typesupport_fastrtps_cpp::_ErrorStamped__handle;
}

#ifdef __cplusplus
}
#endif
