// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:srv/ConstrainedArmJointMovement.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__BUILDER_HPP_
#define SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__BUILDER_HPP_

#include "spot_msgs/srv/detail/constrained_arm_joint_movement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_ConstrainedArmJointMovement_Request_max_acceleration
{
public:
  explicit Init_ConstrainedArmJointMovement_Request_max_acceleration(::spot_msgs::srv::ConstrainedArmJointMovement_Request & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::ConstrainedArmJointMovement_Request max_acceleration(::spot_msgs::srv::ConstrainedArmJointMovement_Request::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::ConstrainedArmJointMovement_Request msg_;
};

class Init_ConstrainedArmJointMovement_Request_max_velocity
{
public:
  explicit Init_ConstrainedArmJointMovement_Request_max_velocity(::spot_msgs::srv::ConstrainedArmJointMovement_Request & msg)
  : msg_(msg)
  {}
  Init_ConstrainedArmJointMovement_Request_max_acceleration max_velocity(::spot_msgs::srv::ConstrainedArmJointMovement_Request::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_ConstrainedArmJointMovement_Request_max_acceleration(msg_);
  }

private:
  ::spot_msgs::srv::ConstrainedArmJointMovement_Request msg_;
};

class Init_ConstrainedArmJointMovement_Request_max_execution_time
{
public:
  explicit Init_ConstrainedArmJointMovement_Request_max_execution_time(::spot_msgs::srv::ConstrainedArmJointMovement_Request & msg)
  : msg_(msg)
  {}
  Init_ConstrainedArmJointMovement_Request_max_velocity max_execution_time(::spot_msgs::srv::ConstrainedArmJointMovement_Request::_max_execution_time_type arg)
  {
    msg_.max_execution_time = std::move(arg);
    return Init_ConstrainedArmJointMovement_Request_max_velocity(msg_);
  }

private:
  ::spot_msgs::srv::ConstrainedArmJointMovement_Request msg_;
};

class Init_ConstrainedArmJointMovement_Request_joint_target
{
public:
  Init_ConstrainedArmJointMovement_Request_joint_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstrainedArmJointMovement_Request_max_execution_time joint_target(::spot_msgs::srv::ConstrainedArmJointMovement_Request::_joint_target_type arg)
  {
    msg_.joint_target = std::move(arg);
    return Init_ConstrainedArmJointMovement_Request_max_execution_time(msg_);
  }

private:
  ::spot_msgs::srv::ConstrainedArmJointMovement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::ConstrainedArmJointMovement_Request>()
{
  return spot_msgs::srv::builder::Init_ConstrainedArmJointMovement_Request_joint_target();
}

}  // namespace spot_msgs


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_ConstrainedArmJointMovement_Response_message
{
public:
  explicit Init_ConstrainedArmJointMovement_Response_message(::spot_msgs::srv::ConstrainedArmJointMovement_Response & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::ConstrainedArmJointMovement_Response message(::spot_msgs::srv::ConstrainedArmJointMovement_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::ConstrainedArmJointMovement_Response msg_;
};

class Init_ConstrainedArmJointMovement_Response_success
{
public:
  Init_ConstrainedArmJointMovement_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstrainedArmJointMovement_Response_message success(::spot_msgs::srv::ConstrainedArmJointMovement_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ConstrainedArmJointMovement_Response_message(msg_);
  }

private:
  ::spot_msgs::srv::ConstrainedArmJointMovement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::ConstrainedArmJointMovement_Response>()
{
  return spot_msgs::srv::builder::Init_ConstrainedArmJointMovement_Response_success();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__BUILDER_HPP_
