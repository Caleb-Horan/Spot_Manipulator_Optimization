// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/FootState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__FOOT_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__FOOT_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/foot_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'foot_position_rt_body'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::FootState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: foot_position_rt_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_rt_body:\n";
    to_yaml(msg.foot_position_rt_body, out, indentation + 2);
  }

  // member: contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact: ";
    value_to_yaml(msg.contact, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::FootState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::FootState>()
{
  return "spot_msgs::msg::FootState";
}

template<>
inline const char * name<spot_msgs::msg::FootState>()
{
  return "spot_msgs/msg/FootState";
}

template<>
struct has_fixed_size<spot_msgs::msg::FootState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<spot_msgs::msg::FootState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<spot_msgs::msg::FootState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__FOOT_STATE__TRAITS_HPP_
