// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation_stamped__struct.hpp"

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

namespace autoware_sensing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_sensing_msgs::msg::GnssInsOrientation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_sensing_msgs::msg::GnssInsOrientation &);
size_t get_serialized_size(
  const autoware_sensing_msgs::msg::GnssInsOrientation &,
  size_t current_alignment);
size_t
max_serialized_size_GnssInsOrientation(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_sensing_msgs


namespace autoware_sensing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_serialize(
  const autoware_sensing_msgs::msg::GnssInsOrientationStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: orientation
  autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.orientation,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_sensing_msgs::msg::GnssInsOrientationStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: orientation
  autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.orientation);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
get_serialized_size(
  const autoware_sensing_msgs::msg::GnssInsOrientationStamped & ros_message,
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
  // Member: orientation

  current_alignment +=
    autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.orientation, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
max_serialized_size_GnssInsOrientationStamped(
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

  // Member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GnssInsOrientation(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GnssInsOrientationStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::GnssInsOrientationStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GnssInsOrientationStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_sensing_msgs::msg::GnssInsOrientationStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GnssInsOrientationStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::GnssInsOrientationStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GnssInsOrientationStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GnssInsOrientationStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _GnssInsOrientationStamped__callbacks = {
  "autoware_sensing_msgs::msg",
  "GnssInsOrientationStamped",
  _GnssInsOrientationStamped__cdr_serialize,
  _GnssInsOrientationStamped__cdr_deserialize,
  _GnssInsOrientationStamped__get_serialized_size,
  _GnssInsOrientationStamped__max_serialized_size
};

static rosidl_message_type_support_t _GnssInsOrientationStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GnssInsOrientationStamped__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_sensing_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_sensing_msgs::msg::GnssInsOrientationStamped>()
{
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_GnssInsOrientationStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_sensing_msgs, msg, GnssInsOrientationStamped)() {
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_GnssInsOrientationStamped__handle;
}

#ifdef __cplusplus
}
#endif
