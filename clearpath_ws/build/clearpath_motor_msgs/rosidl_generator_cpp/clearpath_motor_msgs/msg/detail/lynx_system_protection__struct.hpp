// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_system_protection.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__STRUCT_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__STRUCT_HPP_

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
// Member 'motor_states'
#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clearpath_motor_msgs__msg__LynxSystemProtection __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_motor_msgs__msg__LynxSystemProtection __declspec(deprecated)
#endif

namespace clearpath_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LynxSystemProtection_
{
  using Type = LynxSystemProtection_<ContainerAllocator>;

  explicit LynxSystemProtection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_state = 0;
    }
  }

  explicit LynxSystemProtection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_state = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _system_state_type =
    uint8_t;
  _system_state_type system_state;
  using _motor_states_type =
    std::vector<clearpath_motor_msgs::msg::LynxMotorProtection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<clearpath_motor_msgs::msg::LynxMotorProtection_<ContainerAllocator>>>;
  _motor_states_type motor_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__system_state(
    const uint8_t & _arg)
  {
    this->system_state = _arg;
    return *this;
  }
  Type & set__motor_states(
    const std::vector<clearpath_motor_msgs::msg::LynxMotorProtection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<clearpath_motor_msgs::msg::LynxMotorProtection_<ContainerAllocator>>> & _arg)
  {
    this->motor_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxSystemProtection
    std::shared_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxSystemProtection
    std::shared_ptr<clearpath_motor_msgs::msg::LynxSystemProtection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LynxSystemProtection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->system_state != other.system_state) {
      return false;
    }
    if (this->motor_states != other.motor_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const LynxSystemProtection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LynxSystemProtection_

// alias to use template instance with default allocator
using LynxSystemProtection =
  clearpath_motor_msgs::msg::LynxSystemProtection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__STRUCT_HPP_
