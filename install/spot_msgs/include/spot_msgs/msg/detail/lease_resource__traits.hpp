// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/LeaseResource.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__LEASE_RESOURCE__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__LEASE_RESOURCE__TRAITS_HPP_

#include "spot_msgs/msg/detail/lease_resource__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'lease'
#include "spot_msgs/msg/detail/lease__traits.hpp"
// Member 'lease_owner'
#include "spot_msgs/msg/detail/lease_owner__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::LeaseResource & msg,
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

  // member: lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease:\n";
    to_yaml(msg.lease, out, indentation + 2);
  }

  // member: lease_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_owner:\n";
    to_yaml(msg.lease_owner, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::LeaseResource & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::LeaseResource>()
{
  return "spot_msgs::msg::LeaseResource";
}

template<>
inline const char * name<spot_msgs::msg::LeaseResource>()
{
  return "spot_msgs/msg/LeaseResource";
}

template<>
struct has_fixed_size<spot_msgs::msg::LeaseResource>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::LeaseResource>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::LeaseResource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__LEASE_RESOURCE__TRAITS_HPP_
