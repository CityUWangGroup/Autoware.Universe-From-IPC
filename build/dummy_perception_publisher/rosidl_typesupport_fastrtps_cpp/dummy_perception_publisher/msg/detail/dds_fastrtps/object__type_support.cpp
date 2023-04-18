// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice
#include "dummy_perception_publisher/msg/detail/object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dummy_perception_publisher/msg/detail/object__struct.hpp"

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

namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace dummy_perception_publisher
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dummy_perception_publisher::msg::InitialState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dummy_perception_publisher::msg::InitialState &);
size_t get_serialized_size(
  const dummy_perception_publisher::msg::InitialState &,
  size_t current_alignment);
size_t
max_serialized_size_InitialState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dummy_perception_publisher

namespace autoware_auto_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_auto_perception_msgs::msg::ObjectClassification &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_auto_perception_msgs::msg::ObjectClassification &);
size_t get_serialized_size(
  const autoware_auto_perception_msgs::msg::ObjectClassification &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectClassification(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_auto_perception_msgs

namespace autoware_auto_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_auto_perception_msgs::msg::Shape &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_auto_perception_msgs::msg::Shape &);
size_t get_serialized_size(
  const autoware_auto_perception_msgs::msg::Shape &,
  size_t current_alignment);
size_t
max_serialized_size_Shape(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_auto_perception_msgs


namespace dummy_perception_publisher
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dummy_perception_publisher
cdr_serialize(
  const dummy_perception_publisher::msg::Object & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.id,
    cdr);
  // Member: initial_state
  dummy_perception_publisher::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.initial_state,
    cdr);
  // Member: classification
  autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.classification,
    cdr);
  // Member: shape
  autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.shape,
    cdr);
  // Member: max_velocity
  cdr << ros_message.max_velocity;
  // Member: min_velocity
  cdr << ros_message.min_velocity;
  // Member: action
  cdr << ros_message.action;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dummy_perception_publisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dummy_perception_publisher::msg::Object & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.id);

  // Member: initial_state
  dummy_perception_publisher::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.initial_state);

  // Member: classification
  autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.classification);

  // Member: shape
  autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.shape);

  // Member: max_velocity
  cdr >> ros_message.max_velocity;

  // Member: min_velocity
  cdr >> ros_message.min_velocity;

  // Member: action
  cdr >> ros_message.action;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dummy_perception_publisher
get_serialized_size(
  const dummy_perception_publisher::msg::Object & ros_message,
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
  // Member: id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.id, current_alignment);
  // Member: initial_state

  current_alignment +=
    dummy_perception_publisher::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.initial_state, current_alignment);
  // Member: classification

  current_alignment +=
    autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.classification, current_alignment);
  // Member: shape

  current_alignment +=
    autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.shape, current_alignment);
  // Member: max_velocity
  {
    size_t item_size = sizeof(ros_message.max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_velocity
  {
    size_t item_size = sizeof(ros_message.min_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: action
  {
    size_t item_size = sizeof(ros_message.action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dummy_perception_publisher
max_serialized_size_Object(
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

  // Member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: initial_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dummy_perception_publisher::msg::typesupport_fastrtps_cpp::max_serialized_size_InitialState(
        full_bounded, current_alignment);
    }
  }

  // Member: classification
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectClassification(
        full_bounded, current_alignment);
    }
  }

  // Member: shape
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Shape(
        full_bounded, current_alignment);
    }
  }

  // Member: max_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: action
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Object__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dummy_perception_publisher::msg::Object *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Object__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dummy_perception_publisher::msg::Object *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Object__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dummy_perception_publisher::msg::Object *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Object__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Object(full_bounded, 0);
}

static message_type_support_callbacks_t _Object__callbacks = {
  "dummy_perception_publisher::msg",
  "Object",
  _Object__cdr_serialize,
  _Object__cdr_deserialize,
  _Object__get_serialized_size,
  _Object__max_serialized_size
};

static rosidl_message_type_support_t _Object__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Object__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dummy_perception_publisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dummy_perception_publisher
const rosidl_message_type_support_t *
get_message_type_support_handle<dummy_perception_publisher::msg::Object>()
{
  return &dummy_perception_publisher::msg::typesupport_fastrtps_cpp::_Object__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dummy_perception_publisher, msg, Object)() {
  return &dummy_perception_publisher::msg::typesupport_fastrtps_cpp::_Object__handle;
}

#ifdef __cplusplus
}
#endif
