// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__STRUCT_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__STRUCT_HPP_

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
// Member 'error'
#include "control_performance_analysis/msg/detail/error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_performance_analysis__msg__ErrorStamped __attribute__((deprecated))
#else
# define DEPRECATED__control_performance_analysis__msg__ErrorStamped __declspec(deprecated)
#endif

namespace control_performance_analysis
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorStamped_
{
  using Type = ErrorStamped_<ContainerAllocator>;

  explicit ErrorStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    error(_init)
  {
    (void)_init;
  }

  explicit ErrorStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    error(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _error_type =
    control_performance_analysis::msg::Error_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__error(
    const control_performance_analysis::msg::Error_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_performance_analysis::msg::ErrorStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_performance_analysis::msg::ErrorStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_performance_analysis::msg::ErrorStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_performance_analysis::msg::ErrorStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_performance_analysis__msg__ErrorStamped
    std::shared_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_performance_analysis__msg__ErrorStamped
    std::shared_ptr<control_performance_analysis::msg::ErrorStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorStamped_

// alias to use template instance with default allocator
using ErrorStamped =
  control_performance_analysis::msg::ErrorStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__STRUCT_HPP_
