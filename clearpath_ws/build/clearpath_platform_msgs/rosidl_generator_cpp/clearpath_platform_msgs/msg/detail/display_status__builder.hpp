// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/display_status.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/display_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_DisplayStatus_string2
{
public:
  explicit Init_DisplayStatus_string2(::clearpath_platform_msgs::msg::DisplayStatus & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::DisplayStatus string2(::clearpath_platform_msgs::msg::DisplayStatus::_string2_type arg)
  {
    msg_.string2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DisplayStatus msg_;
};

class Init_DisplayStatus_string1
{
public:
  Init_DisplayStatus_string1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DisplayStatus_string2 string1(::clearpath_platform_msgs::msg::DisplayStatus::_string1_type arg)
  {
    msg_.string1 = std::move(arg);
    return Init_DisplayStatus_string2(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::DisplayStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::DisplayStatus>()
{
  return clearpath_platform_msgs::msg::builder::Init_DisplayStatus_string1();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__BUILDER_HPP_
