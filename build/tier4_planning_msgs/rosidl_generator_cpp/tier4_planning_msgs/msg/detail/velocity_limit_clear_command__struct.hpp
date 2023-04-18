// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitClearCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__VelocityLimitClearCommand __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__VelocityLimitClearCommand __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityLimitClearCommand_
{
  using Type = VelocityLimitClearCommand_<ContainerAllocator>;

  explicit VelocityLimitClearCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->command = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->command = false;
      this->sender = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender = "";
    }
  }

  explicit VelocityLimitClearCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    sender(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->command = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->command = false;
      this->sender = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _command_type =
    bool;
  _command_type command;
  using _sender_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sender_type sender;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__command(
    const bool & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__sender(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sender = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__VelocityLimitClearCommand
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__VelocityLimitClearCommand
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitClearCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityLimitClearCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->sender != other.sender) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityLimitClearCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityLimitClearCommand_

// alias to use template instance with default allocator
using VelocityLimitClearCommand =
  tier4_planning_msgs::msg::VelocityLimitClearCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__STRUCT_HPP_
