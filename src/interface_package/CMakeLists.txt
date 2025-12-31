cmake_minimum_required(VERSION 3.8)
project(interface_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rosidl_default_generators REQUIRED)

set(msg_files
  msg/BallState.msg
  msg/BehaviorChoice.msg
  msg/BehaviorStatus.msg
  msg/ControlCommand.msg
  msg/FieldDimensions.msg
  msg/KickParameters.msg
  msg/NavigationConfig.msg
  msg/PathPreview.msg
  msg/Pose2D.msg
  msg/PrepareKickoffParameters.msg
  msg/RobotTarget.msg
  msg/RobotState.msg
  msg/TeamColor.msg
  msg/TeamNetworkConfig.msg
  msg/Twist2D.msg
  msg/WorldState.msg
  msg/VisionDetection.msg
  msg/VisionGeometry.msg
)

set(srv_files
  srv/GetNavigationConfig.srv
  srv/LoadConfig.srv
  srv/SaveConfig.srv
  srv/SendReplacementBall.srv
  srv/SendReplacementRobot.srv
  srv/SendRobotCommand.srv
  srv/SetKickParameters.srv
  srv/SetNavigationConfig.srv
  srv/SetPrepareKickoffParameters.srv
  srv/SetReplacementNetwork.srv
  srv/SetTeamNetwork.srv
  srv/SetTeam.srv
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  action/RunBehavior.action
  DEPENDENCIES builtin_interfaces
)

ament_get_python_install_dir(python_install_dir)
install(
  DIRECTORY interface_package/proto
  DESTINATION ${python_install_dir}/interface_package
  PATTERN "*.pyc" EXCLUDE
  PATTERN "__pycache__" EXCLUDE
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
