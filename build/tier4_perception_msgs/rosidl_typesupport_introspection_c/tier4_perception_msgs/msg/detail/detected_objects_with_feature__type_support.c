// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/DetectedObjectsWithFeature.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/detected_objects_with_feature__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/detected_objects_with_feature__functions.h"
#include "tier4_perception_msgs/msg/detail/detected_objects_with_feature__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `feature_objects`
#include "tier4_perception_msgs/msg/detected_object_with_feature.h"
// Member `feature_objects`
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__DetectedObjectsWithFeature__init(message_memory);
}

void DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__DetectedObjectsWithFeature__fini(message_memory);
}

size_t DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__size_function__DetectedObjectWithFeature__feature_objects(
  const void * untyped_member)
{
  const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * member =
    (const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__get_const_function__DetectedObjectWithFeature__feature_objects(
  const void * untyped_member, size_t index)
{
  const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * member =
    (const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__get_function__DetectedObjectWithFeature__feature_objects(
  void * untyped_member, size_t index)
{
  tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * member =
    (tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__resize_function__DetectedObjectWithFeature__feature_objects(
  void * untyped_member, size_t size)
{
  tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * member =
    (tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence *)(untyped_member);
  tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__fini(member);
  return tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DetectedObjectsWithFeature, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DetectedObjectsWithFeature, feature_objects),  // bytes offset in struct
    NULL,  // default value
    DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__size_function__DetectedObjectWithFeature__feature_objects,  // size() function pointer
    DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__get_const_function__DetectedObjectWithFeature__feature_objects,  // get_const(index) function pointer
    DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__get_function__DetectedObjectWithFeature__feature_objects,  // get(index) function pointer
    DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__resize_function__DetectedObjectWithFeature__feature_objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "DetectedObjectsWithFeature",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs__msg__DetectedObjectsWithFeature),
  DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_member_array,  // message members
  DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_type_support_handle = {
  0,
  &DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, DetectedObjectsWithFeature)() {
  DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, DetectedObjectWithFeature)();
  if (!DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_type_support_handle.typesupport_identifier) {
    DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedObjectsWithFeature__rosidl_typesupport_introspection_c__DetectedObjectsWithFeature_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
