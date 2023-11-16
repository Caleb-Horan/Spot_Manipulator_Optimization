# Install script for directory: /home/caleb/ros2_ws/src/moveit2/moveit_core/collision_detection_bullet

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/caleb/ros2_ws/install/moveit_core")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/caleb/ros2_ws/src/moveit2/moveit_core/collision_detection_bullet/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet/moveit_collision_detection_bullet_export.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet/libmoveit_collision_detection_bullet.so.2.3.4")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4"
         OLD_RPATH "/home/caleb/ros2_ws/build/moveit_core/collision_detection:/home/caleb/ros2_ws/build/moveit_core/robot_state:/home/caleb/ros2_ws/build/moveit_core/robot_model:/home/caleb/ros2_ws/build/moveit_core/profiler:/home/caleb/ros2_ws/build/moveit_core/exceptions:/home/caleb/ros2_ws/build/moveit_core/kinematics_base:/home/caleb/ros2_ws/build/moveit_core/transforms:/opt/ros/galactic/lib:/opt/ros/galactic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so.2.3.4")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet/libmoveit_collision_detection_bullet.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so"
         OLD_RPATH "/home/caleb/ros2_ws/build/moveit_core/collision_detection:/home/caleb/ros2_ws/build/moveit_core/robot_state:/home/caleb/ros2_ws/build/moveit_core/robot_model:/home/caleb/ros2_ws/build/moveit_core/profiler:/home/caleb/ros2_ws/build/moveit_core/exceptions:/home/caleb/ros2_ws/build/moveit_core/kinematics_base:/home/caleb/ros2_ws/build/moveit_core/transforms:/opt/ros/galactic/lib:/opt/ros/galactic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_collision_detection_bullet.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet/libcollision_detector_bullet_plugin.so.2.3.4")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4"
         OLD_RPATH "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet:/home/caleb/ros2_ws/build/moveit_core/planning_scene:/home/caleb/ros2_ws/build/moveit_core/kinematic_constraints:/home/caleb/ros2_ws/build/moveit_core/collision_detection_fcl:/home/caleb/ros2_ws/build/moveit_core/collision_detection:/home/caleb/ros2_ws/build/moveit_core/trajectory_processing:/home/caleb/ros2_ws/build/moveit_core/robot_trajectory:/home/caleb/ros2_ws/build/moveit_core/robot_state:/home/caleb/ros2_ws/build/moveit_core/robot_model:/home/caleb/ros2_ws/build/moveit_core/exceptions:/home/caleb/ros2_ws/build/moveit_core/profiler:/home/caleb/ros2_ws/build/moveit_core/transforms:/home/caleb/ros2_ws/build/moveit_core/kinematics_base:/home/caleb/ros2_ws/build/moveit_core/utils:/opt/ros/galactic/lib:/opt/ros/galactic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so.2.3.4")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet/libcollision_detector_bullet_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so"
         OLD_RPATH "/home/caleb/ros2_ws/build/moveit_core/collision_detection_bullet:/home/caleb/ros2_ws/build/moveit_core/planning_scene:/home/caleb/ros2_ws/build/moveit_core/kinematic_constraints:/home/caleb/ros2_ws/build/moveit_core/collision_detection_fcl:/home/caleb/ros2_ws/build/moveit_core/collision_detection:/home/caleb/ros2_ws/build/moveit_core/trajectory_processing:/home/caleb/ros2_ws/build/moveit_core/robot_trajectory:/home/caleb/ros2_ws/build/moveit_core/robot_state:/home/caleb/ros2_ws/build/moveit_core/robot_model:/home/caleb/ros2_ws/build/moveit_core/exceptions:/home/caleb/ros2_ws/build/moveit_core/profiler:/home/caleb/ros2_ws/build/moveit_core/transforms:/home/caleb/ros2_ws/build/moveit_core/kinematics_base:/home/caleb/ros2_ws/build/moveit_core/utils:/opt/ros/galactic/lib:/opt/ros/galactic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcollision_detector_bullet_plugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_core/environment" TYPE FILE FILES "/opt/ros/galactic/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_core/environment" TYPE FILE FILES "/home/caleb/ros2_ws/build/moveit_core/ament_cmake_environment_hooks/library_path.dsv")
endif()

