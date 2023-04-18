// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__struct.hpp"

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
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace tier4_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_serialize(
  const tier4_planning_msgs::msg::LaneChangeDebugMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: object_id
  cdr << ros_message.object_id;
  // Member: allow_lane_change
  cdr << (ros_message.allow_lane_change ? true : false);
  // Member: is_front
  cdr << (ros_message.is_front ? true : false);
  // Member: relative_distance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.relative_distance,
    cdr);
  // Member: velocity
  cdr << ros_message.velocity;
  // Member: failed_reason
  cdr << ros_message.failed_reason;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_planning_msgs::msg::LaneChangeDebugMsg & ros_message)
{
  // Member: object_id
  cdr >> ros_message.object_id;

  // Member: allow_lane_change
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.allow_lane_change = tmp ? true : false;
  }

  // Member: is_front
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_front = tmp ? true : false;
  }

  // Member: relative_distance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.relative_distance);

  // Member: velocity
  cdr >> ros_message.velocity;

  // Member: failed_reason
  cdr >> ros_message.failed_reason;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
get_serialized_size(
  const tier4_planning_msgs::msg::LaneChangeDebugMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);
  // Member: allow_lane_change
  {
    size_t item_size = sizeof(ros_message.allow_lane_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_front
  {
    size_t item_size = sizeof(ros_message.is_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_distance

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.relative_distance, current_alignment);
  // Member: velocity
  {
    size_t item_size = sizeof(ros_message.velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failed_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.failed_reason.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
max_serialized_size_LaneChangeDebugMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: object_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: allow_lane_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_front
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: relative_distance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  // Member: velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: failed_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LaneChangeDebugMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::LaneChangeDebugMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneChangeDebugMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_planning_msgs::msg::LaneChangeDebugMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneChangeDebugMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::LaneChangeDebugMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneChangeDebugMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LaneChangeDebugMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _LaneChangeDebugMsg__callbacks = {
  "tier4_planning_msgs::msg",
  "LaneChangeDebugMsg",
  _LaneChangeDebugMsg__cdr_serialize,
  _LaneChangeDebugMsg__cdr_deserialize,
  _LaneChangeDebugMsg__get_serialized_size,
  _LaneChangeDebugMsg__max_serialized_size
};

static rosidl_message_type_support_t _LaneChangeDebugMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneChangeDebugMsg__callbacks,
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
get_message_type_support_handle<tier4_planning_msgs::msg::LaneChangeDebugMsg>()
{
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_LaneChangeDebugMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_planning_msgs, msg, LaneChangeDebugMsg)() {
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_LaneChangeDebugMsg__handle;
}

#ifdef __cplusplus
}
#endif
