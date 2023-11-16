cmake_minimum_required(VERSION 3.8)
project(optimization)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
# find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(Eigen3 REQUIRED)  # If you're using Eigen for any transformations or calculations
# Add other packages as necessary

include_directories(
  include
  ${rclcpp_INCLUDE_DIRS}
  ${moveit_core_INCLUDE_DIRS}
  ${moveit_ros_planning_interface_INCLUDE_DIRS}
  ${Eigen3_INCLUDE_DIRS}
)

add_executable(optimization src/optimization.cpp)
# add_executable(optimizationpy src/optimizationpy.py)


ament_target_dependencies(optimization
  rclcpp
  moveit_core
  moveit_ros_planning_interface
  Eigen3
)

install(DIRECTORY
  launch
  gazebo_models_worlds_collection
  DESTINATION share/${PROJECT_NAME}/
)

install(
  PROGRAMS
    src/optimizationpy.py
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS
  optimization
  DESTINATION lib/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
