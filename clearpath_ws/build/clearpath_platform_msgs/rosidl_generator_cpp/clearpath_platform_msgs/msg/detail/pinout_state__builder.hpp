// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_state.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/pinout_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_PinoutState_output_periods
{
public:
  explicit Init_PinoutState_output_periods(::clearpath_platform_msgs::msg::PinoutState & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::PinoutState output_periods(::clearpath_platform_msgs::msg::PinoutState::_output_periods_type arg)
  {
    msg_.output_periods = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutState msg_;
};

class Init_PinoutState_outputs
{
public:
  explicit Init_PinoutState_outputs(::clearpath_platform_msgs::msg::PinoutState & msg)
  : msg_(msg)
  {}
  Init_PinoutState_output_periods outputs(::clearpath_platform_msgs::msg::PinoutState::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return Init_PinoutState_output_periods(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutState msg_;
};

class Init_PinoutState_inputs
{
public:
  explicit Init_PinoutState_inputs(::clearpath_platform_msgs::msg::PinoutState & msg)
  : msg_(msg)
  {}
  Init_PinoutState_outputs inputs(::clearpath_platform_msgs::msg::PinoutState::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_PinoutState_outputs(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutState msg_;
};

class Init_PinoutState_rails
{
public:
  explicit Init_PinoutState_rails(::clearpath_platform_msgs::msg::PinoutState & msg)
  : msg_(msg)
  {}
  Init_PinoutState_inputs rails(::clearpath_platform_msgs::msg::PinoutState::_rails_type arg)
  {
    msg_.rails = std::move(arg);
    return Init_PinoutState_inputs(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutState msg_;
};

class Init_PinoutState_header
{
public:
  Init_PinoutState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PinoutState_rails header(::clearpath_platform_msgs::msg::PinoutState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PinoutState_rails(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::PinoutState>()
{
  return clearpath_platform_msgs::msg::builder::Init_PinoutState_header();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__BUILDER_HPP_
