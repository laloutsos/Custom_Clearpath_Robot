// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxMotorProtection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_motor_protection.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MOTOR_PROTECTION__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MOTOR_PROTECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxMotorProtection_state
{
public:
  explicit Init_LynxMotorProtection_state(::clearpath_motor_msgs::msg::LynxMotorProtection & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxMotorProtection state(::clearpath_motor_msgs::msg::LynxMotorProtection::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMotorProtection msg_;
};

class Init_LynxMotorProtection_joint_name
{
public:
  explicit Init_LynxMotorProtection_joint_name(::clearpath_motor_msgs::msg::LynxMotorProtection & msg)
  : msg_(msg)
  {}
  Init_LynxMotorProtection_state joint_name(::clearpath_motor_msgs::msg::LynxMotorProtection::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_LynxMotorProtection_state(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMotorProtection msg_;
};

class Init_LynxMotorProtection_can_id
{
public:
  Init_LynxMotorProtection_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxMotorProtection_joint_name can_id(::clearpath_motor_msgs::msg::LynxMotorProtection::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_LynxMotorProtection_joint_name(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMotorProtection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxMotorProtection>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxMotorProtection_can_id();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MOTOR_PROTECTION__BUILDER_HPP_
