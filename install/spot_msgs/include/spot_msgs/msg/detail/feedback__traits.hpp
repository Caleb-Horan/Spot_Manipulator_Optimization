// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define SPOT_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include "spot_msgs/msg/detail/feedback__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::msg::Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: standing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standing: ";
    value_to_yaml(msg.standing, out);
    out << "\n";
  }

  // member: sitting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sitting: ";
    value_to_yaml(msg.sitting, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    value_to_yaml(msg.moving, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: species
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "species: ";
    value_to_yaml(msg.species, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: nickname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nickname: ";
    value_to_yaml(msg.nickname, out);
    out << "\n";
  }

  // member: computer_serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computer_serial_number: ";
    value_to_yaml(msg.computer_serial_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::msg::Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::msg::Feedback>()
{
  return "spot_msgs::msg::Feedback";
}

template<>
inline const char * name<spot_msgs::msg::Feedback>()
{
  return "spot_msgs/msg/Feedback";
}

template<>
struct has_fixed_size<spot_msgs::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
