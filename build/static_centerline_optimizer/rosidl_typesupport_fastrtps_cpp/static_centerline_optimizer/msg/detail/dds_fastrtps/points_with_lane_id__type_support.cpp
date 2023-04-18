// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__rosidl_typesupport_fastrtps_cpp.hpp"
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"

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
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace static_centerline_optimizer
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
cdr_serialize(
  const static_centerline_optimizer::msg::PointsWithLaneId & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lane_id
  cdr << ros_message.lane_id;
  // Member: points
  {
    size_t size = ros_message.points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  static_centerline_optimizer::msg::PointsWithLaneId & ros_message)
{
  // Member: lane_id
  cdr >> ros_message.lane_id;

  // Member: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.points.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.points[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
get_serialized_size(
  const static_centerline_optimizer::msg::PointsWithLaneId & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lane_id
  {
    size_t item_size = sizeof(ros_message.lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: points
  {
    size_t array_size = ros_message.points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
max_serialized_size_PointsWithLaneId(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PointsWithLaneId__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const static_centerline_optimizer::msg::PointsWithLaneId *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PointsWithLaneId__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<static_centerline_optimizer::msg::PointsWithLaneId *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PointsWithLaneId__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const static_centerline_optimizer::msg::PointsWithLaneId *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PointsWithLaneId__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PointsWithLaneId(full_bounded, 0);
}

static message_type_support_callbacks_t _PointsWithLaneId__callbacks = {
  "static_centerline_optimizer::msg",
  "PointsWithLaneId",
  _PointsWithLaneId__cdr_serialize,
  _PointsWithLaneId__cdr_deserialize,
  _PointsWithLaneId__get_serialized_size,
  _PointsWithLaneId__max_serialized_size
};

static rosidl_message_type_support_t _PointsWithLaneId__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PointsWithLaneId__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace static_centerline_optimizer

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_static_centerline_optimizer
const rosidl_message_type_support_t *
get_message_type_support_handle<static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return &static_centerline_optimizer::msg::typesupport_fastrtps_cpp::_PointsWithLaneId__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, static_centerline_optimizer, msg, PointsWithLaneId)() {
  return &static_centerline_optimizer::msg::typesupport_fastrtps_cpp::_PointsWithLaneId__handle;
}

#ifdef __cplusplus
}
#endif
