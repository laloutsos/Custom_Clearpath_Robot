// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_motor_msgs:msg/LynxFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_feedback.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__STRUCT_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_motor_msgs__msg__LynxFeedback __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_motor_msgs__msg__LynxFeedback __declspec(deprecated)
#endif

namespace clearpath_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LynxFeedback_
{
  using Type = LynxFeedback_<ContainerAllocator>;

  explicit LynxFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->joint_name = "";
      this->current = 0.0f;
      this->voltage = 0.0f;
      this->velocity = 0.0f;
      this->travel = 0.0f;
    }
  }

  explicit LynxFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->joint_name = "";
      this->current = 0.0f;
      this->voltage = 0.0f;
      this->velocity = 0.0f;
      this->travel = 0.0f;
    }
  }

  // field types and members
  using _can_id_type =
    uint8_t;
  _can_id_type can_id;
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _current_type =
    float;
  _current_type current;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _travel_type =
    float;
  _travel_type travel;

  // setters for named parameter idiom
  Type & set__can_id(
    const uint8_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__travel(
    const float & _arg)
  {
    this->travel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxFeedback
    std::shared_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxFeedback
    std::shared_ptr<clearpath_motor_msgs::msg::LynxFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LynxFeedback_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->travel != other.travel) {
      return false;
    }
    return true;
  }
  bool operator!=(const LynxFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LynxFeedback_

// alias to use template instance with default allocator
using LynxFeedback =
  clearpath_motor_msgs::msg::LynxFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__STRUCT_HPP_
