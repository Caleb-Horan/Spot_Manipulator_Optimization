// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:srv/ArmForceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__BUILDER_HPP_
#define SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__BUILDER_HPP_

#include "spot_msgs/srv/detail/arm_force_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmForceTrajectory_Request_torques_pt1
{
public:
  explicit Init_ArmForceTrajectory_Request_torques_pt1(::spot_msgs::srv::ArmForceTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::ArmForceTrajectory_Request torques_pt1(::spot_msgs::srv::ArmForceTrajectory_Request::_torques_pt1_type arg)
  {
    msg_.torques_pt1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::ArmForceTrajectory_Request msg_;
};

class Init_ArmForceTrajectory_Request_forces_pt1
{
public:
  explicit Init_ArmForceTrajectory_Request_forces_pt1(::spot_msgs::srv::ArmForceTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ArmForceTrajectory_Request_torques_pt1 forces_pt1(::spot_msgs::srv::ArmForceTrajectory_Request::_forces_pt1_type arg)
  {
    msg_.forces_pt1 = std::move(arg);
    return Init_ArmForceTrajectory_Request_torques_pt1(msg_);
  }

private:
  ::spot_msgs::srv::ArmForceTrajectory_Request msg_;
};

class Init_ArmForceTrajectory_Request_torques_pt0
{
public:
  explicit Init_ArmForceTrajectory_Request_torques_pt0(::spot_msgs::srv::ArmForceTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ArmForceTrajectory_Request_forces_pt1 torques_pt0(::spot_msgs::srv::ArmForceTrajectory_Request::_torques_pt0_type arg)
  {
    msg_.torques_pt0 = std::move(arg);
    return Init_ArmForceTrajectory_Request_forces_pt1(msg_);
  }

private:
  ::spot_msgs::srv::ArmForceTrajectory_Request msg_;
};

class Init_ArmForceTrajectory_Request_forces_pt0
{
public:
  Init_ArmForceTrajectory_Request_forces_pt0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmForceTrajectory_Request_torques_pt0 forces_pt0(::spot_msgs::srv::ArmForceTrajectory_Request::_forces_pt0_type arg)
  {
    msg_.forces_pt0 = std::move(arg);
    return Init_ArmForceTrajectory_Request_torques_pt0(msg_);
  }

private:
  ::spot_msgs::srv::ArmForceTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::ArmForceTrajectory_Request>()
{
  return spot_msgs::srv::builder::Init_ArmForceTrajectory_Request_forces_pt0();
}

}  // namespace spot_msgs


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmForceTrajectory_Response_message
{
public:
  explicit Init_ArmForceTrajectory_Response_message(::spot_msgs::srv::ArmForceTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::ArmForceTrajectory_Response message(::spot_msgs::srv::ArmForceTrajectory_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::ArmForceTrajectory_Response msg_;
};

class Init_ArmForceTrajectory_Response_success
{
public:
  Init_ArmForceTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmForceTrajectory_Response_message success(::spot_msgs::srv::ArmForceTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmForceTrajectory_Response_message(msg_);
  }

private:
  ::spot_msgs::srv::ArmForceTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::ArmForceTrajectory_Response>()
{
  return spot_msgs::srv::builder::Init_ArmForceTrajectory_Response_success();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__BUILDER_HPP_
