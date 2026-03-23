// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_feedback.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxFeedback_travel
{
public:
  explicit Init_LynxFeedback_travel(::clearpath_motor_msgs::msg::LynxFeedback & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxFeedback travel(::clearpath_motor_msgs::msg::LynxFeedback::_travel_type arg)
  {
    msg_.travel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxFeedback msg_;
};

class Init_LynxFeedback_velocity
{
public:
  explicit Init_LynxFeedback_velocity(::clearpath_motor_msgs::msg::LynxFeedback & msg)
  : msg_(msg)
  {}
  Init_LynxFeedback_travel velocity(::clearpath_motor_msgs::msg::LynxFeedback::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_LynxFeedback_travel(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxFeedback msg_;
};

class Init_LynxFeedback_voltage
{
public:
  explicit Init_LynxFeedback_voltage(::clearpath_motor_msgs::msg::LynxFeedback & msg)
  : msg_(msg)
  {}
  Init_LynxFeedback_velocity voltage(::clearpath_motor_msgs::msg::LynxFeedback::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_LynxFeedback_velocity(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxFeedback msg_;
};

class Init_LynxFeedback_current
{
public:
  explicit Init_LynxFeedback_current(::clearpath_motor_msgs::msg::LynxFeedback & msg)
  : msg_(msg)
  {}
  Init_LynxFeedback_voltage current(::clearpath_motor_msgs::msg::LynxFeedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_LynxFeedback_voltage(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxFeedback msg_;
};

class Init_LynxFeedback_joint_name
{
public:
  explicit Init_LynxFeedback_joint_name(::clearpath_motor_msgs::msg::LynxFeedback & msg)
  : msg_(msg)
  {}
  Init_LynxFeedback_current joint_name(::clearpath_motor_msgs::msg::LynxFeedback::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_LynxFeedback_current(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxFeedback msg_;
};

class Init_LynxFeedback_can_id
{
public:
  Init_LynxFeedback_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxFeedback_joint_name can_id(::clearpath_motor_msgs::msg::LynxFeedback::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_LynxFeedback_joint_name(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxFeedback>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxFeedback_can_id();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__BUILDER_HPP_
