// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/Operator.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OPERATOR__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OPERATOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__Operator __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__Operator __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Operator_
{
  using Type = Operator_<ContainerAllocator>;

  explicit Operator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit Operator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DRIVER =
    1u;
  static constexpr uint8_t AUTONOMOUS =
    2u;
  static constexpr uint8_t OBSERVER =
    3u;

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::Operator_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::Operator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::Operator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::Operator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__Operator
    std::shared_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__Operator
    std::shared_ptr<tier4_external_api_msgs::msg::Operator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Operator_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Operator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Operator_

// alias to use template instance with default allocator
using Operator =
  tier4_external_api_msgs::msg::Operator_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Operator_<ContainerAllocator>::DRIVER;
template<typename ContainerAllocator>
constexpr uint8_t Operator_<ContainerAllocator>::AUTONOMOUS;
template<typename ContainerAllocator>
constexpr uint8_t Operator_<ContainerAllocator>::OBSERVER;

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OPERATOR__STRUCT_HPP_
