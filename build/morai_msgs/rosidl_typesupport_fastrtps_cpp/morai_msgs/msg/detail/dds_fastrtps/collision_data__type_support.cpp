// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/collision_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "morai_msgs/msg/detail/collision_data__struct.hpp"

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

namespace morai_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const morai_msgs::msg::ObjectStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  morai_msgs::msg::ObjectStatus &);
size_t get_serialized_size(
  const morai_msgs::msg::ObjectStatus &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace morai_msgs


namespace morai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::msg::CollisionData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: global_offset_x
  cdr << ros_message.global_offset_x;
  // Member: global_offset_y
  cdr << ros_message.global_offset_y;
  // Member: global_offset_z
  cdr << ros_message.global_offset_z;
  // Member: collision_object
  {
    size_t size = ros_message.collision_object.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      morai_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.collision_object[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::msg::CollisionData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: global_offset_x
  cdr >> ros_message.global_offset_x;

  // Member: global_offset_y
  cdr >> ros_message.global_offset_y;

  // Member: global_offset_z
  cdr >> ros_message.global_offset_z;

  // Member: collision_object
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.collision_object.resize(size);
    for (size_t i = 0; i < size; i++) {
      morai_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.collision_object[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::msg::CollisionData & ros_message,
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
  // Member: global_offset_x
  {
    size_t item_size = sizeof(ros_message.global_offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: global_offset_y
  {
    size_t item_size = sizeof(ros_message.global_offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: global_offset_z
  {
    size_t item_size = sizeof(ros_message.global_offset_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_object
  {
    size_t array_size = ros_message.collision_object.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.collision_object[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_CollisionData(
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

  // Member: global_offset_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: global_offset_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: global_offset_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: collision_object
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        morai_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CollisionData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::CollisionData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CollisionData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<morai_msgs::msg::CollisionData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CollisionData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::CollisionData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CollisionData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CollisionData(full_bounded, 0);
}

static message_type_support_callbacks_t _CollisionData__callbacks = {
  "morai_msgs::msg",
  "CollisionData",
  _CollisionData__cdr_serialize,
  _CollisionData__cdr_deserialize,
  _CollisionData__get_serialized_size,
  _CollisionData__max_serialized_size
};

static rosidl_message_type_support_t _CollisionData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CollisionData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::CollisionData>()
{
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_CollisionData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, msg, CollisionData)() {
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_CollisionData__handle;
}

#ifdef __cplusplus
}
#endif
