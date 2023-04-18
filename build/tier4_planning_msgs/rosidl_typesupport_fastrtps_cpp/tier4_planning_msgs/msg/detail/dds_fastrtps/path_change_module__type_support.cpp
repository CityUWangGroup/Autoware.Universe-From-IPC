// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/path_change_module__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_planning_msgs/msg/detail/path_change_module__struct.hpp"

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

namespace tier4_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_planning_msgs::msg::PathChangeModuleId &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_planning_msgs::msg::PathChangeModuleId &);
size_t get_serialized_size(
  const tier4_planning_msgs::msg::PathChangeModuleId &,
  size_t current_alignment);
size_t
max_serialized_size_PathChangeModuleId(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_planning_msgs


namespace tier4_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_serialize(
  const tier4_planning_msgs::msg::PathChangeModule & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: module
  tier4_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.module,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_planning_msgs::msg::PathChangeModule & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: module
  tier4_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.module);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
get_serialized_size(
  const tier4_planning_msgs::msg::PathChangeModule & ros_message,
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
  // Member: module

  current_alignment +=
    tier4_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.module, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
max_serialized_size_PathChangeModule(
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

  // Member: module
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PathChangeModuleId(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathChangeModule__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::PathChangeModule *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathChangeModule__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_planning_msgs::msg::PathChangeModule *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathChangeModule__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::PathChangeModule *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathChangeModule__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathChangeModule(full_bounded, 0);
}

static message_type_support_callbacks_t _PathChangeModule__callbacks = {
  "tier4_planning_msgs::msg",
  "PathChangeModule",
  _PathChangeModule__cdr_serialize,
  _PathChangeModule__cdr_deserialize,
  _PathChangeModule__get_serialized_size,
  _PathChangeModule__max_serialized_size
};

static rosidl_message_type_support_t _PathChangeModule__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathChangeModule__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_planning_msgs::msg::PathChangeModule>()
{
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_PathChangeModule__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_planning_msgs, msg, PathChangeModule)() {
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_PathChangeModule__handle;
}

#ifdef __cplusplus
}
#endif
