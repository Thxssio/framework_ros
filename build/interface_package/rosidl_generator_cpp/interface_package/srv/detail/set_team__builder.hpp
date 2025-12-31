// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/SetTeam.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/set_team__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SetTeam_Request_team
{
public:
  Init_SetTeam_Request_team()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::SetTeam_Request team(::interface_package::srv::SetTeam_Request::_team_type arg)
  {
    msg_.team = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SetTeam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SetTeam_Request>()
{
  return interface_package::srv::builder::Init_SetTeam_Request_team();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SetTeam_Response_message
{
public:
  explicit Init_SetTeam_Response_message(::interface_package::srv::SetTeam_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SetTeam_Response message(::interface_package::srv::SetTeam_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SetTeam_Response msg_;
};

class Init_SetTeam_Response_ok
{
public:
  Init_SetTeam_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTeam_Response_message ok(::interface_package::srv::SetTeam_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_SetTeam_Response_message(msg_);
  }

private:
  ::interface_package::srv::SetTeam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SetTeam_Response>()
{
  return interface_package::srv::builder::Init_SetTeam_Response_ok();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__BUILDER_HPP_
