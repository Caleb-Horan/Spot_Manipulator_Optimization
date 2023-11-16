// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__DOCK__TRAITS_HPP_
#define SPOT_MSGS__SRV__DETAIL__DOCK__TRAITS_HPP_

#include "spot_msgs/srv/detail/dock__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::Dock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dock_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_id: ";
    value_to_yaml(msg.dock_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::srv::Dock_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::Dock_Request>()
{
  return "spot_msgs::srv::Dock_Request";
}

template<>
inline const char * name<spot_msgs::srv::Dock_Request>()
{
  return "spot_msgs/srv/Dock_Request";
}

template<>
struct has_fixed_size<spot_msgs::srv::Dock_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<spot_msgs::srv::Dock_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<spot_msgs::srv::Dock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::Dock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::srv::Dock_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::Dock_Response>()
{
  return "spot_msgs::srv::Dock_Response";
}

template<>
inline const char * name<spot_msgs::srv::Dock_Response>()
{
  return "spot_msgs/srv/Dock_Response";
}

template<>
struct has_fixed_size<spot_msgs::srv::Dock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::Dock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::Dock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::srv::Dock>()
{
  return "spot_msgs::srv::Dock";
}

template<>
inline const char * name<spot_msgs::srv::Dock>()
{
  return "spot_msgs/srv/Dock";
}

template<>
struct has_fixed_size<spot_msgs::srv::Dock>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::srv::Dock_Request>::value &&
    has_fixed_size<spot_msgs::srv::Dock_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::srv::Dock>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::srv::Dock_Request>::value &&
    has_bounded_size<spot_msgs::srv::Dock_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::srv::Dock>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::srv::Dock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::srv::Dock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__SRV__DETAIL__DOCK__TRAITS_HPP_
