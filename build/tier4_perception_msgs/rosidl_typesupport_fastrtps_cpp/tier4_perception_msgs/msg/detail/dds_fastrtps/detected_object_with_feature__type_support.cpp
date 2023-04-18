// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__struct.hpp"

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
namespace autoware_auto_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_auto_perception_msgs::msg::DetectedObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_auto_perception_msgs::msg::DetectedObject &);
size_t get_serialized_size(
  const autoware_auto_perception_msgs::msg::DetectedObject &,
  size_t current_alignment);
size_t
max_serialized_size_DetectedObject(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_auto_perception_msgs

namespace tier4_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_perception_msgs::msg::Feature &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_perception_msgs::msg::Feature &);
size_t get_serialized_size(
  const tier4_perception_msgs::msg::Feature &,
  size_t current_alignment);
size_t
max_serialized_size_Feature(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_perception_msgs


namespace tier4_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
cdr_serialize(
  const tier4_perception_msgs::msg::DetectedObjectWithFeature & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: object
  autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object,
    cdr);
  // Member: feature
  tier4_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feature,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_perception_msgs::msg::DetectedObjectWithFeature & ros_message)
{
  // Member: object
  autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object);

  // Member: feature
  tier4_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feature);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
get_serialized_size(
  const tier4_perception_msgs::msg::DetectedObjectWithFeature & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: object

  current_alignment +=
    autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object, current_alignment);
  // Member: feature

  current_alignment +=
    tier4_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feature, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
max_serialized_size_DetectedObjectWithFeature(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectedObject(
        full_bounded, current_alignment);
    }
  }

  // Member: feature
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Feature(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DetectedObjectWithFeature__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_perception_msgs::msg::DetectedObjectWithFeature *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectedObjectWithFeature__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_perception_msgs::msg::DetectedObjectWithFeature *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectedObjectWithFeature__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_perception_msgs::msg::DetectedObjectWithFeature *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectedObjectWithFeature__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectedObjectWithFeature(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectedObjectWithFeature__callbacks = {
  "tier4_perception_msgs::msg",
  "DetectedObjectWithFeature",
  _DetectedObjectWithFeature__cdr_serialize,
  _DetectedObjectWithFeature__cdr_deserialize,
  _DetectedObjectWithFeature__get_serialized_size,
  _DetectedObjectWithFeature__max_serialized_size
};

static rosidl_message_type_support_t _DetectedObjectWithFeature__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectedObjectWithFeature__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_perception_msgs::msg::DetectedObjectWithFeature>()
{
  return &tier4_perception_msgs::msg::typesupport_fastrtps_cpp::_DetectedObjectWithFeature__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_perception_msgs, msg, DetectedObjectWithFeature)() {
  return &tier4_perception_msgs::msg::typesupport_fastrtps_cpp::_DetectedObjectWithFeature__handle;
}

#ifdef __cplusplus
}
#endif
