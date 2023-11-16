// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/SystemFault.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__SYSTEM_FAULT__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__SYSTEM_FAULT__TRAITS_HPP_

#include "spot_msgs/msg/detail/system_fault__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::SystemFault & msg,
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

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_yaml(msg.duration, out, indentation + 2);
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uid: ";
    value_to_yaml(msg.uid, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attributes.size() == 0) {
      out << "attributes: []\n";
    } else {
      out << "attributes:\n";
      for (auto item : msg.attributes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity: ";
    value_to_yaml(msg.severity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::SystemFault & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::SystemFault>()
{
  return "spot_msgs::msg::SystemFault";
}

template<>
inline const char * name<spot_msgs::msg::SystemFault>()
{
  return "spot_msgs/msg/SystemFault";
}

template<>
struct has_fixed_size<spot_msgs::msg::SystemFault>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::SystemFault>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::SystemFault>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__SYSTEM_FAULT__TRAITS_HPP_
