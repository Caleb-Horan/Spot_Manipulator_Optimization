// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:srv/ArmJointMovement.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__ARM_JOINT_MOVEMENT__BUILDER_HPP_
#define SPOT_MSGS__SRV__DETAIL__ARM_JOINT_MOVEMENT__BUILDER_HPP_

#include "spot_msgs/srv/detail/arm_joint_movement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmJointMovement_Request_joint_target
{
public:
  Init_ArmJointMovement_Request_joint_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_msgs::srv::ArmJointMovement_Request joint_target(::spot_msgs::srv::ArmJointMovement_Request::_joint_target_type arg)
  {
    msg_.joint_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::ArmJointMovement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::ArmJointMovement_Request>()
{
  return spot_msgs::srv::builder::Init_ArmJointMovement_Request_joint_target();
}

}  // namespace spot_msgs


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmJointMovement_Response_message
{
public:
  explicit Init_ArmJointMovement_Response_message(::spot_msgs::srv::ArmJointMovement_Response & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::ArmJointMovement_Response message(::spot_msgs::srv::ArmJointMovement_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::ArmJointMovement_Response msg_;
};

class Init_ArmJointMovement_Response_success
{
public:
  Init_ArmJointMovement_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointMovement_Response_message success(::spot_msgs::srv::ArmJointMovement_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmJointMovement_Response_message(msg_);
  }

private:
  ::spot_msgs::srv::ArmJointMovement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::ArmJointMovement_Response>()
{
  return spot_msgs::srv::builder::Init_ArmJointMovement_Response_success();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__ARM_JOINT_MOVEMENT__BUILDER_HPP_
