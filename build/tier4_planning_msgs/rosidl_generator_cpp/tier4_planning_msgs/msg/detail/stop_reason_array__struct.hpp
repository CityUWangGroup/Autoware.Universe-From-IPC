// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/StopReasonArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__STRUCT_HPP_

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
// Member 'stop_reasons'
#include "tier4_planning_msgs/msg/detail/stop_reason__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__StopReasonArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__StopReasonArray __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopReasonArray_
{
  using Type = StopReasonArray_<ContainerAllocator>;

  explicit StopReasonArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit StopReasonArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stop_reasons_type =
    std::vector<tier4_planning_msgs::msg::StopReason_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::StopReason_<ContainerAllocator>>>;
  _stop_reasons_type stop_reasons;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stop_reasons(
    const std::vector<tier4_planning_msgs::msg::StopReason_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::StopReason_<ContainerAllocator>>> & _arg)
  {
    this->stop_reasons = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__StopReasonArray
    std::shared_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__StopReasonArray
    std::shared_ptr<tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopReasonArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stop_reasons != other.stop_reasons) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopReasonArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopReasonArray_

// alias to use template instance with default allocator
using StopReasonArray =
  tier4_planning_msgs::msg::StopReasonArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__STRUCT_HPP_
