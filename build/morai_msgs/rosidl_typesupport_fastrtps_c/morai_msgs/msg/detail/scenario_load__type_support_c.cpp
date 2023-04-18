// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/ScenarioLoad.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/scenario_load__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/scenario_load__struct.h"
#include "morai_msgs/msg/detail/scenario_load__functions.h"
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

#include "rosidl_runtime_c/string.h"  // file_name
#include "rosidl_runtime_c/string_functions.h"  // file_name

// forward declare type support functions


using _ScenarioLoad__ros_msg_type = morai_msgs__msg__ScenarioLoad;

static bool _ScenarioLoad__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScenarioLoad__ros_msg_type * ros_message = static_cast<const _ScenarioLoad__ros_msg_type *>(untyped_ros_message);
  // Field name: file_name
  {
    const rosidl_runtime_c__String * str = &ros_message->file_name;
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

  // Field name: load_network_connection_data
  {
    cdr << (ros_message->load_network_connection_data ? true : false);
  }

  // Field name: delete_all
  {
    cdr << (ros_message->delete_all ? true : false);
  }

  // Field name: load_ego_vehicle_data
  {
    cdr << (ros_message->load_ego_vehicle_data ? true : false);
  }

  // Field name: load_surrounding_vehicle_data
  {
    cdr << (ros_message->load_surrounding_vehicle_data ? true : false);
  }

  // Field name: load_pedestrian_data
  {
    cdr << (ros_message->load_pedestrian_data ? true : false);
  }

  // Field name: load_obstacle_data
  {
    cdr << (ros_message->load_obstacle_data ? true : false);
  }

  // Field name: set_pause
  {
    cdr << (ros_message->set_pause ? true : false);
  }

  return true;
}

static bool _ScenarioLoad__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScenarioLoad__ros_msg_type * ros_message = static_cast<_ScenarioLoad__ros_msg_type *>(untyped_ros_message);
  // Field name: file_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file_name.data) {
      rosidl_runtime_c__String__init(&ros_message->file_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_name'\n");
      return false;
    }
  }

  // Field name: load_network_connection_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->load_network_connection_data = tmp ? true : false;
  }

  // Field name: delete_all
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->delete_all = tmp ? true : false;
  }

  // Field name: load_ego_vehicle_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->load_ego_vehicle_data = tmp ? true : false;
  }

  // Field name: load_surrounding_vehicle_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->load_surrounding_vehicle_data = tmp ? true : false;
  }

  // Field name: load_pedestrian_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->load_pedestrian_data = tmp ? true : false;
  }

  // Field name: load_obstacle_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->load_obstacle_data = tmp ? true : false;
  }

  // Field name: set_pause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set_pause = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__ScenarioLoad(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScenarioLoad__ros_msg_type * ros_message = static_cast<const _ScenarioLoad__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file_name.size + 1);
  // field.name load_network_connection_data
  {
    size_t item_size = sizeof(ros_message->load_network_connection_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delete_all
  {
    size_t item_size = sizeof(ros_message->delete_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_ego_vehicle_data
  {
    size_t item_size = sizeof(ros_message->load_ego_vehicle_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_surrounding_vehicle_data
  {
    size_t item_size = sizeof(ros_message->load_surrounding_vehicle_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_pedestrian_data
  {
    size_t item_size = sizeof(ros_message->load_pedestrian_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_obstacle_data
  {
    size_t item_size = sizeof(ros_message->load_obstacle_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pause
  {
    size_t item_size = sizeof(ros_message->set_pause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScenarioLoad__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__ScenarioLoad(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__ScenarioLoad(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: file_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: load_network_connection_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: delete_all
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: load_ego_vehicle_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: load_surrounding_vehicle_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: load_pedestrian_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: load_obstacle_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set_pause
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ScenarioLoad__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_morai_msgs__msg__ScenarioLoad(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ScenarioLoad = {
  "morai_msgs::msg",
  "ScenarioLoad",
  _ScenarioLoad__cdr_serialize,
  _ScenarioLoad__cdr_deserialize,
  _ScenarioLoad__get_serialized_size,
  _ScenarioLoad__max_serialized_size
};

static rosidl_message_type_support_t _ScenarioLoad__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScenarioLoad,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, ScenarioLoad)() {
  return &_ScenarioLoad__type_support;
}

#if defined(__cplusplus)
}
#endif
