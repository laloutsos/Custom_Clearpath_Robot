// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/temperature.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/msg/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace msg
{

namespace builder
{

class Init_Temperature_temperatures
{
public:
  explicit Init_Temperature_temperatures(::clearpath_platform_msgs::msg::Temperature & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::msg::Temperature temperatures(::clearpath_platform_msgs::msg::Temperature::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Temperature msg_;
};

class Init_Temperature_header
{
public:
  Init_Temperature_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_temperatures header(::clearpath_platform_msgs::msg::Temperature::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Temperature_temperatures(msg_);
  }

private:
  ::clearpath_platform_msgs::msg::Temperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::msg::Temperature>()
{
  return clearpath_platform_msgs::msg::builder::Init_Temperature_header();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
