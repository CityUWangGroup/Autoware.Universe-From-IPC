// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

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
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__PathPoint __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REFERENCE =
    0u;
  static constexpr uint8_t FIXED =
    1u;

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__PathPoint
    std::shared_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__PathPoint
    std::shared_ptr<tier4_planning_msgs::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  tier4_planning_msgs::msg::PathPoint_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PathPoint_<ContainerAllocator>::REFERENCE;
template<typename ContainerAllocator>
constexpr uint8_t PathPoint_<ContainerAllocator>::FIXED;

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
