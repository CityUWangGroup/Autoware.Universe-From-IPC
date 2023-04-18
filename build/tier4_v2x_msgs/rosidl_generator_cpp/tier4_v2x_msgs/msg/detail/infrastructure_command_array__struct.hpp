// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommandArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__STRUCT_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'commands'
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommandArray __declspec(deprecated)
#endif

namespace tier4_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InfrastructureCommandArray_
{
  using Type = InfrastructureCommandArray_<ContainerAllocator>;

  explicit InfrastructureCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit InfrastructureCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _commands_type =
    std::vector<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommandArray
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommandArray
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfrastructureCommandArray_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfrastructureCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfrastructureCommandArray_

// alias to use template instance with default allocator
using InfrastructureCommandArray =
  tier4_v2x_msgs::msg::InfrastructureCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__STRUCT_HPP_
