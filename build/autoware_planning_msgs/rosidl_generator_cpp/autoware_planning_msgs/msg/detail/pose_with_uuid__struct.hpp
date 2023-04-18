// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__STRUCT_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__msg__PoseWithUuid __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__msg__PoseWithUuid __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithUuid_
{
  using Type = PoseWithUuid_<ContainerAllocator>;

  explicit PoseWithUuid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    uuid(_init)
  {
    (void)_init;
  }

  explicit PoseWithUuid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    uuid(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _uuid_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__uuid(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__msg__PoseWithUuid
    std::shared_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__msg__PoseWithUuid
    std::shared_ptr<autoware_planning_msgs::msg::PoseWithUuid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithUuid_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->uuid != other.uuid) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithUuid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithUuid_

// alias to use template instance with default allocator
using PoseWithUuid =
  autoware_planning_msgs::msg::PoseWithUuid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__STRUCT_HPP_
