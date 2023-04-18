// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/LocalizationScoreArray.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/localization_score_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_external_api_msgs/msg/detail/localization_score_array__struct.hpp"

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
bool cdr_serialize(
  const tier4_external_api_msgs::msg::LocalizationScore &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_external_api_msgs::msg::LocalizationScore &);
size_t get_serialized_size(
  const tier4_external_api_msgs::msg::LocalizationScore &,
  size_t current_alignment);
size_t
max_serialized_size_LocalizationScore(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_serialize(
  const tier4_external_api_msgs::msg::LocalizationScoreArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: values
  {
    size_t size = ros_message.values.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.values[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_external_api_msgs::msg::LocalizationScoreArray & ros_message)
{
  // Member: values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.values.resize(size);
    for (size_t i = 0; i < size; i++) {
      tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.values[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
get_serialized_size(
  const tier4_external_api_msgs::msg::LocalizationScoreArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: values
  {
    size_t array_size = ros_message.values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.values[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_external_api_msgs
max_serialized_size_LocalizationScoreArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LocalizationScore(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LocalizationScoreArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::msg::LocalizationScoreArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LocalizationScoreArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_external_api_msgs::msg::LocalizationScoreArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LocalizationScoreArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_external_api_msgs::msg::LocalizationScoreArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LocalizationScoreArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LocalizationScoreArray(full_bounded, 0);
}

static message_type_support_callbacks_t _LocalizationScoreArray__callbacks = {
  "tier4_external_api_msgs::msg",
  "LocalizationScoreArray",
  _LocalizationScoreArray__cdr_serialize,
  _LocalizationScoreArray__cdr_deserialize,
  _LocalizationScoreArray__get_serialized_size,
  _LocalizationScoreArray__max_serialized_size
};

static rosidl_message_type_support_t _LocalizationScoreArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LocalizationScoreArray__callbacks,
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
get_message_type_support_handle<tier4_external_api_msgs::msg::LocalizationScoreArray>()
{
  return &tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::_LocalizationScoreArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, msg, LocalizationScoreArray)() {
  return &tier4_external_api_msgs::msg::typesupport_fastrtps_cpp::_LocalizationScoreArray__handle;
}

#ifdef __cplusplus
}
#endif
