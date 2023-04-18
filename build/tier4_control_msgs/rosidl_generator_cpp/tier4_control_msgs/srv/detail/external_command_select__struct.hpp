// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_control_msgs:srv/ExternalCommandSelect.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__STRUCT_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'mode'
#include "tier4_control_msgs/msg/detail/external_command_selector_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Request __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExternalCommandSelect_Request_
{
  using Type = ExternalCommandSelect_Request_<ContainerAllocator>;

  explicit ExternalCommandSelect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_init)
  {
    (void)_init;
  }

  explicit ExternalCommandSelect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mode_type =
    tier4_control_msgs::msg::ExternalCommandSelectorMode_<ContainerAllocator>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const tier4_control_msgs::msg::ExternalCommandSelectorMode_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Request
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Request
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalCommandSelect_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalCommandSelect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalCommandSelect_Request_

// alias to use template instance with default allocator
using ExternalCommandSelect_Request =
  tier4_control_msgs::srv::ExternalCommandSelect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_control_msgs


#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Response __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExternalCommandSelect_Response_
{
  using Type = ExternalCommandSelect_Response_<ContainerAllocator>;

  explicit ExternalCommandSelect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ExternalCommandSelect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Response
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__srv__ExternalCommandSelect_Response
    std::shared_ptr<tier4_control_msgs::srv::ExternalCommandSelect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalCommandSelect_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalCommandSelect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalCommandSelect_Response_

// alias to use template instance with default allocator
using ExternalCommandSelect_Response =
  tier4_control_msgs::srv::ExternalCommandSelect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_control_msgs

namespace tier4_control_msgs
{

namespace srv
{

struct ExternalCommandSelect
{
  using Request = tier4_control_msgs::srv::ExternalCommandSelect_Request;
  using Response = tier4_control_msgs::srv::ExternalCommandSelect_Response;
};

}  // namespace srv

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__STRUCT_HPP_
