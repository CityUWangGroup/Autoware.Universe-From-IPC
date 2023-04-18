// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_debug_msgs:msg/Int64MultiArrayStamped.idl
// generated code does not contain a copyright notice
#include "tier4_debug_msgs/msg/detail/int64_multi_array_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_debug_msgs/msg/detail/int64_multi_array_stamped__struct.hpp"

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

namespace tier4_debug_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_debug_msgs::msg::MultiArrayLayout &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_debug_msgs::msg::MultiArrayLayout &);
size_t get_serialized_size(
  const tier4_debug_msgs::msg::MultiArrayLayout &,
  size_t current_alignment);
size_t
max_serialized_size_MultiArrayLayout(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_debug_msgs


namespace tier4_debug_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_debug_msgs
cdr_serialize(
  const tier4_debug_msgs::msg::Int64MultiArrayStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: layout
  tier4_debug_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.layout,
    cdr);
  // Member: data
  {
    cdr << ros_message.data;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_debug_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_debug_msgs::msg::Int64MultiArrayStamped & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: layout
  tier4_debug_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.layout);

  // Member: data
  {
    cdr >> ros_message.data;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_debug_msgs
get_serialized_size(
  const tier4_debug_msgs::msg::Int64MultiArrayStamped & ros_message,
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
  // Member: layout

  current_alignment +=
    tier4_debug_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.layout, current_alignment);
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_debug_msgs
max_serialized_size_Int64MultiArrayStamped(
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

  // Member: layout
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_debug_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiArrayLayout(
        full_bounded, current_alignment);
    }
  }

  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Int64MultiArrayStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_debug_msgs::msg::Int64MultiArrayStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Int64MultiArrayStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_debug_msgs::msg::Int64MultiArrayStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Int64MultiArrayStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_debug_msgs::msg::Int64MultiArrayStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Int64MultiArrayStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Int64MultiArrayStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _Int64MultiArrayStamped__callbacks = {
  "tier4_debug_msgs::msg",
  "Int64MultiArrayStamped",
  _Int64MultiArrayStamped__cdr_serialize,
  _Int64MultiArrayStamped__cdr_deserialize,
  _Int64MultiArrayStamped__get_serialized_size,
  _Int64MultiArrayStamped__max_serialized_size
};

static rosidl_message_type_support_t _Int64MultiArrayStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Int64MultiArrayStamped__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_debug_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_debug_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_debug_msgs::msg::Int64MultiArrayStamped>()
{
  return &tier4_debug_msgs::msg::typesupport_fastrtps_cpp::_Int64MultiArrayStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_debug_msgs, msg, Int64MultiArrayStamped)() {
  return &tier4_debug_msgs::msg::typesupport_fastrtps_cpp::_Int64MultiArrayStamped__handle;
}

#ifdef __cplusplus
}
#endif
