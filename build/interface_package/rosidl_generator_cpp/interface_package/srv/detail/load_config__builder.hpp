// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/LoadConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/load_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_LoadConfig_Request_path
{
public:
  explicit Init_LoadConfig_Request_path(::interface_package::srv::LoadConfig_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::LoadConfig_Request path(::interface_package::srv::LoadConfig_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Request msg_;
};

class Init_LoadConfig_Request_kind
{
public:
  Init_LoadConfig_Request_kind()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadConfig_Request_path kind(::interface_package::srv::LoadConfig_Request::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return Init_LoadConfig_Request_path(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::LoadConfig_Request>()
{
  return interface_package::srv::builder::Init_LoadConfig_Request_kind();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_LoadConfig_Response_prep
{
public:
  explicit Init_LoadConfig_Response_prep(::interface_package::srv::LoadConfig_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::LoadConfig_Response prep(::interface_package::srv::LoadConfig_Response::_prep_type arg)
  {
    msg_.prep = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Response msg_;
};

class Init_LoadConfig_Response_kick
{
public:
  explicit Init_LoadConfig_Response_kick(::interface_package::srv::LoadConfig_Response & msg)
  : msg_(msg)
  {}
  Init_LoadConfig_Response_prep kick(::interface_package::srv::LoadConfig_Response::_kick_type arg)
  {
    msg_.kick = std::move(arg);
    return Init_LoadConfig_Response_prep(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Response msg_;
};

class Init_LoadConfig_Response_nav
{
public:
  explicit Init_LoadConfig_Response_nav(::interface_package::srv::LoadConfig_Response & msg)
  : msg_(msg)
  {}
  Init_LoadConfig_Response_kick nav(::interface_package::srv::LoadConfig_Response::_nav_type arg)
  {
    msg_.nav = std::move(arg);
    return Init_LoadConfig_Response_kick(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Response msg_;
};

class Init_LoadConfig_Response_message
{
public:
  explicit Init_LoadConfig_Response_message(::interface_package::srv::LoadConfig_Response & msg)
  : msg_(msg)
  {}
  Init_LoadConfig_Response_nav message(::interface_package::srv::LoadConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LoadConfig_Response_nav(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Response msg_;
};

class Init_LoadConfig_Response_ok
{
public:
  Init_LoadConfig_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadConfig_Response_message ok(::interface_package::srv::LoadConfig_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_LoadConfig_Response_message(msg_);
  }

private:
  ::interface_package::srv::LoadConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::LoadConfig_Response>()
{
  return interface_package::srv::builder::Init_LoadConfig_Response_ok();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__BUILDER_HPP_
