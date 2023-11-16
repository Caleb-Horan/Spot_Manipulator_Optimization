// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/Lease.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__LEASE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__LEASE__TRAITS_HPP_

#include "spot_msgs/msg/detail/lease__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::Lease & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource: ";
    value_to_yaml(msg.resource, out);
    out << "\n";
  }

  // member: epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch: ";
    value_to_yaml(msg.epoch, out);
    out << "\n";
  }

  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sequence.size() == 0) {
      out << "sequence: []\n";
    } else {
      out << "sequence:\n";
      for (auto item : msg.sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::Lease & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::Lease>()
{
  return "spot_msgs::msg::Lease";
}

template<>
inline const char * name<spot_msgs::msg::Lease>()
{
  return "spot_msgs/msg/Lease";
}

template<>
struct has_fixed_size<spot_msgs::msg::Lease>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::Lease>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::Lease>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__LEASE__TRAITS_HPP_
