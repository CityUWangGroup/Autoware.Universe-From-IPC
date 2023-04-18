// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommandArray.idl
// generated code does not contain a copyright notice
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace tier4_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_v2x_msgs::msg::InfrastructureCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_v2x_msgs::msg::InfrastructureCommand &);
size_t get_serialized_size(
  const tier4_v2x_msgs::msg::InfrastructureCommand &,
  size_t current_alignment);
size_t
max_serialized_size_InfrastructureCommand(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_v2x_msgs


namespace tier4_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_v2x_msgs
cdr_serialize(
  const tier4_v2x_msgs::msg::InfrastructureCommandArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: commands
  {
    size_t size = ros_message.commands.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tier4_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.commands[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_v2x_msgs::msg::InfrastructureCommandArray & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: commands
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.commands.resize(size);
    for (size_t i = 0; i < size; i++) {
      tier4_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.commands[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_v2x_msgs
get_serialized_size(
  const tier4_v2x_msgs::msg::InfrastructureCommandArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: commands
  {
    size_t array_size = ros_message.commands.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.commands[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_v2x_msgs
max_serialized_size_InfrastructureCommandArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_InfrastructureCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _InfrastructureCommandArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_v2x_msgs::msg::InfrastructureCommandArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InfrastructureCommandArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_v2x_msgs::msg::InfrastructureCommandArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InfrastructureCommandArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_v2x_msgs::msg::InfrastructureCommandArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InfrastructureCommandArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InfrastructureCommandArray(full_bounded, 0);
}

static message_type_support_callbacks_t _InfrastructureCommandArray__callbacks = {
  "tier4_v2x_msgs::msg",
  "InfrastructureCommandArray",
  _InfrastructureCommandArray__cdr_serialize,
  _InfrastructureCommandArray__cdr_deserialize,
  _InfrastructureCommandArray__get_serialized_size,
  _InfrastructureCommandArray__max_serialized_size
};

static rosidl_message_type_support_t _InfrastructureCommandArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InfrastructureCommandArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_v2x_msgs::msg::InfrastructureCommandArray>()
{
  return &tier4_v2x_msgs::msg::typesupport_fastrtps_cpp::_InfrastructureCommandArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_v2x_msgs, msg, InfrastructureCommandArray)() {
  return &tier4_v2x_msgs::msg::typesupport_fastrtps_cpp::_InfrastructureCommandArray__handle;
}

#ifdef __cplusplus
}
#endif
