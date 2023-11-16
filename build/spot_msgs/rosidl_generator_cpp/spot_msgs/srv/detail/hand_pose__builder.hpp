// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:srv/HandPose.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__HAND_POSE__BUILDER_HPP_
#define SPOT_MSGS__SRV__DETAIL__HAND_POSE__BUILDER_HPP_

#include "spot_msgs/srv/detail/hand_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_HandPose_Request_pose_point
{
public:
  Init_HandPose_Request_pose_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_msgs::srv::HandPose_Request pose_point(::spot_msgs::srv::HandPose_Request::_pose_point_type arg)
  {
    msg_.pose_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::HandPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::HandPose_Request>()
{
  return spot_msgs::srv::builder::Init_HandPose_Request_pose_point();
}

}  // namespace spot_msgs


namespace spot_msgs
{

namespace srv
{

namespace builder
{

class Init_HandPose_Response_message
{
public:
  explicit Init_HandPose_Response_message(::spot_msgs::srv::HandPose_Response & msg)
  : msg_(msg)
  {}
  ::spot_msgs::srv::HandPose_Response message(::spot_msgs::srv::HandPose_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::srv::HandPose_Response msg_;
};

class Init_HandPose_Response_success
{
public:
  Init_HandPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandPose_Response_message success(::spot_msgs::srv::HandPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HandPose_Response_message(msg_);
  }

private:
  ::spot_msgs::srv::HandPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::srv::HandPose_Response>()
{
  return spot_msgs::srv::builder::Init_HandPose_Response_success();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__HAND_POSE__BUILDER_HPP_
