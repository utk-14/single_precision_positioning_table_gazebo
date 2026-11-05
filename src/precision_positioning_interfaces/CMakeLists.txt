cmake_minimum_required(VERSION 3.8)
project(precision_positioning_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Home.srv"
  "srv/EmergencyStop.srv"
  "srv/ResetEncoder.srv"
  "srv/MoveAbsolute.srv"
  "srv/MoveRelative.srv"
  DEPENDENCIES std_msgs
)

ament_package()
