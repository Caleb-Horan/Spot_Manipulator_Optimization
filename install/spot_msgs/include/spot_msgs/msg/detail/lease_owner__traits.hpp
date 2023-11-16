// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/LeaseOwner.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__LEASE_OWNER__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__LEASE_OWNER__TRAITS_HPP_

#include "spot_msgs/msg/detail/lease_owner__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::LeaseOwner & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: client_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_name: ";
    value_to_yaml(msg.client_name, out);
    out << "\n";
  }

  // member: user_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_name: ";
    value_to_yaml(msg.user_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::LeaseOwner & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::LeaseOwner>()
{
  return "spot_msgs::msg::LeaseOwner";
}

template<>
inline const char * name<spot_msgs::msg::LeaseOwner>()
{
  return "spot_msgs/msg/LeaseOwner";
}

template<>
struct has_fixed_size<spot_msgs::msg::LeaseOwner>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::LeaseOwner>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::LeaseOwner>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__LEASE_OWNER__TRAITS_HPP_
