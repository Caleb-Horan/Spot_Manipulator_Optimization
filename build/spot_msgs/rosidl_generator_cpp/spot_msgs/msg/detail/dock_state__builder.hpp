// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__DOCK_STATE__BUILDER_HPP_
#define SPOT_MSGS__MSG__DETAIL__DOCK_STATE__BUILDER_HPP_

#include "spot_msgs/msg/detail/dock_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace msg
{

namespace builder
{

class Init_DockState_power_status
{
public:
  explicit Init_DockState_power_status(::spot_msgs::msg::DockState & msg)
  : msg_(msg)
  {}
  ::spot_msgs::msg::DockState power_status(::spot_msgs::msg::DockState::_power_status_type arg)
  {
    msg_.power_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::msg::DockState msg_;
};

class Init_DockState_dock_id
{
public:
  explicit Init_DockState_dock_id(::spot_msgs::msg::DockState & msg)
  : msg_(msg)
  {}
  Init_DockState_power_status dock_id(::spot_msgs::msg::DockState::_dock_id_type arg)
  {
    msg_.dock_id = std::move(arg);
    return Init_DockState_power_status(msg_);
  }

private:
  ::spot_msgs::msg::DockState msg_;
};

class Init_DockState_dock_type
{
public:
  explicit Init_DockState_dock_type(::spot_msgs::msg::DockState & msg)
  : msg_(msg)
  {}
  Init_DockState_dock_id dock_type(::spot_msgs::msg::DockState::_dock_type_type arg)
  {
    msg_.dock_type = std::move(arg);
    return Init_DockState_dock_id(msg_);
  }

private:
  ::spot_msgs::msg::DockState msg_;
};

class Init_DockState_status
{
public:
  Init_DockState_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockState_dock_type status(::spot_msgs::msg::DockState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DockState_dock_type(msg_);
  }

private:
  ::spot_msgs::msg::DockState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::msg::DockState>()
{
  return spot_msgs::msg::builder::Init_DockState_status();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__MSG__DETAIL__DOCK_STATE__BUILDER_HPP_
