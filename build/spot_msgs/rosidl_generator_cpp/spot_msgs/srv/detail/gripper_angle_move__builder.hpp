// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:srv/GripperAngleMove.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__GRIPPER_ANGLE_MOVE__BUILDER_HPP_
#define SPOT_MSGS__SRV__DETAIL__GRIPPER_ANGLE_MOVE__BUILDER_HPP_

#include "spot_msgs/srv/detail/gripper_angle_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperAngleMove_Request_gripper_angle
{
public:
  Init_GripperAngleMove_Request_gripper_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_msgs::srv::GripperAngleMove_Request gripper_angle(::spot_msgs::srv::GripperAngleMove_Request::_gripper_angle_type arg)
  {
    msg_.gripper_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::GripperAngleMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::GripperAngleMove_Request>()
{
  return spot_msgs::srv::builder::Init_GripperAngleMove_Request_gripper_angle();
}

}  // namespace spot_msgs


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperAngleMove_Response_message
{
public:
  explicit Init_GripperAngleMove_Response_message(::spot_msgs::srv::GripperAngleMove_Response & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::GripperAngleMove_Response message(::spot_msgs::srv::GripperAngleMove_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::GripperAngleMove_Response msg_;
};

class Init_GripperAngleMove_Response_success
{
public:
  Init_GripperAngleMove_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperAngleMove_Response_message success(::spot_msgs::srv::GripperAngleMove_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GripperAngleMove_Response_message(msg_);
  }

private:
  ::spot_msgs::srv::GripperAngleMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::GripperAngleMove_Response>()
{
  return spot_msgs::srv::builder::Init_GripperAngleMove_Response_success();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__GRIPPER_ANGLE_MOVE__BUILDER_HPP_
