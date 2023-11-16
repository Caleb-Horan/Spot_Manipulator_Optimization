// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/EStopState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__E_STOP_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__E_STOP_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/e_stop_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::EStopState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: state_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_description: ";
    value_to_yaml(msg.state_description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::EStopState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::EStopState>()
{
  return "spot_msgs::msg::EStopState";
}

template<>
inline const char * name<spot_msgs::msg::EStopState>()
{
  return "spot_msgs/msg/EStopState";
}

template<>
struct has_fixed_size<spot_msgs::msg::EStopState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::EStopState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::EStopState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__E_STOP_STATE__TRAITS_HPP_
