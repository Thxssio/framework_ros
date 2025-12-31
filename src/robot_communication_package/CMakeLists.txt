cmake_minimum_required(VERSION 3.8)
project(robot_communication_package)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(interface_package REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  ${PROJECT_NAME}/robot_commander_node.py
  scripts/robot_commander
  DESTINATION lib/${PROJECT_NAME}
)

ament_export_dependencies(interface_package)

ament_package()
