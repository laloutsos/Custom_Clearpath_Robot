// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxMultiStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_multi_status.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_STATUS__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_multi_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxMultiStatus_drivers
{
public:
  explicit Init_LynxMultiStatus_drivers(::clearpath_motor_msgs::msg::LynxMultiStatus & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxMultiStatus drivers(::clearpath_motor_msgs::msg::LynxMultiStatus::_drivers_type arg)
  {
    msg_.drivers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMultiStatus msg_;
};

class Init_LynxMultiStatus_header
{
public:
  Init_LynxMultiStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxMultiStatus_drivers header(::clearpath_motor_msgs::msg::LynxMultiStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LynxMultiStatus_drivers(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxMultiStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxMultiStatus>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxMultiStatus_header();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_STATUS__BUILDER_HPP_
