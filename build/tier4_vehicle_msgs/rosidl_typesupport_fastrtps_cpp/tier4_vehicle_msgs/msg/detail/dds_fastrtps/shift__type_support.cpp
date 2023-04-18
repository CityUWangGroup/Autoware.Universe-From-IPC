// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_vehicle_msgs:msg/Shift.idl
// generated code does not contain a copyright notice
#include "tier4_vehicle_msgs/msg/detail/shift__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_vehicle_msgs/msg/detail/shift__struct.hpp"

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

namespace tier4_vehicle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
cdr_serialize(
  const tier4_vehicle_msgs::msg::Shift & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  cdr << ros_message.data;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_vehicle_msgs::msg::Shift & ros_message)
{
  // Member: data
  cdr >> ros_message.data;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
get_serialized_size(
  const tier4_vehicle_msgs::msg::Shift & ros_message,
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
max_serialized_size_Shift(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Shift__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_vehicle_msgs::msg::Shift *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Shift__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_vehicle_msgs::msg::Shift *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Shift__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_vehicle_msgs::msg::Shift *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Shift__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Shift(full_bounded, 0);
}

static message_type_support_callbacks_t _Shift__callbacks = {
  "tier4_vehicle_msgs::msg",
  "Shift",
  _Shift__cdr_serialize,
  _Shift__cdr_deserialize,
  _Shift__get_serialized_size,
  _Shift__max_serialized_size
};

static rosidl_message_type_support_t _Shift__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Shift__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_vehicle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_vehicle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_vehicle_msgs::msg::Shift>()
{
  return &tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::_Shift__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_vehicle_msgs, msg, Shift)() {
  return &tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::_Shift__handle;
}

#ifdef __cplusplus
}
#endif
