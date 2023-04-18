// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/FailSafeStateStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__STRUCT_HPP_

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
// Member 'state'
#include "tier4_external_api_msgs/msg/detail/fail_safe_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__FailSafeStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__FailSafeStateStamped __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailSafeStateStamped_
{
  using Type = FailSafeStateStamped_<ContainerAllocator>;

  explicit FailSafeStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    state(_init)
  {
    (void)_init;
  }

  explicit FailSafeStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _state_type =
    tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__state(
    const tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__FailSafeStateStamped
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__FailSafeStateStamped
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailSafeStateStamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailSafeStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailSafeStateStamped_

// alias to use template instance with default allocator
using FailSafeStateStamped =
  tier4_external_api_msgs::msg::FailSafeStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__STRUCT_HPP_
