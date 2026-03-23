// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxMultiDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_multi_debug.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_DEBUG__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_multi_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxMultiDebug_drivers
{
public:
  explicit Init_LynxMultiDebug_drivers(::clearpath_motor_msgs::msg::LynxMultiDebug & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxMultiDebug drivers(::clearpath_motor_msgs::msg::LynxMultiDebug::_drivers_type arg)
  {
    msg_.drivers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMultiDebug msg_;
};

class Init_LynxMultiDebug_header
{
public:
  Init_LynxMultiDebug_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxMultiDebug_drivers header(::clearpath_motor_msgs::msg::LynxMultiDebug::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LynxMultiDebug_drivers(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMultiDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxMultiDebug>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxMultiDebug_header();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_DEBUG__BUILDER_HPP_
