// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "operation_mode_transition_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.h"
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "rosidl_runtime_c/string.h"  // current_state, previous_state
#include "rosidl_runtime_c/string_functions.h"  // current_state, previous_state

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_operation_mode_transition_manager
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_operation_mode_transition_manager
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_operation_mode_transition_manager
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _OperationModeTransitionManagerDebug__ros_msg_type = operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug;

static bool _OperationModeTransitionManagerDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OperationModeTransitionManagerDebug__ros_msg_type * ros_message = static_cast<const _OperationModeTransitionManagerDebug__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: previous_state
  {
    const rosidl_runtime_c__String * str = &ros_message->previous_state;
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

  // Field name: current_state
  {
    const rosidl_runtime_c__String * str = &ros_message->current_state;
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

  // Field name: is_all_ok
  {
    cdr << (ros_message->is_all_ok ? true : false);
  }

  // Field name: engage_allowed_for_stopped_vehicle
  {
    cdr << (ros_message->engage_allowed_for_stopped_vehicle ? true : false);
  }

  // Field name: trajectory_available_ok
  {
    cdr << (ros_message->trajectory_available_ok ? true : false);
  }

  // Field name: lateral_deviation_ok
  {
    cdr << (ros_message->lateral_deviation_ok ? true : false);
  }

  // Field name: yaw_deviation_ok
  {
    cdr << (ros_message->yaw_deviation_ok ? true : false);
  }

  // Field name: speed_upper_deviation_ok
  {
    cdr << (ros_message->speed_upper_deviation_ok ? true : false);
  }

  // Field name: speed_lower_deviation_ok
  {
    cdr << (ros_message->speed_lower_deviation_ok ? true : false);
  }

  // Field name: stop_ok
  {
    cdr << (ros_message->stop_ok ? true : false);
  }

  // Field name: large_acceleration_ok
  {
    cdr << (ros_message->large_acceleration_ok ? true : false);
  }

  // Field name: large_lateral_acceleration_ok
  {
    cdr << (ros_message->large_lateral_acceleration_ok ? true : false);
  }

  // Field name: large_lateral_acceleration_diff_ok
  {
    cdr << (ros_message->large_lateral_acceleration_diff_ok ? true : false);
  }

  // Field name: current_speed
  {
    cdr << ros_message->current_speed;
  }

  // Field name: target_control_speed
  {
    cdr << ros_message->target_control_speed;
  }

  // Field name: target_planning_speed
  {
    cdr << ros_message->target_planning_speed;
  }

  // Field name: target_control_acceleration
  {
    cdr << ros_message->target_control_acceleration;
  }

  // Field name: lateral_acceleration
  {
    cdr << ros_message->lateral_acceleration;
  }

  // Field name: lateral_acceleration_deviation
  {
    cdr << ros_message->lateral_acceleration_deviation;
  }

  // Field name: lateral_deviation
  {
    cdr << ros_message->lateral_deviation;
  }

  // Field name: yaw_deviation
  {
    cdr << ros_message->yaw_deviation;
  }

  // Field name: speed_deviation
  {
    cdr << ros_message->speed_deviation;
  }

  return true;
}

static bool _OperationModeTransitionManagerDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OperationModeTransitionManagerDebug__ros_msg_type * ros_message = static_cast<_OperationModeTransitionManagerDebug__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: previous_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->previous_state.data) {
      rosidl_runtime_c__String__init(&ros_message->previous_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->previous_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'previous_state'\n");
      return false;
    }
  }

  // Field name: current_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_state.data) {
      rosidl_runtime_c__String__init(&ros_message->current_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_state'\n");
      return false;
    }
  }

  // Field name: is_all_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_all_ok = tmp ? true : false;
  }

  // Field name: engage_allowed_for_stopped_vehicle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engage_allowed_for_stopped_vehicle = tmp ? true : false;
  }

  // Field name: trajectory_available_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trajectory_available_ok = tmp ? true : false;
  }

  // Field name: lateral_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lateral_deviation_ok = tmp ? true : false;
  }

  // Field name: yaw_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yaw_deviation_ok = tmp ? true : false;
  }

  // Field name: speed_upper_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed_upper_deviation_ok = tmp ? true : false;
  }

  // Field name: speed_lower_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed_lower_deviation_ok = tmp ? true : false;
  }

  // Field name: stop_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stop_ok = tmp ? true : false;
  }

  // Field name: large_acceleration_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->large_acceleration_ok = tmp ? true : false;
  }

  // Field name: large_lateral_acceleration_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->large_lateral_acceleration_ok = tmp ? true : false;
  }

  // Field name: large_lateral_acceleration_diff_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->large_lateral_acceleration_diff_ok = tmp ? true : false;
  }

  // Field name: current_speed
  {
    cdr >> ros_message->current_speed;
  }

  // Field name: target_control_speed
  {
    cdr >> ros_message->target_control_speed;
  }

  // Field name: target_planning_speed
  {
    cdr >> ros_message->target_planning_speed;
  }

  // Field name: target_control_acceleration
  {
    cdr >> ros_message->target_control_acceleration;
  }

  // Field name: lateral_acceleration
  {
    cdr >> ros_message->lateral_acceleration;
  }

  // Field name: lateral_acceleration_deviation
  {
    cdr >> ros_message->lateral_acceleration_deviation;
  }

  // Field name: lateral_deviation
  {
    cdr >> ros_message->lateral_deviation;
  }

  // Field name: yaw_deviation
  {
    cdr >> ros_message->yaw_deviation;
  }

  // Field name: speed_deviation
  {
    cdr >> ros_message->speed_deviation;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_operation_mode_transition_manager
size_t get_serialized_size_operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OperationModeTransitionManagerDebug__ros_msg_type * ros_message = static_cast<const _OperationModeTransitionManagerDebug__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name previous_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->previous_state.size + 1);
  // field.name current_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_state.size + 1);
  // field.name is_all_ok
  {
    size_t item_size = sizeof(ros_message->is_all_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engage_allowed_for_stopped_vehicle
  {
    size_t item_size = sizeof(ros_message->engage_allowed_for_stopped_vehicle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_available_ok
  {
    size_t item_size = sizeof(ros_message->trajectory_available_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_deviation_ok
  {
    size_t item_size = sizeof(ros_message->lateral_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_deviation_ok
  {
    size_t item_size = sizeof(ros_message->yaw_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_upper_deviation_ok
  {
    size_t item_size = sizeof(ros_message->speed_upper_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_lower_deviation_ok
  {
    size_t item_size = sizeof(ros_message->speed_lower_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_ok
  {
    size_t item_size = sizeof(ros_message->stop_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name large_acceleration_ok
  {
    size_t item_size = sizeof(ros_message->large_acceleration_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name large_lateral_acceleration_ok
  {
    size_t item_size = sizeof(ros_message->large_lateral_acceleration_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name large_lateral_acceleration_diff_ok
  {
    size_t item_size = sizeof(ros_message->large_lateral_acceleration_diff_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_speed
  {
    size_t item_size = sizeof(ros_message->current_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_control_speed
  {
    size_t item_size = sizeof(ros_message->target_control_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_planning_speed
  {
    size_t item_size = sizeof(ros_message->target_planning_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_control_acceleration
  {
    size_t item_size = sizeof(ros_message->target_control_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_acceleration
  {
    size_t item_size = sizeof(ros_message->lateral_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_acceleration_deviation
  {
    size_t item_size = sizeof(ros_message->lateral_acceleration_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_deviation
  {
    size_t item_size = sizeof(ros_message->lateral_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_deviation
  {
    size_t item_size = sizeof(ros_message->yaw_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_deviation
  {
    size_t item_size = sizeof(ros_message->speed_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OperationModeTransitionManagerDebug__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_operation_mode_transition_manager
size_t max_serialized_size_operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: previous_state
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_state
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_all_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engage_allowed_for_stopped_vehicle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trajectory_available_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lateral_deviation_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_deviation_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_upper_deviation_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_lower_deviation_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: large_acceleration_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: large_lateral_acceleration_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: large_lateral_acceleration_diff_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_control_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_planning_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_control_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_acceleration_deviation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_deviation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_deviation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_deviation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _OperationModeTransitionManagerDebug__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OperationModeTransitionManagerDebug = {
  "operation_mode_transition_manager::msg",
  "OperationModeTransitionManagerDebug",
  _OperationModeTransitionManagerDebug__cdr_serialize,
  _OperationModeTransitionManagerDebug__cdr_deserialize,
  _OperationModeTransitionManagerDebug__get_serialized_size,
  _OperationModeTransitionManagerDebug__max_serialized_size
};

static rosidl_message_type_support_t _OperationModeTransitionManagerDebug__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OperationModeTransitionManagerDebug,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, operation_mode_transition_manager, msg, OperationModeTransitionManagerDebug)() {
  return &_OperationModeTransitionManagerDebug__type_support;
}

#if defined(__cplusplus)
}
#endif
