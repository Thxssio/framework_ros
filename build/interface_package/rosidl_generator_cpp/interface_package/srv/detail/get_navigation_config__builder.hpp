// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/GetNavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/get_navigation_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::GetNavigationConfig_Request>()
{
  return ::interface_package::srv::GetNavigationConfig_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_GetNavigationConfig_Response_config
{
public:
  Init_GetNavigationConfig_Response_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::GetNavigationConfig_Response config(::interface_package::srv::GetNavigationConfig_Response::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::GetNavigationConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::GetNavigationConfig_Response>()
{
  return interface_package::srv::builder::Init_GetNavigationConfig_Response_config();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__BUILDER_HPP_
