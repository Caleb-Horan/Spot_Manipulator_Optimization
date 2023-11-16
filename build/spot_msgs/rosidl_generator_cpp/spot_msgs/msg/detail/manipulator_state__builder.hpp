// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__BUILDER_HPP_
#define SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__BUILDER_HPP_

#include "spot_msgs/msg/detail/manipulator_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace spot_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulatorState_carry_state
{
public:
  explicit Init_ManipulatorState_carry_state(::spot_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  ::spot_msgs::msg::ManipulatorState carry_state(::spot_msgs::msg::ManipulatorState::_carry_state_type arg)
  {
    msg_.carry_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_stow_state
{
public:
  explicit Init_ManipulatorState_stow_state(::spot_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_carry_state stow_state(::spot_msgs::msg::ManipulatorState::_stow_state_type arg)
  {
    msg_.stow_state = std::move(arg);
    return Init_ManipulatorState_carry_state(msg_);
  }

private:
  ::spot_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_estimated_end_effector_force_in_hand
{
public:
  explicit Init_ManipulatorState_estimated_end_effector_force_in_hand(::spot_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_stow_state estimated_end_effector_force_in_hand(::spot_msgs::msg::ManipulatorState::_estimated_end_effector_force_in_hand_type arg)
  {
    msg_.estimated_end_effector_force_in_hand = std::move(arg);
    return Init_ManipulatorState_stow_state(msg_);
  }

private:
  ::spot_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_is_gripper_holding_item
{
public:
  explicit Init_ManipulatorState_is_gripper_holding_item(::spot_msgs::msg::ManipulatorState & msg)
  : msg_(msg)
  {}
  Init_ManipulatorState_estimated_end_effector_force_in_hand is_gripper_holding_item(::spot_msgs::msg::ManipulatorState::_is_gripper_holding_item_type arg)
  {
    msg_.is_gripper_holding_item = std::move(arg);
    return Init_ManipulatorState_estimated_end_effector_force_in_hand(msg_);
  }

private:
  ::spot_msgs::msg::ManipulatorState msg_;
};

class Init_ManipulatorState_gripper_open_percentage
{
public:
  Init_ManipulatorState_gripper_open_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulatorState_is_gripper_holding_item gripper_open_percentage(::spot_msgs::msg::ManipulatorState::_gripper_open_percentage_type arg)
  {
    msg_.gripper_open_percentage = std::move(arg);
    return Init_ManipulatorState_is_gripper_holding_item(msg_);
  }

private:
  ::spot_msgs::msg::ManipulatorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_msgs::msg::ManipulatorState>()
{
  return spot_msgs::msg::builder::Init_ManipulatorState_gripper_open_percentage();
}

}  // namespace spot_msgs

#endif  // SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__BUILDER_HPP_
