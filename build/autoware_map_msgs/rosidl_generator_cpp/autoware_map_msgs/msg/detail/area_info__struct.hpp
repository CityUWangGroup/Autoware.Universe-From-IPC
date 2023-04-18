// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__STRUCT_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_map_msgs__msg__AreaInfo __attribute__((deprecated))
#else
# define DEPRECATED__autoware_map_msgs__msg__AreaInfo __declspec(deprecated)
#endif

namespace autoware_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaInfo_
{
  using Type = AreaInfo_<ContainerAllocator>;

  explicit AreaInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0f;
    }
  }

  explicit AreaInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0f;
    }
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _radius_type =
    float;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_map_msgs__msg__AreaInfo
    std::shared_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_map_msgs__msg__AreaInfo
    std::shared_ptr<autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaInfo_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaInfo_

// alias to use template instance with default allocator
using AreaInfo =
  autoware_map_msgs::msg::AreaInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__STRUCT_HPP_
