// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_map_msgs:srv/GetDifferentialPointCloudMap.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__struct.h"
#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_map_msgs/msg/detail/area_info__functions.h"  // area
#include "rosidl_runtime_c/string.h"  // cached_ids
#include "rosidl_runtime_c/string_functions.h"  // cached_ids

// forward declare type support functions
size_t get_serialized_size_autoware_map_msgs__msg__AreaInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_map_msgs__msg__AreaInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, AreaInfo)();


using _GetDifferentialPointCloudMap_Request__ros_msg_type = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request;

static bool _GetDifferentialPointCloudMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDifferentialPointCloudMap_Request__ros_msg_type * ros_message = static_cast<const _GetDifferentialPointCloudMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: area
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, AreaInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->area, cdr))
    {
      return false;
    }
  }

  // Field name: cached_ids
  {
    size_t size = ros_message->cached_ids.size;
    auto array_ptr = ros_message->cached_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetDifferentialPointCloudMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDifferentialPointCloudMap_Request__ros_msg_type * ros_message = static_cast<_GetDifferentialPointCloudMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: area
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, AreaInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->area))
    {
      return false;
    }
  }

  // Field name: cached_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cached_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->cached_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->cached_ids, size)) {
      fprintf(stderr, "failed to create array for field 'cached_ids'");
      return false;
    }
    auto array_ptr = ros_message->cached_ids.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'cached_ids'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t get_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDifferentialPointCloudMap_Request__ros_msg_type * ros_message = static_cast<const _GetDifferentialPointCloudMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name area

  current_alignment += get_serialized_size_autoware_map_msgs__msg__AreaInfo(
    &(ros_message->area), current_alignment);
  // field.name cached_ids
  {
    size_t array_size = ros_message->cached_ids.size;
    auto array_ptr = ros_message->cached_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetDifferentialPointCloudMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t max_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: area
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_map_msgs__msg__AreaInfo(
        full_bounded, current_alignment);
    }
  }
  // member: cached_ids
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

static size_t _GetDifferentialPointCloudMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDifferentialPointCloudMap_Request = {
  "autoware_map_msgs::srv",
  "GetDifferentialPointCloudMap_Request",
  _GetDifferentialPointCloudMap_Request__cdr_serialize,
  _GetDifferentialPointCloudMap_Request__cdr_deserialize,
  _GetDifferentialPointCloudMap_Request__get_serialized_size,
  _GetDifferentialPointCloudMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDifferentialPointCloudMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDifferentialPointCloudMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Request)() {
  return &_GetDifferentialPointCloudMap_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__struct.h"
// already included above
// #include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__functions.h"  // new_pointcloud_with_ids
// already included above
// #include "rosidl_runtime_c/string.h"  // ids_to_remove
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // ids_to_remove
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellWithID)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GetDifferentialPointCloudMap_Response__ros_msg_type = autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response;

static bool _GetDifferentialPointCloudMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDifferentialPointCloudMap_Response__ros_msg_type * ros_message = static_cast<const _GetDifferentialPointCloudMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: new_pointcloud_with_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellWithID
      )()->data);
    size_t size = ros_message->new_pointcloud_with_ids.size;
    auto array_ptr = ros_message->new_pointcloud_with_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ids_to_remove
  {
    size_t size = ros_message->ids_to_remove.size;
    auto array_ptr = ros_message->ids_to_remove.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetDifferentialPointCloudMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDifferentialPointCloudMap_Response__ros_msg_type * ros_message = static_cast<_GetDifferentialPointCloudMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: new_pointcloud_with_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellWithID
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->new_pointcloud_with_ids.data) {
      autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__fini(&ros_message->new_pointcloud_with_ids);
    }
    if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__init(&ros_message->new_pointcloud_with_ids, size)) {
      fprintf(stderr, "failed to create array for field 'new_pointcloud_with_ids'");
      return false;
    }
    auto array_ptr = ros_message->new_pointcloud_with_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ids_to_remove
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ids_to_remove.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->ids_to_remove);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->ids_to_remove, size)) {
      fprintf(stderr, "failed to create array for field 'ids_to_remove'");
      return false;
    }
    auto array_ptr = ros_message->ids_to_remove.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'ids_to_remove'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t get_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDifferentialPointCloudMap_Response__ros_msg_type * ros_message = static_cast<const _GetDifferentialPointCloudMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name new_pointcloud_with_ids
  {
    size_t array_size = ros_message->new_pointcloud_with_ids.size;
    auto array_ptr = ros_message->new_pointcloud_with_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ids_to_remove
  {
    size_t array_size = ros_message->ids_to_remove.size;
    auto array_ptr = ros_message->ids_to_remove.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetDifferentialPointCloudMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t max_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: new_pointcloud_with_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
        full_bounded, current_alignment);
    }
  }
  // member: ids_to_remove
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

static size_t _GetDifferentialPointCloudMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDifferentialPointCloudMap_Response = {
  "autoware_map_msgs::srv",
  "GetDifferentialPointCloudMap_Response",
  _GetDifferentialPointCloudMap_Response__cdr_serialize,
  _GetDifferentialPointCloudMap_Response__cdr_deserialize,
  _GetDifferentialPointCloudMap_Response__get_serialized_size,
  _GetDifferentialPointCloudMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDifferentialPointCloudMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDifferentialPointCloudMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Response)() {
  return &_GetDifferentialPointCloudMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_map_msgs/srv/get_differential_point_cloud_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetDifferentialPointCloudMap__callbacks = {
  "autoware_map_msgs::srv",
  "GetDifferentialPointCloudMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, srv, GetDifferentialPointCloudMap_Response)(),
};

static rosidl_service_type_support_t GetDifferentialPointCloudMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetDifferentialPointCloudMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, srv, GetDifferentialPointCloudMap)() {
  return &GetDifferentialPointCloudMap__handle;
}

#if defined(__cplusplus)
}
#endif
