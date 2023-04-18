// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/LocalizationScore.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/localization_score__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_external_api_msgs/msg/detail/localization_score__struct.hpp"

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

namespace tier4_external_api_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_serialize(
  const tier4_external_api_msgs::msg::LocalizationScore & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_external_api_msgs::msg::LocalizationScore & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
get_serialized_size(
  const tier4_external_api_msgs::msg::LocalizationScore & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
max_serialized_size_LocalizationScore(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LocalizationScore__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::msg::LocalizationScore *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LocalizationScore__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_external_api_msgs::msg::LocalizationScore *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LocalizationScore__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::msg::LocalizationScore *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LocalizationScore__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LocalizationScore(full_bounded, 0);
}

static message_type_support_callbacks_t _LocalizationScore__callbacks = {
  "tier4_external_api_msgs::msg",
  "LocalizationScore",
  _LocalizationScore__cdr_serialize,
  _LocalizationScore__cdr_deserialize,
  _LocalizationScore__get_serialized_size,
  _LocalizationScore__max_serialized_size
};

static rosidl_message_type_support_t _LocalizationScore__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LocalizationScore__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_external_api_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::msg::LocalizationScore>()
{
  return &tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::_LocalizationScore__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, msg, LocalizationScore)() {
  return &tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::_LocalizationScore__handle;
}

#ifdef __cplusplus
}
#endif
