// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Quaternion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Quaternion &);
size_t get_serialized_size(
  const geometry_msgs::msg::Quaternion &,
  size_t current_alignment);
size_t
max_serialized_size_Quaternion(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace autoware_sensing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_serialize(
  const autoware_sensing_msgs::msg::GnssInsOrientation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: orientation
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.orientation,
    cdr);
  // Member: rmse_rotation_x
  cdr << ros_message.rmse_rotation_x;
  // Member: rmse_rotation_y
  cdr << ros_message.rmse_rotation_y;
  // Member: rmse_rotation_z
  cdr << ros_message.rmse_rotation_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_sensing_msgs::msg::GnssInsOrientation & ros_message)
{
  // Member: orientation
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.orientation);

  // Member: rmse_rotation_x
  cdr >> ros_message.rmse_rotation_x;

  // Member: rmse_rotation_y
  cdr >> ros_message.rmse_rotation_y;

  // Member: rmse_rotation_z
  cdr >> ros_message.rmse_rotation_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
get_serialized_size(
  const autoware_sensing_msgs::msg::GnssInsOrientation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: orientation

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.orientation, current_alignment);
  // Member: rmse_rotation_x
  {
    size_t item_size = sizeof(ros_message.rmse_rotation_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rmse_rotation_y
  {
    size_t item_size = sizeof(ros_message.rmse_rotation_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rmse_rotation_z
  {
    size_t item_size = sizeof(ros_message.rmse_rotation_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_sensing_msgs
max_serialized_size_GnssInsOrientation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Quaternion(
        full_bounded, current_alignment);
    }
  }

  // Member: rmse_rotation_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rmse_rotation_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rmse_rotation_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GnssInsOrientation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::GnssInsOrientation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GnssInsOrientation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_sensing_msgs::msg::GnssInsOrientation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GnssInsOrientation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_sensing_msgs::msg::GnssInsOrientation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GnssInsOrientation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GnssInsOrientation(full_bounded, 0);
}

static message_type_support_callbacks_t _GnssInsOrientation__callbacks = {
  "autoware_sensing_msgs::msg",
  "GnssInsOrientation",
  _GnssInsOrientation__cdr_serialize,
  _GnssInsOrientation__cdr_deserialize,
  _GnssInsOrientation__get_serialized_size,
  _GnssInsOrientation__max_serialized_size
};

static rosidl_message_type_support_t _GnssInsOrientation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GnssInsOrientation__callbacks,
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
get_message_type_support_handle<autoware_sensing_msgs::msg::GnssInsOrientation>()
{
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_GnssInsOrientation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_sensing_msgs, msg, GnssInsOrientation)() {
  return &autoware_sensing_msgs::msg::typesupport_fastrtps_cpp::_GnssInsOrientation__handle;
}

#ifdef __cplusplus
}
#endif
