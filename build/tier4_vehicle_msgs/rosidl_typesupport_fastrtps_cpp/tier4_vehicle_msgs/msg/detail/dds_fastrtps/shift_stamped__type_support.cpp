// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_vehicle_msgs:msg/ShiftStamped.idl
// generated code does not contain a copyright notice
#include "tier4_vehicle_msgs/msg/detail/shift_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_vehicle_msgs/msg/detail/shift_stamped__struct.hpp"

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

namespace tier4_vehicle_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_vehicle_msgs::msg::Shift &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_vehicle_msgs::msg::Shift &);
size_t get_serialized_size(
  const tier4_vehicle_msgs::msg::Shift &,
  size_t current_alignment);
size_t
max_serialized_size_Shift(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_vehicle_msgs


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
cdr_serialize(
  const tier4_vehicle_msgs::msg::ShiftStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: shift
  tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.shift,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_vehicle_msgs::msg::ShiftStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: shift
  tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.shift);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
get_serialized_size(
  const tier4_vehicle_msgs::msg::ShiftStamped & ros_message,
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
  // Member: shift

  current_alignment +=
    tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.shift, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_vehicle_msgs
max_serialized_size_ShiftStamped(
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

  // Member: shift
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Shift(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ShiftStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_vehicle_msgs::msg::ShiftStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShiftStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_vehicle_msgs::msg::ShiftStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShiftStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_vehicle_msgs::msg::ShiftStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShiftStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ShiftStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _ShiftStamped__callbacks = {
  "tier4_vehicle_msgs::msg",
  "ShiftStamped",
  _ShiftStamped__cdr_serialize,
  _ShiftStamped__cdr_deserialize,
  _ShiftStamped__get_serialized_size,
  _ShiftStamped__max_serialized_size
};

static rosidl_message_type_support_t _ShiftStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ShiftStamped__callbacks,
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
get_message_type_support_handle<tier4_vehicle_msgs::msg::ShiftStamped>()
{
  return &tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::_ShiftStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_vehicle_msgs, msg, ShiftStamped)() {
  return &tier4_vehicle_msgs::msg::typesupport_fastrtps_cpp::_ShiftStamped__handle;
}

#ifdef __cplusplus
}
#endif
