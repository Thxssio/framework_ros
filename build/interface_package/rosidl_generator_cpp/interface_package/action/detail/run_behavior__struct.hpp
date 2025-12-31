// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:action/RunBehavior.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_HPP_
#define INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'behavior'
#include "interface_package/msg/detail/behavior_choice__struct.hpp"
// Member 'nav'
#include "interface_package/msg/detail/navigation_config__struct.hpp"
// Member 'kick'
#include "interface_package/msg/detail/kick_parameters__struct.hpp"
// Member 'prep'
#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_Goal __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_Goal __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_Goal_
{
  using Type = RunBehavior_Goal_<ContainerAllocator>;

  explicit RunBehavior_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior(_init),
    nav(_init),
    kick(_init),
    prep(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  explicit RunBehavior_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior(_alloc, _init),
    nav(_alloc, _init),
    kick(_alloc, _init),
    prep(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _behavior_type =
    interface_package::msg::BehaviorChoice_<ContainerAllocator>;
  _behavior_type behavior;
  using _nav_type =
    interface_package::msg::NavigationConfig_<ContainerAllocator>;
  _nav_type nav;
  using _kick_type =
    interface_package::msg::KickParameters_<ContainerAllocator>;
  _kick_type kick;
  using _prep_type =
    interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>;
  _prep_type prep;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__behavior(
    const interface_package::msg::BehaviorChoice_<ContainerAllocator> & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__nav(
    const interface_package::msg::NavigationConfig_<ContainerAllocator> & _arg)
  {
    this->nav = _arg;
    return *this;
  }
  Type & set__kick(
    const interface_package::msg::KickParameters_<ContainerAllocator> & _arg)
  {
    this->kick = _arg;
    return *this;
  }
  Type & set__prep(
    const interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> & _arg)
  {
    this->prep = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_Goal
    std::shared_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_Goal
    std::shared_ptr<interface_package::action::RunBehavior_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_Goal_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->nav != other.nav) {
      return false;
    }
    if (this->kick != other.kick) {
      return false;
    }
    if (this->prep != other.prep) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_Goal_

// alias to use template instance with default allocator
using RunBehavior_Goal =
  interface_package::action::RunBehavior_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_Result __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_Result __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_Result_
{
  using Type = RunBehavior_Result_<ContainerAllocator>;

  explicit RunBehavior_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  explicit RunBehavior_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_Result
    std::shared_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_Result
    std::shared_ptr<interface_package::action::RunBehavior_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_Result_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_Result_

// alias to use template instance with default allocator
using RunBehavior_Result =
  interface_package::action::RunBehavior_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package


// Include directives for member types
// Member 'status'
#include "interface_package/msg/detail/behavior_status__struct.hpp"
// Member 'last_command'
#include "interface_package/msg/detail/control_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_Feedback __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_Feedback_
{
  using Type = RunBehavior_Feedback_<ContainerAllocator>;

  explicit RunBehavior_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    last_command(_init)
  {
    (void)_init;
  }

  explicit RunBehavior_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    last_command(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    interface_package::msg::BehaviorStatus_<ContainerAllocator>;
  _status_type status;
  using _last_command_type =
    interface_package::msg::ControlCommand_<ContainerAllocator>;
  _last_command_type last_command;

  // setters for named parameter idiom
  Type & set__status(
    const interface_package::msg::BehaviorStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__last_command(
    const interface_package::msg::ControlCommand_<ContainerAllocator> & _arg)
  {
    this->last_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_Feedback
    std::shared_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_Feedback
    std::shared_ptr<interface_package::action::RunBehavior_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->last_command != other.last_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_Feedback_

// alias to use template instance with default allocator
using RunBehavior_Feedback =
  interface_package::action::RunBehavior_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "interface_package/action/detail/run_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_SendGoal_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_SendGoal_Request_
{
  using Type = RunBehavior_SendGoal_Request_<ContainerAllocator>;

  explicit RunBehavior_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RunBehavior_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    interface_package::action::RunBehavior_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const interface_package::action::RunBehavior_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_SendGoal_Request
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_SendGoal_Request
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_SendGoal_Request_

// alias to use template instance with default allocator
using RunBehavior_SendGoal_Request =
  interface_package::action::RunBehavior_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_SendGoal_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_SendGoal_Response_
{
  using Type = RunBehavior_SendGoal_Response_<ContainerAllocator>;

  explicit RunBehavior_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RunBehavior_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_SendGoal_Response
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_SendGoal_Response
    std::shared_ptr<interface_package::action::RunBehavior_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_SendGoal_Response_

// alias to use template instance with default allocator
using RunBehavior_SendGoal_Response =
  interface_package::action::RunBehavior_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package

namespace interface_package
{

namespace action
{

struct RunBehavior_SendGoal
{
  using Request = interface_package::action::RunBehavior_SendGoal_Request;
  using Response = interface_package::action::RunBehavior_SendGoal_Response;
};

}  // namespace action

}  // namespace interface_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_GetResult_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_GetResult_Request_
{
  using Type = RunBehavior_GetResult_Request_<ContainerAllocator>;

  explicit RunBehavior_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RunBehavior_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_GetResult_Request
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_GetResult_Request
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_GetResult_Request_

// alias to use template instance with default allocator
using RunBehavior_GetResult_Request =
  interface_package::action::RunBehavior_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package


// Include directives for member types
// Member 'result'
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_GetResult_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_GetResult_Response_
{
  using Type = RunBehavior_GetResult_Response_<ContainerAllocator>;

  explicit RunBehavior_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RunBehavior_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    interface_package::action::RunBehavior_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const interface_package::action::RunBehavior_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_GetResult_Response
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_GetResult_Response
    std::shared_ptr<interface_package::action::RunBehavior_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_GetResult_Response_

// alias to use template instance with default allocator
using RunBehavior_GetResult_Response =
  interface_package::action::RunBehavior_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package

namespace interface_package
{

namespace action
{

struct RunBehavior_GetResult
{
  using Request = interface_package::action::RunBehavior_GetResult_Request;
  using Response = interface_package::action::RunBehavior_GetResult_Response;
};

}  // namespace action

}  // namespace interface_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__action__RunBehavior_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__action__RunBehavior_FeedbackMessage __declspec(deprecated)
#endif

namespace interface_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RunBehavior_FeedbackMessage_
{
  using Type = RunBehavior_FeedbackMessage_<ContainerAllocator>;

  explicit RunBehavior_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RunBehavior_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    interface_package::action::RunBehavior_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const interface_package::action::RunBehavior_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__action__RunBehavior_FeedbackMessage
    std::shared_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__action__RunBehavior_FeedbackMessage
    std::shared_ptr<interface_package::action::RunBehavior_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunBehavior_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunBehavior_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunBehavior_FeedbackMessage_

// alias to use template instance with default allocator
using RunBehavior_FeedbackMessage =
  interface_package::action::RunBehavior_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interface_package

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace interface_package
{

namespace action
{

struct RunBehavior
{
  /// The goal message defined in the action definition.
  using Goal = interface_package::action::RunBehavior_Goal;
  /// The result message defined in the action definition.
  using Result = interface_package::action::RunBehavior_Result;
  /// The feedback message defined in the action definition.
  using Feedback = interface_package::action::RunBehavior_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = interface_package::action::RunBehavior_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = interface_package::action::RunBehavior_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = interface_package::action::RunBehavior_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RunBehavior RunBehavior;

}  // namespace action

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_HPP_
