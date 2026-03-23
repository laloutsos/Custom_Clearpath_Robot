// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:action/LynxCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/action/lynx_calibrate.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__ACTION__DETAIL__LYNX_CALIBRATE__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__ACTION__DETAIL__LYNX_CALIBRATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_Goal>()
{
  return ::clearpath_motor_msgs::action::LynxCalibrate_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_Result_offset
{
public:
  Init_LynxCalibrate_Result_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_Result offset(::clearpath_motor_msgs::action::LynxCalibrate_Result::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_Result>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_Result_offset();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_Feedback_iteration
{
public:
  Init_LynxCalibrate_Feedback_iteration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_Feedback iteration(::clearpath_motor_msgs::action::LynxCalibrate_Feedback::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_Feedback>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_Feedback_iteration();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_SendGoal_Request_goal
{
public:
  explicit Init_LynxCalibrate_SendGoal_Request_goal(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request goal(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request msg_;
};

class Init_LynxCalibrate_SendGoal_Request_goal_id
{
public:
  Init_LynxCalibrate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxCalibrate_SendGoal_Request_goal goal_id(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LynxCalibrate_SendGoal_Request_goal(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_SendGoal_Request_goal_id();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_SendGoal_Response_stamp
{
public:
  explicit Init_LynxCalibrate_SendGoal_Response_stamp(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response stamp(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response msg_;
};

class Init_LynxCalibrate_SendGoal_Response_accepted
{
public:
  Init_LynxCalibrate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxCalibrate_SendGoal_Response_stamp accepted(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LynxCalibrate_SendGoal_Response_stamp(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_SendGoal_Response_accepted();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_SendGoal_Event_response
{
public:
  explicit Init_LynxCalibrate_SendGoal_Event_response(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event response(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event msg_;
};

class Init_LynxCalibrate_SendGoal_Event_request
{
public:
  explicit Init_LynxCalibrate_SendGoal_Event_request(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_LynxCalibrate_SendGoal_Event_response request(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LynxCalibrate_SendGoal_Event_response(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event msg_;
};

class Init_LynxCalibrate_SendGoal_Event_info
{
public:
  Init_LynxCalibrate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxCalibrate_SendGoal_Event_request info(::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LynxCalibrate_SendGoal_Event_request(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_SendGoal_Event_info();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_GetResult_Request_goal_id
{
public:
  Init_LynxCalibrate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request goal_id(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_GetResult_Request_goal_id();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_GetResult_Response_result
{
public:
  explicit Init_LynxCalibrate_GetResult_Response_result(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response result(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response msg_;
};

class Init_LynxCalibrate_GetResult_Response_status
{
public:
  Init_LynxCalibrate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxCalibrate_GetResult_Response_result status(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LynxCalibrate_GetResult_Response_result(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_GetResult_Response_status();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_GetResult_Event_response
{
public:
  explicit Init_LynxCalibrate_GetResult_Event_response(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event response(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event msg_;
};

class Init_LynxCalibrate_GetResult_Event_request
{
public:
  explicit Init_LynxCalibrate_GetResult_Event_request(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_LynxCalibrate_GetResult_Event_response request(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LynxCalibrate_GetResult_Event_response(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event msg_;
};

class Init_LynxCalibrate_GetResult_Event_info
{
public:
  Init_LynxCalibrate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxCalibrate_GetResult_Event_request info(::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LynxCalibrate_GetResult_Event_request(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_GetResult_Event_info();
}

}  // namespace clearpath_motor_msgs


namespace clearpath_motor_msgs
{

namespace action
{

namespace builder
{

class Init_LynxCalibrate_FeedbackMessage_feedback
{
public:
  explicit Init_LynxCalibrate_FeedbackMessage_feedback(::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage feedback(::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage msg_;
};

class Init_LynxCalibrate_FeedbackMessage_goal_id
{
public:
  Init_LynxCalibrate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxCalibrate_FeedbackMessage_feedback goal_id(::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LynxCalibrate_FeedbackMessage_feedback(msg_);
  }

private:
  ::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage>()
{
  return clearpath_motor_msgs::action::builder::Init_LynxCalibrate_FeedbackMessage_goal_id();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__ACTION__DETAIL__LYNX_CALIBRATE__BUILDER_HPP_
