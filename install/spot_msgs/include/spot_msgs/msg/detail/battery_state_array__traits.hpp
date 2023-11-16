// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/BatteryStateArray.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__BATTERY_STATE_ARRAY__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__BATTERY_STATE_ARRAY__TRAITS_HPP_

#include "spot_msgs/msg/detail/battery_state_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'battery_states'
#include "spot_msgs/msg/detail/battery_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::BatteryStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery_states.size() == 0) {
      out << "battery_states: []\n";
    } else {
      out << "battery_states:\n";
      for (auto item : msg.battery_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::BatteryStateArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::BatteryStateArray>()
{
  return "spot_msgs::msg::BatteryStateArray";
}

template<>
inline const char * name<spot_msgs::msg::BatteryStateArray>()
{
  return "spot_msgs/msg/BatteryStateArray";
}

template<>
struct has_fixed_size<spot_msgs::msg::BatteryStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::BatteryStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::BatteryStateArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__BATTERY_STATE_ARRAY__TRAITS_HPP_
