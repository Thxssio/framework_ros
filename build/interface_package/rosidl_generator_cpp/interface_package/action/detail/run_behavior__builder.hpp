// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:action/RunBehavior.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__BUILDER_HPP_
#define INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/action/detail/run_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_Goal_prep
{
public:
  explicit Init_RunBehavior_Goal_prep(::interface_package::action::RunBehavior_Goal & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_Goal prep(::interface_package::action::RunBehavior_Goal::_prep_type arg)
  {
    msg_.prep = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Goal msg_;
};

class Init_RunBehavior_Goal_kick
{
public:
  explicit Init_RunBehavior_Goal_kick(::interface_package::action::RunBehavior_Goal & msg)
  : msg_(msg)
  {}
  Init_RunBehavior_Goal_prep kick(::interface_package::action::RunBehavior_Goal::_kick_type arg)
  {
    msg_.kick = std::move(arg);
    return Init_RunBehavior_Goal_prep(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Goal msg_;
};

class Init_RunBehavior_Goal_nav
{
public:
  explicit Init_RunBehavior_Goal_nav(::interface_package::action::RunBehavior_Goal & msg)
  : msg_(msg)
  {}
  Init_RunBehavior_Goal_kick nav(::interface_package::action::RunBehavior_Goal::_nav_type arg)
  {
    msg_.nav = std::move(arg);
    return Init_RunBehavior_Goal_kick(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Goal msg_;
};

class Init_RunBehavior_Goal_behavior
{
public:
  explicit Init_RunBehavior_Goal_behavior(::interface_package::action::RunBehavior_Goal & msg)
  : msg_(msg)
  {}
  Init_RunBehavior_Goal_nav behavior(::interface_package::action::RunBehavior_Goal::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_RunBehavior_Goal_nav(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Goal msg_;
};

class Init_RunBehavior_Goal_robot_id
{
public:
  Init_RunBehavior_Goal_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_Goal_behavior robot_id(::interface_package::action::RunBehavior_Goal::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RunBehavior_Goal_behavior(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_Goal>()
{
  return interface_package::action::builder::Init_RunBehavior_Goal_robot_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_Result_message
{
public:
  explicit Init_RunBehavior_Result_message(::interface_package::action::RunBehavior_Result & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_Result message(::interface_package::action::RunBehavior_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Result msg_;
};

class Init_RunBehavior_Result_accepted
{
public:
  Init_RunBehavior_Result_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_Result_message accepted(::interface_package::action::RunBehavior_Result::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunBehavior_Result_message(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_Result>()
{
  return interface_package::action::builder::Init_RunBehavior_Result_accepted();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_Feedback_last_command
{
public:
  explicit Init_RunBehavior_Feedback_last_command(::interface_package::action::RunBehavior_Feedback & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_Feedback last_command(::interface_package::action::RunBehavior_Feedback::_last_command_type arg)
  {
    msg_.last_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Feedback msg_;
};

class Init_RunBehavior_Feedback_status
{
public:
  Init_RunBehavior_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_Feedback_last_command status(::interface_package::action::RunBehavior_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunBehavior_Feedback_last_command(msg_);
  }

private:
  ::interface_package::action::RunBehavior_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_Feedback>()
{
  return interface_package::action::builder::Init_RunBehavior_Feedback_status();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_SendGoal_Request_goal
{
public:
  explicit Init_RunBehavior_SendGoal_Request_goal(::interface_package::action::RunBehavior_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_SendGoal_Request goal(::interface_package::action::RunBehavior_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_SendGoal_Request msg_;
};

class Init_RunBehavior_SendGoal_Request_goal_id
{
public:
  Init_RunBehavior_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_SendGoal_Request_goal goal_id(::interface_package::action::RunBehavior_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunBehavior_SendGoal_Request_goal(msg_);
  }

private:
  ::interface_package::action::RunBehavior_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_SendGoal_Request>()
{
  return interface_package::action::builder::Init_RunBehavior_SendGoal_Request_goal_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_SendGoal_Response_stamp
{
public:
  explicit Init_RunBehavior_SendGoal_Response_stamp(::interface_package::action::RunBehavior_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_SendGoal_Response stamp(::interface_package::action::RunBehavior_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_SendGoal_Response msg_;
};

class Init_RunBehavior_SendGoal_Response_accepted
{
public:
  Init_RunBehavior_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_SendGoal_Response_stamp accepted(::interface_package::action::RunBehavior_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunBehavior_SendGoal_Response_stamp(msg_);
  }

private:
  ::interface_package::action::RunBehavior_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_SendGoal_Response>()
{
  return interface_package::action::builder::Init_RunBehavior_SendGoal_Response_accepted();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_GetResult_Request_goal_id
{
public:
  Init_RunBehavior_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::action::RunBehavior_GetResult_Request goal_id(::interface_package::action::RunBehavior_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_GetResult_Request>()
{
  return interface_package::action::builder::Init_RunBehavior_GetResult_Request_goal_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_GetResult_Response_result
{
public:
  explicit Init_RunBehavior_GetResult_Response_result(::interface_package::action::RunBehavior_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_GetResult_Response result(::interface_package::action::RunBehavior_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_GetResult_Response msg_;
};

class Init_RunBehavior_GetResult_Response_status
{
public:
  Init_RunBehavior_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_GetResult_Response_result status(::interface_package::action::RunBehavior_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunBehavior_GetResult_Response_result(msg_);
  }

private:
  ::interface_package::action::RunBehavior_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_GetResult_Response>()
{
  return interface_package::action::builder::Init_RunBehavior_GetResult_Response_status();
}

}  // namespace interface_package


namespace interface_package
{

namespace action
{

namespace builder
{

class Init_RunBehavior_FeedbackMessage_feedback
{
public:
  explicit Init_RunBehavior_FeedbackMessage_feedback(::interface_package::action::RunBehavior_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interface_package::action::RunBehavior_FeedbackMessage feedback(::interface_package::action::RunBehavior_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::action::RunBehavior_FeedbackMessage msg_;
};

class Init_RunBehavior_FeedbackMessage_goal_id
{
public:
  Init_RunBehavior_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunBehavior_FeedbackMessage_feedback goal_id(::interface_package::action::RunBehavior_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunBehavior_FeedbackMessage_feedback(msg_);
  }

private:
  ::interface_package::action::RunBehavior_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::action::RunBehavior_FeedbackMessage>()
{
  return interface_package::action::builder::Init_RunBehavior_FeedbackMessage_goal_id();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__BUILDER_HPP_
