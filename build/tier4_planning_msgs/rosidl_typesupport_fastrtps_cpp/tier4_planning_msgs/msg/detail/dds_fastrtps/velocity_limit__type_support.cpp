// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/velocity_limit__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_planning_msgs/msg/detail/velocity_limit__struct.hpp"

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

namespace tier4_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_planning_msgs::msg::VelocityLimitConstraints &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_planning_msgs::msg::VelocityLimitConstraints &);
size_t get_serialized_size(
  const tier4_planning_msgs::msg::VelocityLimitConstraints &,
  size_t current_alignment);
size_t
max_serialized_size_VelocityLimitConstraints(
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
  const tier4_planning_msgs::msg::VelocityLimit & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: max_velocity
  cdr << ros_message.max_velocity;
  // Member: use_constraints
  cdr << (ros_message.use_constraints ? true : false);
  // Member: constraints
  tier4_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.constraints,
    cdr);
  // Member: sender
  cdr << ros_message.sender;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_planning_msgs::msg::VelocityLimit & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: max_velocity
  cdr >> ros_message.max_velocity;

  // Member: use_constraints
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_constraints = tmp ? true : false;
  }

  // Member: constraints
  tier4_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.constraints);

  // Member: sender
  cdr >> ros_message.sender;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
get_serialized_size(
  const tier4_planning_msgs::msg::VelocityLimit & ros_message,
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
  // Member: max_velocity
  {
    size_t item_size = sizeof(ros_message.max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_constraints
  {
    size_t item_size = sizeof(ros_message.use_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: constraints

  current_alignment +=
    tier4_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.constraints, current_alignment);
  // Member: sender
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sender.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_planning_msgs
max_serialized_size_VelocityLimit(
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

  // Member: max_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_constraints
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: constraints
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VelocityLimitConstraints(
        full_bounded, current_alignment);
    }
  }

  // Member: sender
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

static bool _VelocityLimit__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::VelocityLimit *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VelocityLimit__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_planning_msgs::msg::VelocityLimit *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VelocityLimit__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_planning_msgs::msg::VelocityLimit *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VelocityLimit__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VelocityLimit(full_bounded, 0);
}

static message_type_support_callbacks_t _VelocityLimit__callbacks = {
  "tier4_planning_msgs::msg",
  "VelocityLimit",
  _VelocityLimit__cdr_serialize,
  _VelocityLimit__cdr_deserialize,
  _VelocityLimit__get_serialized_size,
  _VelocityLimit__max_serialized_size
};

static rosidl_message_type_support_t _VelocityLimit__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VelocityLimit__callbacks,
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
get_message_type_support_handle<tier4_planning_msgs::msg::VelocityLimit>()
{
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_VelocityLimit__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_planning_msgs, msg, VelocityLimit)() {
  return &tier4_planning_msgs::msg::typesupport_fastrtps_cpp::_VelocityLimit__handle;
}

#ifdef __cplusplus
}
#endif
