// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/LeaseArray.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__LEASE_ARRAY__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__LEASE_ARRAY__TRAITS_HPP_

#include "spot_msgs/msg/detail/lease_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'resources'
#include "spot_msgs/msg/detail/lease_resource__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::LeaseArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resources.size() == 0) {
      out << "resources: []\n";
    } else {
      out << "resources:\n";
      for (auto item : msg.resources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::LeaseArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::LeaseArray>()
{
  return "spot_msgs::msg::LeaseArray";
}

template<>
inline const char * name<spot_msgs::msg::LeaseArray>()
{
  return "spot_msgs/msg/LeaseArray";
}

template<>
struct has_fixed_size<spot_msgs::msg::LeaseArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::LeaseArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::LeaseArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__LEASE_ARRAY__TRAITS_HPP_
