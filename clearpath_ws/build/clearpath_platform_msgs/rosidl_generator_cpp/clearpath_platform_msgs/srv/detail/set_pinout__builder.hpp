// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_platform_msgs:srv/SetPinout.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/srv/set_pinout.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__SET_PINOUT__BUILDER_HPP_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__SET_PINOUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_platform_msgs/srv/detail/set_pinout__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_platform_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPinout_Request_toggle_period
{
public:
  explicit Init_SetPinout_Request_toggle_period(::clearpath_platform_msgs::srv::SetPinout_Request & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::srv::SetPinout_Request toggle_period(::clearpath_platform_msgs::srv::SetPinout_Request::_toggle_period_type arg)
  {
    msg_.toggle_period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Request msg_;
};

class Init_SetPinout_Request_state
{
public:
  Init_SetPinout_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPinout_Request_toggle_period state(::clearpath_platform_msgs::srv::SetPinout_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SetPinout_Request_toggle_period(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::srv::SetPinout_Request>()
{
  return clearpath_platform_msgs::srv::builder::Init_SetPinout_Request_state();
}

}  // namespace clearpath_platform_msgs


namespace clearpath_platform_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPinout_Response_message
{
public:
  explicit Init_SetPinout_Response_message(::clearpath_platform_msgs::srv::SetPinout_Response & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::srv::SetPinout_Response message(::clearpath_platform_msgs::srv::SetPinout_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Response msg_;
};

class Init_SetPinout_Response_success
{
public:
  Init_SetPinout_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPinout_Response_message success(::clearpath_platform_msgs::srv::SetPinout_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetPinout_Response_message(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::srv::SetPinout_Response>()
{
  return clearpath_platform_msgs::srv::builder::Init_SetPinout_Response_success();
}

}  // namespace clearpath_platform_msgs


namespace clearpath_platform_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPinout_Event_response
{
public:
  explicit Init_SetPinout_Event_response(::clearpath_platform_msgs::srv::SetPinout_Event & msg)
  : msg_(msg)
  {}
  ::clearpath_platform_msgs::srv::SetPinout_Event response(::clearpath_platform_msgs::srv::SetPinout_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Event msg_;
};

class Init_SetPinout_Event_request
{
public:
  explicit Init_SetPinout_Event_request(::clearpath_platform_msgs::srv::SetPinout_Event & msg)
  : msg_(msg)
  {}
  Init_SetPinout_Event_response request(::clearpath_platform_msgs::srv::SetPinout_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPinout_Event_response(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Event msg_;
};

class Init_SetPinout_Event_info
{
public:
  Init_SetPinout_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPinout_Event_request info(::clearpath_platform_msgs::srv::SetPinout_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetPinout_Event_request(msg_);
  }

private:
  ::clearpath_platform_msgs::srv::SetPinout_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_platform_msgs::srv::SetPinout_Event>()
{
  return clearpath_platform_msgs::srv::builder::Init_SetPinout_Event_info();
}

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__SET_PINOUT__BUILDER_HPP_
