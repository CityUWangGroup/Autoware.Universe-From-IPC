// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'module'
#include "tier4_planning_msgs/msg/detail/path_change_module_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__PathChangeModule __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__PathChangeModule __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathChangeModule_
{
  using Type = PathChangeModule_<ContainerAllocator>;

  explicit PathChangeModule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    module(_init)
  {
    (void)_init;
  }

  explicit PathChangeModule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    module(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _module_type =
    tier4_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>;
  _module_type module;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__module(
    const tier4_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> & _arg)
  {
    this->module = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__PathChangeModule
    std::shared_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__PathChangeModule
    std::shared_ptr<tier4_planning_msgs::msg::PathChangeModule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathChangeModule_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->module != other.module) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathChangeModule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathChangeModule_

// alias to use template instance with default allocator
using PathChangeModule =
  tier4_planning_msgs::msg::PathChangeModule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__STRUCT_HPP_
