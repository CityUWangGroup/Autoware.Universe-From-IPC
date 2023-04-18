// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/predicted_path__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/predicted_path__functions.h"
#include "tier4_perception_msgs/msg/detail/predicted_path__struct.h"


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/pose_with_covariance_stamped.h"
// Member `path`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__PredictedPath__init(message_memory);
}

void PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__PredictedPath__fini(message_memory);
}

size_t PredictedPath__rosidl_typesupport_introspection_c__size_function__PoseWithCovarianceStamped__path(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseWithCovarianceStamped__Sequence * member =
    (const geometry_msgs__msg__PoseWithCovarianceStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * PredictedPath__rosidl_typesupport_introspection_c__get_const_function__PoseWithCovarianceStamped__path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseWithCovarianceStamped__Sequence * member =
    (const geometry_msgs__msg__PoseWithCovarianceStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PredictedPath__rosidl_typesupport_introspection_c__get_function__PoseWithCovarianceStamped__path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence * member =
    (geometry_msgs__msg__PoseWithCovarianceStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PredictedPath__rosidl_typesupport_introspection_c__resize_function__PoseWithCovarianceStamped__path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence * member =
    (geometry_msgs__msg__PoseWithCovarianceStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array[2] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__PredictedPath, path),  // bytes offset in struct
    NULL,  // default value
    PredictedPath__rosidl_typesupport_introspection_c__size_function__PoseWithCovarianceStamped__path,  // size() function pointer
    PredictedPath__rosidl_typesupport_introspection_c__get_const_function__PoseWithCovarianceStamped__path,  // get_const(index) function pointer
    PredictedPath__rosidl_typesupport_introspection_c__get_function__PoseWithCovarianceStamped__path,  // get(index) function pointer
    PredictedPath__rosidl_typesupport_introspection_c__resize_function__PoseWithCovarianceStamped__path  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__PredictedPath, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "PredictedPath",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs__msg__PredictedPath),
  PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array,  // message members
  PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_init_function,  // function to initialize message memory (memory has to be allocated)
  PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle = {
  0,
  &PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, PredictedPath)() {
  PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovarianceStamped)();
  if (!PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle.typesupport_identifier) {
    PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PredictedPath__rosidl_typesupport_introspection_c__PredictedPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
