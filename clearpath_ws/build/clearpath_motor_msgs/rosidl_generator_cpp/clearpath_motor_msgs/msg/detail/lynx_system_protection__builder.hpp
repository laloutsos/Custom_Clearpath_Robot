// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_system_protection.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_system_protection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxSystemProtection_motor_states
{
public:
  explicit Init_LynxSystemProtection_motor_states(::clearpath_motor_msgs::msg::LynxSystemProtection & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxSystemProtection motor_states(::clearpath_motor_msgs::msg::LynxSystemProtection::_motor_states_type arg)
  {
    msg_.motor_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxSystemProtection msg_;
};

class Init_LynxSystemProtection_system_state
{
public:
  explicit Init_LynxSystemProtection_system_state(::clearpath_motor_msgs::msg::LynxSystemProtection & msg)
  : msg_(msg)
  {}
  Init_LynxSystemProtection_motor_states system_state(::clearpath_motor_msgs::msg::LynxSystemProtection::_system_state_type arg)
  {
    msg_.system_state = std::move(arg);
    return Init_LynxSystemProtection_motor_states(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxSystemProtection msg_;
};

class Init_LynxSystemProtection_header
{
public:
  Init_LynxSystemProtection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxSystemProtection_system_state header(::clearpath_motor_msgs::msg::LynxSystemProtection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LynxSystemProtection_system_state(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxSystemProtection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxSystemProtection>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxSystemProtection_header();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__BUILDER_HPP_
