// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:action/RunBehavior.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__TRAITS_HPP_
#define INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/action/detail/run_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'behavior'
#include "interface_package/msg/detail/behavior_choice__traits.hpp"
// Member 'nav'
#include "interface_package/msg/detail/navigation_config__traits.hpp"
// Member 'kick'
#include "interface_package/msg/detail/kick_parameters__traits.hpp"
// Member 'prep'
#include "interface_package/msg/detail/prepare_kickoff_parameters__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: behavior
  {
    out << "behavior: ";
    to_flow_style_yaml(msg.behavior, out);
    out << ", ";
  }

  // member: nav
  {
    out << "nav: ";
    to_flow_style_yaml(msg.nav, out);
    out << ", ";
  }

  // member: kick
  {
    out << "kick: ";
    to_flow_style_yaml(msg.kick, out);
    out << ", ";
  }

  // member: prep
  {
    out << "prep: ";
    to_flow_style_yaml(msg.prep, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior:\n";
    to_block_style_yaml(msg.behavior, out, indentation + 2);
  }

  // member: nav
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav:\n";
    to_block_style_yaml(msg.nav, out, indentation + 2);
  }

  // member: kick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick:\n";
    to_block_style_yaml(msg.kick, out, indentation + 2);
  }

  // member: prep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prep:\n";
    to_block_style_yaml(msg.prep, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_Goal & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_Goal>()
{
  return "interface_package::action::RunBehavior_Goal";
}

template<>
inline const char * name<interface_package::action::RunBehavior_Goal>()
{
  return "interface_package/action/RunBehavior_Goal";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_Goal>
  : std::integral_constant<bool, has_fixed_size<interface_package::msg::BehaviorChoice>::value && has_fixed_size<interface_package::msg::KickParameters>::value && has_fixed_size<interface_package::msg::NavigationConfig>::value && has_fixed_size<interface_package::msg::PrepareKickoffParameters>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_Goal>
  : std::integral_constant<bool, has_bounded_size<interface_package::msg::BehaviorChoice>::value && has_bounded_size<interface_package::msg::KickParameters>::value && has_bounded_size<interface_package::msg::NavigationConfig>::value && has_bounded_size<interface_package::msg::PrepareKickoffParameters>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_Result & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_Result>()
{
  return "interface_package::action::RunBehavior_Result";
}

template<>
inline const char * name<interface_package::action::RunBehavior_Result>()
{
  return "interface_package/action/RunBehavior_Result";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::action::RunBehavior_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "interface_package/msg/detail/behavior_status__traits.hpp"
// Member 'last_command'
#include "interface_package/msg/detail/control_command__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: last_command
  {
    out << "last_command: ";
    to_flow_style_yaml(msg.last_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: last_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_command:\n";
    to_block_style_yaml(msg.last_command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_Feedback & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_Feedback>()
{
  return "interface_package::action::RunBehavior_Feedback";
}

template<>
inline const char * name<interface_package::action::RunBehavior_Feedback>()
{
  return "interface_package/action/RunBehavior_Feedback";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_Feedback>
  : std::integral_constant<bool, has_fixed_size<interface_package::msg::BehaviorStatus>::value && has_fixed_size<interface_package::msg::ControlCommand>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_Feedback>
  : std::integral_constant<bool, has_bounded_size<interface_package::msg::BehaviorStatus>::value && has_bounded_size<interface_package::msg::ControlCommand>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interface_package/action/detail/run_behavior__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_SendGoal_Request & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_SendGoal_Request>()
{
  return "interface_package::action::RunBehavior_SendGoal_Request";
}

template<>
inline const char * name<interface_package::action::RunBehavior_SendGoal_Request>()
{
  return "interface_package/action/RunBehavior_SendGoal_Request";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interface_package::action::RunBehavior_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interface_package::action::RunBehavior_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_SendGoal_Response & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_SendGoal_Response>()
{
  return "interface_package::action::RunBehavior_SendGoal_Response";
}

template<>
inline const char * name<interface_package::action::RunBehavior_SendGoal_Response>()
{
  return "interface_package/action/RunBehavior_SendGoal_Response";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::action::RunBehavior_SendGoal>()
{
  return "interface_package::action::RunBehavior_SendGoal";
}

template<>
inline const char * name<interface_package::action::RunBehavior_SendGoal>()
{
  return "interface_package/action/RunBehavior_SendGoal";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::action::RunBehavior_SendGoal_Request>::value &&
    has_fixed_size<interface_package::action::RunBehavior_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::action::RunBehavior_SendGoal_Request>::value &&
    has_bounded_size<interface_package::action::RunBehavior_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interface_package::action::RunBehavior_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::action::RunBehavior_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::action::RunBehavior_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_GetResult_Request & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_GetResult_Request>()
{
  return "interface_package::action::RunBehavior_GetResult_Request";
}

template<>
inline const char * name<interface_package::action::RunBehavior_GetResult_Request>()
{
  return "interface_package/action/RunBehavior_GetResult_Request";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interface_package/action/detail/run_behavior__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_GetResult_Response & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_GetResult_Response>()
{
  return "interface_package::action::RunBehavior_GetResult_Response";
}

template<>
inline const char * name<interface_package::action::RunBehavior_GetResult_Response>()
{
  return "interface_package/action/RunBehavior_GetResult_Response";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interface_package::action::RunBehavior_Result>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interface_package::action::RunBehavior_Result>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::action::RunBehavior_GetResult>()
{
  return "interface_package::action::RunBehavior_GetResult";
}

template<>
inline const char * name<interface_package::action::RunBehavior_GetResult>()
{
  return "interface_package/action/RunBehavior_GetResult";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::action::RunBehavior_GetResult_Request>::value &&
    has_fixed_size<interface_package::action::RunBehavior_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::action::RunBehavior_GetResult_Request>::value &&
    has_bounded_size<interface_package::action::RunBehavior_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interface_package::action::RunBehavior_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::action::RunBehavior_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::action::RunBehavior_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interface_package/action/detail/run_behavior__traits.hpp"

namespace interface_package
{

namespace action
{

inline void to_flow_style_yaml(
  const RunBehavior_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunBehavior_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunBehavior_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::action::RunBehavior_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::action::RunBehavior_FeedbackMessage & msg)
{
  return interface_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::action::RunBehavior_FeedbackMessage>()
{
  return "interface_package::action::RunBehavior_FeedbackMessage";
}

template<>
inline const char * name<interface_package::action::RunBehavior_FeedbackMessage>()
{
  return "interface_package/action/RunBehavior_FeedbackMessage";
}

template<>
struct has_fixed_size<interface_package::action::RunBehavior_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interface_package::action::RunBehavior_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interface_package::action::RunBehavior_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interface_package::action::RunBehavior_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interface_package::action::RunBehavior_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interface_package::action::RunBehavior>
  : std::true_type
{
};

template<>
struct is_action_goal<interface_package::action::RunBehavior_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interface_package::action::RunBehavior_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interface_package::action::RunBehavior_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__TRAITS_HPP_
