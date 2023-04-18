// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/Feature.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/feature__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/feature__functions.h"
#include "tier4_perception_msgs/msg/detail/feature__struct.h"


// Include directives for member types
// Member `cluster`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `cluster`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Feature__rosidl_typesupport_introspection_c__Feature_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__Feature__init(message_memory);
}

void Feature__rosidl_typesupport_introspection_c__Feature_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__Feature__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Feature__rosidl_typesupport_introspection_c__Feature_message_member_array[2] = {
  {
    "cluster",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__Feature, cluster),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__Feature, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Feature__rosidl_typesupport_introspection_c__Feature_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "Feature",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs__msg__Feature),
  Feature__rosidl_typesupport_introspection_c__Feature_message_member_array,  // message members
  Feature__rosidl_typesupport_introspection_c__Feature_init_function,  // function to initialize message memory (memory has to be allocated)
  Feature__rosidl_typesupport_introspection_c__Feature_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Feature__rosidl_typesupport_introspection_c__Feature_message_type_support_handle = {
  0,
  &Feature__rosidl_typesupport_introspection_c__Feature_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, Feature)() {
  Feature__rosidl_typesupport_introspection_c__Feature_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  Feature__rosidl_typesupport_introspection_c__Feature_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!Feature__rosidl_typesupport_introspection_c__Feature_message_type_support_handle.typesupport_identifier) {
    Feature__rosidl_typesupport_introspection_c__Feature_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Feature__rosidl_typesupport_introspection_c__Feature_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
