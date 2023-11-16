// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/battery_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::BatteryState & msg,
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

  // member: identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identifier: ";
    value_to_yaml(msg.identifier, out);
    out << "\n";
  }

  // member: charge_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_percentage: ";
    value_to_yaml(msg.charge_percentage, out);
    out << "\n";
  }

  // member: estimated_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_runtime:\n";
    to_yaml(msg.estimated_runtime, out, indentation + 2);
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::BatteryState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::BatteryState>()
{
  return "spot_msgs::msg::BatteryState";
}

template<>
inline const char * name<spot_msgs::msg::BatteryState>()
{
  return "spot_msgs/msg/BatteryState";
}

template<>
struct has_fixed_size<spot_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
