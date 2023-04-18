// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_map_msgs:srv/GetDifferentialPointCloudMap.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__struct.hpp"

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
namespace autoware_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_map_msgs::msg::AreaInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_map_msgs::msg::AreaInfo &);
size_t get_serialized_size(
  const autoware_map_msgs::msg::AreaInfo &,
  size_t current_alignment);
size_t
max_serialized_size_AreaInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_map_msgs


namespace autoware_map_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
cdr_serialize(
  const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: area
  autoware_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.area,
    cdr);
  // Member: cached_ids
  {
    cdr << ros_message.cached_ids;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request & ros_message)
{
  // Member: area
  autoware_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.area);

  // Member: cached_ids
  {
    cdr >> ros_message.cached_ids;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
get_serialized_size(
  const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: area

  current_alignment +=
    autoware_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.area, current_alignment);
  // Member: cached_ids
  {
    size_t array_size = ros_message.cached_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.cached_ids[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
max_serialized_size_GetDifferentialPointCloudMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: area
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AreaInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: cached_ids
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

  return current_alignment - initial_alignment;
}

static bool _GetDifferentialPointCloudMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDifferentialPointCloudMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDifferentialPointCloudMap_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDifferentialPointCloudMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetDifferentialPointCloudMap_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetDifferentialPointCloudMap_Request__callbacks = {
  "autoware_map_msgs::srv",
  "GetDifferentialPointCloudMap_Request",
  _GetDifferentialPointCloudMap_Request__cdr_serialize,
  _GetDifferentialPointCloudMap_Request__cdr_deserialize,
  _GetDifferentialPointCloudMap_Request__get_serialized_size,
  _GetDifferentialPointCloudMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDifferentialPointCloudMap_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDifferentialPointCloudMap_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request>()
{
  return &autoware_map_msgs::srv::typesupport_fastrtps_cpp::_GetDifferentialPointCloudMap_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Request)() {
  return &autoware_map_msgs::srv::typesupport_fastrtps_cpp::_GetDifferentialPointCloudMap_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


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

namespace autoware_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_map_msgs::msg::PointCloudMapCellWithID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_map_msgs::msg::PointCloudMapCellWithID &);
size_t get_serialized_size(
  const autoware_map_msgs::msg::PointCloudMapCellWithID &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloudMapCellWithID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_map_msgs


namespace autoware_map_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
cdr_serialize(
  const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: new_pointcloud_with_ids
  {
    size_t size = ros_message.new_pointcloud_with_ids.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autoware_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.new_pointcloud_with_ids[i],
        cdr);
    }
  }
  // Member: ids_to_remove
  {
    cdr << ros_message.ids_to_remove;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: new_pointcloud_with_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.new_pointcloud_with_ids.resize(size);
    for (size_t i = 0; i < size; i++) {
      autoware_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.new_pointcloud_with_ids[i]);
    }
  }

  // Member: ids_to_remove
  {
    cdr >> ros_message.ids_to_remove;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
get_serialized_size(
  const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response & ros_message,
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
  // Member: new_pointcloud_with_ids
  {
    size_t array_size = ros_message.new_pointcloud_with_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.new_pointcloud_with_ids[index], current_alignment);
    }
  }
  // Member: ids_to_remove
  {
    size_t array_size = ros_message.ids_to_remove.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.ids_to_remove[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_map_msgs
max_serialized_size_GetDifferentialPointCloudMap_Response(
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

  // Member: new_pointcloud_with_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloudMapCellWithID(
        full_bounded, current_alignment);
    }
  }

  // Member: ids_to_remove
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

  return current_alignment - initial_alignment;
}

static bool _GetDifferentialPointCloudMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDifferentialPointCloudMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDifferentialPointCloudMap_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDifferentialPointCloudMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetDifferentialPointCloudMap_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetDifferentialPointCloudMap_Response__callbacks = {
  "autoware_map_msgs::srv",
  "GetDifferentialPointCloudMap_Response",
  _GetDifferentialPointCloudMap_Response__cdr_serialize,
  _GetDifferentialPointCloudMap_Response__cdr_deserialize,
  _GetDifferentialPointCloudMap_Response__get_serialized_size,
  _GetDifferentialPointCloudMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDifferentialPointCloudMap_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDifferentialPointCloudMap_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response>()
{
  return &autoware_map_msgs::srv::typesupport_fastrtps_cpp::_GetDifferentialPointCloudMap_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Response)() {
  return &autoware_map_msgs::srv::typesupport_fastrtps_cpp::_GetDifferentialPointCloudMap_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace autoware_map_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetDifferentialPointCloudMap__callbacks = {
  "autoware_map_msgs::srv",
  "GetDifferentialPointCloudMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Response)(),
};

static rosidl_service_type_support_t _GetDifferentialPointCloudMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDifferentialPointCloudMap__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_map_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<autoware_map_msgs::srv::GetDifferentialPointCloudMap>()
{
  return &autoware_map_msgs::srv::typesupport_fastrtps_cpp::_GetDifferentialPointCloudMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_map_msgs, srv, GetDifferentialPointCloudMap)() {
  return &autoware_map_msgs::srv::typesupport_fastrtps_cpp::_GetDifferentialPointCloudMap__handle;
}

#ifdef __cplusplus
}
#endif
