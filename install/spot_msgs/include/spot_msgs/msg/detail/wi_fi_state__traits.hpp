// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/WiFiState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__WI_FI_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__WI_FI_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/wi_fi_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::WiFiState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode: ";
    value_to_yaml(msg.current_mode, out);
    out << "\n";
  }

  // member: essid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "essid: ";
    value_to_yaml(msg.essid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::WiFiState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::WiFiState>()
{
  return "spot_msgs::msg::WiFiState";
}

template<>
inline const char * name<spot_msgs::msg::WiFiState>()
{
  return "spot_msgs/msg/WiFiState";
}

template<>
struct has_fixed_size<spot_msgs::msg::WiFiState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::WiFiState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::WiFiState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__WI_FI_STATE__TRAITS_HPP_
