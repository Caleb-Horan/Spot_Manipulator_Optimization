// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/manipulator_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'estimated_end_effector_force_in_hand'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::ManipulatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper_open_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_open_percentage: ";
    value_to_yaml(msg.gripper_open_percentage, out);
    out << "\n";
  }

  // member: is_gripper_holding_item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_gripper_holding_item: ";
    value_to_yaml(msg.is_gripper_holding_item, out);
    out << "\n";
  }

  // member: estimated_end_effector_force_in_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_end_effector_force_in_hand:\n";
    to_yaml(msg.estimated_end_effector_force_in_hand, out, indentation + 2);
  }

  // member: stow_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stow_state: ";
    value_to_yaml(msg.stow_state, out);
    out << "\n";
  }

  // member: carry_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carry_state: ";
    value_to_yaml(msg.carry_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::ManipulatorState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::ManipulatorState>()
{
  return "spot_msgs::msg::ManipulatorState";
}

template<>
inline const char * name<spot_msgs::msg::ManipulatorState>()
{
  return "spot_msgs/msg/ManipulatorState";
}

template<>
struct has_fixed_size<spot_msgs::msg::ManipulatorState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<spot_msgs::msg::ManipulatorState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<spot_msgs::msg::ManipulatorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__TRAITS_HPP_
