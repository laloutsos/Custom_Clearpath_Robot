// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_motor_msgs:msg/LynxMultiFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_multi_feedback.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_FEEDBACK__STRUCT_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'drivers'
#include "clearpath_motor_msgs/msg/detail/lynx_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clearpath_motor_msgs__msg__LynxMultiFeedback __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_motor_msgs__msg__LynxMultiFeedback __declspec(deprecated)
#endif

namespace clearpath_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LynxMultiFeedback_
{
  using Type = LynxMultiFeedback_<ContainerAllocator>;

  explicit LynxMultiFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LynxMultiFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drivers_type =
    std::vector<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>>;
  _drivers_type drivers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drivers(
    const std::vector<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>> & _arg)
  {
    this->drivers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxMultiFeedback
    std::shared_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxMultiFeedback
    std::shared_ptr<clearpath_motor_msgs::msg::LynxMultiFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LynxMultiFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drivers != other.drivers) {
      return false;
    }
    return true;
  }
  bool operator!=(const LynxMultiFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LynxMultiFeedback_

// alias to use template instance with default allocator
using LynxMultiFeedback =
  clearpath_motor_msgs::msg::LynxMultiFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_FEEDBACK__STRUCT_HPP_
