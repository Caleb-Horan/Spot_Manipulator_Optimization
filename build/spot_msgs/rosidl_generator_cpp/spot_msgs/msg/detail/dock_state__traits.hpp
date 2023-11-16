// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__DOCK_STATE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__DOCK_STATE__TRAITS_HPP_

#include "spot_msgs/msg/detail/dock_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::DockState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: dock_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_type: ";
    value_to_yaml(msg.dock_type, out);
    out << "\n";
  }

  // member: dock_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_id: ";
    value_to_yaml(msg.dock_id, out);
    out << "\n";
  }

  // member: power_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_status: ";
    value_to_yaml(msg.power_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::DockState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::DockState>()
{
  return "spot_msgs::msg::DockState";
}

template<>
inline const char * name<spot_msgs::msg::DockState>()
{
  return "spot_msgs/msg/DockState";
}

template<>
struct has_fixed_size<spot_msgs::msg::DockState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<spot_msgs::msg::DockState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<spot_msgs::msg::DockState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__DOCK_STATE__TRAITS_HPP_
