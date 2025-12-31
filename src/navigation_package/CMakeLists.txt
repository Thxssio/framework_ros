cmake_minimum_required(VERSION 3.10)
project(navigation_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(interface_package REQUIRED)
find_package(rclcpp REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(navigation_module
  src/navigation_module.cpp
  src/path_planner.cpp
  src/trajectory_optimizer.cpp
)
ament_target_dependencies(navigation_module interface_package)

target_include_directories(navigation_module PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

install(TARGETS navigation_module
  EXPORT export_navigation_module
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY include/
  DESTINATION include
)

add_executable(navigation_manager_node
  src/navigation_manager_node.cpp
)
ament_target_dependencies(navigation_manager_node rclcpp interface_package)

install(TARGETS navigation_manager_node
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

add_executable(navigation_node
  src/navigation_node.cpp
)
ament_target_dependencies(navigation_node rclcpp interface_package)
target_link_libraries(navigation_node navigation_module)

install(TARGETS navigation_node
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

ament_export_include_directories(include)
ament_export_targets(export_navigation_module HAS_LIBRARY_TARGET)
ament_export_dependencies(interface_package)

ament_package()
