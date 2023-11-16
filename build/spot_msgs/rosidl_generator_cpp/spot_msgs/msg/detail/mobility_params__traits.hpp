// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/MobilityParams.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__MOBILITY_PARAMS__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__MOBILITY_PARAMS__TRAITS_HPP_

#include "spot_msgs/msg/detail/mobility_params__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'body_control'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::MobilityParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: body_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_control:\n";
    to_yaml(msg.body_control, out, indentation + 2);
  }

  // member: locomotion_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locomotion_hint: ";
    value_to_yaml(msg.locomotion_hint, out);
    out << "\n";
  }

  // member: stair_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stair_hint: ";
    value_to_yaml(msg.stair_hint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::MobilityParams & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::MobilityParams>()
{
  return "spot_msgs::msg::MobilityParams";
}

template<>
inline const char * name<spot_msgs::msg::MobilityParams>()
{
  return "spot_msgs/msg/MobilityParams";
}

template<>
struct has_fixed_size<spot_msgs::msg::MobilityParams>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<spot_msgs::msg::MobilityParams>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<spot_msgs::msg::MobilityParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__MOBILITY_PARAMS__TRAITS_HPP_
