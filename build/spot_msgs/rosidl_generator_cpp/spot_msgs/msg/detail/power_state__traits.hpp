// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__POWER_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__POWER_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/power_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'locomotion_estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::PowerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: motor_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_power_state: ";
    value_to_yaml(msg.motor_power_state, out);
    out << "\n";
  }

  // member: shore_power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shore_power_state: ";
    value_to_yaml(msg.shore_power_state, out);
    out << "\n";
  }

  // member: locomotion_charge_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_charge_percentage: ";
    value_to_yaml(msg.locomotion_charge_percentage, out);
    out << "\n";
  }

  // member: locomotion_estimated_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_estimated_runtime:\n";
    to_yaml(msg.locomotion_estimated_runtime, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::PowerState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::PowerState>()
{
  return "spot_msgs::msg::PowerState";
}

template<>
inline const char * name<spot_msgs::msg::PowerState>()
{
  return "spot_msgs/msg/PowerState";
}

template<>
struct has_fixed_size<spot_msgs::msg::PowerState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<spot_msgs::msg::PowerState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<spot_msgs::msg::PowerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__POWER_STATE__TRAITS_HPP_
