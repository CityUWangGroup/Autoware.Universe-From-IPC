// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from grid_map_msgs:msg/GridMap.idl
// generated code does not contain a copyright notice
#include "grid_map_msgs/msg/detail/grid_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "grid_map_msgs/msg/detail/grid_map__struct.hpp"

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

namespace grid_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const grid_map_msgs::msg::GridMapInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  grid_map_msgs::msg::GridMapInfo &);
size_t get_serialized_size(
  const grid_map_msgs::msg::GridMapInfo &,
  size_t current_alignment);
size_t
max_serialized_size_GridMapInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace grid_map_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Float32MultiArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float32MultiArray &);
size_t get_serialized_size(
  const std_msgs::msg::Float32MultiArray &,
  size_t current_alignment);
size_t
max_serialized_size_Float32MultiArray(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace grid_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grid_map_msgs
cdr_serialize(
  const grid_map_msgs::msg::GridMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: info
  grid_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: layers
  {
    cdr << ros_message.layers;
  }
  // Member: basic_layers
  {
    cdr << ros_message.basic_layers;
  }
  // Member: data
  {
    size_t size = ros_message.data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.data[i],
        cdr);
    }
  }
  // Member: outer_start_index
  cdr << ros_message.outer_start_index;
  // Member: inner_start_index
  cdr << ros_message.inner_start_index;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grid_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  grid_map_msgs::msg::GridMap & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: info
  grid_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: layers
  {
    cdr >> ros_message.layers;
  }

  // Member: basic_layers
  {
    cdr >> ros_message.basic_layers;
  }

  // Member: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.data.resize(size);
    for (size_t i = 0; i < size; i++) {
      std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.data[i]);
    }
  }

  // Member: outer_start_index
  cdr >> ros_message.outer_start_index;

  // Member: inner_start_index
  cdr >> ros_message.inner_start_index;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grid_map_msgs
get_serialized_size(
  const grid_map_msgs::msg::GridMap & ros_message,
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
  // Member: info

  current_alignment +=
    grid_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: layers
  {
    size_t array_size = ros_message.layers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.layers[index].size() + 1);
    }
  }
  // Member: basic_layers
  {
    size_t array_size = ros_message.basic_layers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.basic_layers[index].size() + 1);
    }
  }
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.data[index], current_alignment);
    }
  }
  // Member: outer_start_index
  {
    size_t item_size = sizeof(ros_message.outer_start_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_start_index
  {
    size_t item_size = sizeof(ros_message.inner_start_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grid_map_msgs
max_serialized_size_GridMap(
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

  // Member: info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        grid_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GridMapInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: layers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: basic_layers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32MultiArray(
        full_bounded, current_alignment);
    }
  }

  // Member: outer_start_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: inner_start_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GridMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const grid_map_msgs::msg::GridMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GridMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<grid_map_msgs::msg::GridMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GridMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const grid_map_msgs::msg::GridMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GridMap__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GridMap(full_bounded, 0);
}

static message_type_support_callbacks_t _GridMap__callbacks = {
  "grid_map_msgs::msg",
  "GridMap",
  _GridMap__cdr_serialize,
  _GridMap__cdr_deserialize,
  _GridMap__get_serialized_size,
  _GridMap__max_serialized_size
};

static rosidl_message_type_support_t _GridMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GridMap__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace grid_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_grid_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<grid_map_msgs::msg::GridMap>()
{
  return &grid_map_msgs::msg::typesupport_fastrtps_cpp::_GridMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grid_map_msgs, msg, GridMap)() {
  return &grid_map_msgs::msg::typesupport_fastrtps_cpp::_GridMap__handle;
}

#ifdef __cplusplus
}
#endif
