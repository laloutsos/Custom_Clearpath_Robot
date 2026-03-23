// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_command.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/pinout_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_PinoutCommand_outputs
{
public:
  explicit Init_PinoutCommand_outputs(::clearpath_platform_msgs::msg::PinoutCommand & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::PinoutCommand outputs(::clearpath_platform_msgs::msg::PinoutCommand::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutCommand msg_;
};

class Init_PinoutCommand_rails
{
public:
  Init_PinoutCommand_rails()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PinoutCommand_outputs rails(::clearpath_platform_msgs::msg::PinoutCommand::_rails_type arg)
  {
    msg_.rails = std::move(arg);
    return Init_PinoutCommand_outputs(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::PinoutCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::PinoutCommand>()
{
  return clearpath_platform_msgs::msg::builder::Init_PinoutCommand_rails();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__BUILDER_HPP_
