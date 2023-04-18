// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__struct.hpp"

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
namespace morai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const morai_msgs::msg::CtrlCmd &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  morai_msgs::msg::CtrlCmd &);
size_t get_serialized_size(
  const morai_msgs::msg::CtrlCmd &,
  size_t current_alignment);
size_t
max_serialized_size_CtrlCmd(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace morai_msgs


namespace morai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::msg::SyncModeCtrlCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: frame
  cdr << ros_message.frame;
  // Member: command
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.command,
    cdr);
  // Member: sensor_capture
  cdr << (ros_message.sensor_capture ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::msg::SyncModeCtrlCmd & ros_message)
{
  // Member: frame
  cdr >> ros_message.frame;

  // Member: command
  morai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.command);

  // Member: sensor_capture
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sensor_capture = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::msg::SyncModeCtrlCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: frame
  {
    size_t item_size = sizeof(ros_message.frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: command

  current_alignment +=
    morai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.command, current_alignment);
  // Member: sensor_capture
  {
    size_t item_size = sizeof(ros_message.sensor_capture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_SyncModeCtrlCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CtrlCmd(
        full_bounded, current_alignment);
    }
  }

  // Member: sensor_capture
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SyncModeCtrlCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::SyncModeCtrlCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SyncModeCtrlCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<morai_msgs::msg::SyncModeCtrlCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SyncModeCtrlCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::SyncModeCtrlCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SyncModeCtrlCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SyncModeCtrlCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _SyncModeCtrlCmd__callbacks = {
  "morai_msgs::msg",
  "SyncModeCtrlCmd",
  _SyncModeCtrlCmd__cdr_serialize,
  _SyncModeCtrlCmd__cdr_deserialize,
  _SyncModeCtrlCmd__get_serialized_size,
  _SyncModeCtrlCmd__max_serialized_size
};

static rosidl_message_type_support_t _SyncModeCtrlCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SyncModeCtrlCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::SyncModeCtrlCmd>()
{
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_SyncModeCtrlCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, msg, SyncModeCtrlCmd)() {
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_SyncModeCtrlCmd__handle;
}

#ifdef __cplusplus
}
#endif
