// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_control_msgs:msg/ExternalCommandSelectorMode.idl
// generated code does not contain a copyright notice
#include "tier4_control_msgs/msg/detail/external_command_selector_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_control_msgs/msg/detail/external_command_selector_mode__struct.hpp"

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

namespace tier4_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_control_msgs
cdr_serialize(
  const tier4_control_msgs::msg::ExternalCommandSelectorMode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  cdr << ros_message.data;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_control_msgs::msg::ExternalCommandSelectorMode & ros_message)
{
  // Member: data
  cdr >> ros_message.data;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_control_msgs
get_serialized_size(
  const tier4_control_msgs::msg::ExternalCommandSelectorMode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data
  {
    size_t item_size = sizeof(ros_message.data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_control_msgs
max_serialized_size_ExternalCommandSelectorMode(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ExternalCommandSelectorMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_control_msgs::msg::ExternalCommandSelectorMode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExternalCommandSelectorMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_control_msgs::msg::ExternalCommandSelectorMode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExternalCommandSelectorMode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_control_msgs::msg::ExternalCommandSelectorMode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExternalCommandSelectorMode__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ExternalCommandSelectorMode(full_bounded, 0);
}

static message_type_support_callbacks_t _ExternalCommandSelectorMode__callbacks = {
  "tier4_control_msgs::msg",
  "ExternalCommandSelectorMode",
  _ExternalCommandSelectorMode__cdr_serialize,
  _ExternalCommandSelectorMode__cdr_deserialize,
  _ExternalCommandSelectorMode__get_serialized_size,
  _ExternalCommandSelectorMode__max_serialized_size
};

static rosidl_message_type_support_t _ExternalCommandSelectorMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExternalCommandSelectorMode__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_control_msgs::msg::ExternalCommandSelectorMode>()
{
  return &tier4_control_msgs::msg::typesupport_fastrtps_cpp::_ExternalCommandSelectorMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_control_msgs, msg, ExternalCommandSelectorMode)() {
  return &tier4_control_msgs::msg::typesupport_fastrtps_cpp::_ExternalCommandSelectorMode__handle;
}

#ifdef __cplusplus
}
#endif
