// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxMultiFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_multi_feedback.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_FEEDBACK__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_multi_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxMultiFeedback_drivers
{
public:
  explicit Init_LynxMultiFeedback_drivers(::clearpath_motor_msgs::msg::LynxMultiFeedback & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxMultiFeedback drivers(::clearpath_motor_msgs::msg::LynxMultiFeedback::_drivers_type arg)
  {
    msg_.drivers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMultiFeedback msg_;
};

class Init_LynxMultiFeedback_header
{
public:
  Init_LynxMultiFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxMultiFeedback_drivers header(::clearpath_motor_msgs::msg::LynxMultiFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LynxMultiFeedback_drivers(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMultiFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxMultiFeedback>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxMultiFeedback_header();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_FEEDBACK__BUILDER_HPP_
