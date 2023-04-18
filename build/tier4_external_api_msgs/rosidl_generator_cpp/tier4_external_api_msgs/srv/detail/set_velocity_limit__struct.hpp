// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:srv/SetVelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_VELOCITY_LIMIT__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_VELOCITY_LIMIT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Request __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVelocityLimit_Request_
{
  using Type = SetVelocityLimit_Request_<ContainerAllocator>;

  explicit SetVelocityLimit_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
    }
  }

  explicit SetVelocityLimit_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _velocity_type =
    float;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Request
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Request
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVelocityLimit_Request_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVelocityLimit_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVelocityLimit_Request_

// alias to use template instance with default allocator
using SetVelocityLimit_Request =
  tier4_external_api_msgs::srv::SetVelocityLimit_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_external_api_msgs


// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Response __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVelocityLimit_Response_
{
  using Type = SetVelocityLimit_Response_<ContainerAllocator>;

  explicit SetVelocityLimit_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit SetVelocityLimit_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Response
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__srv__SetVelocityLimit_Response
    std::shared_ptr<tier4_external_api_msgs::srv::SetVelocityLimit_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVelocityLimit_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVelocityLimit_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVelocityLimit_Response_

// alias to use template instance with default allocator
using SetVelocityLimit_Response =
  tier4_external_api_msgs::srv::SetVelocityLimit_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace tier4_external_api_msgs
{

namespace srv
{

struct SetVelocityLimit
{
  using Request = tier4_external_api_msgs::srv::SetVelocityLimit_Request;
  using Response = tier4_external_api_msgs::srv::SetVelocityLimit_Response;
};

}  // namespace srv

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_VELOCITY_LIMIT__STRUCT_HPP_
