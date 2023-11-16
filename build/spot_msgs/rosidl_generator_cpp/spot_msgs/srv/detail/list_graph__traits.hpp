// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:srv/ListGraph.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__LIST_GRAPH__TRAITS_HPP_
#define SPOT_MSGS__SRV__DETAIL__LIST_GRAPH__TRAITS_HPP_

#include "spot_msgs/srv/detail/list_graph__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::ListGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: upload_filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upload_filepath: ";
    value_to_yaml(msg.upload_filepath, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::srv::ListGraph_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::ListGraph_Request>()
{
  return "spot_msgs::srv::ListGraph_Request";
}

template<>
inline const char * name<spot_msgs::srv::ListGraph_Request>()
{
  return "spot_msgs/srv/ListGraph_Request";
}

template<>
struct has_fixed_size<spot_msgs::srv::ListGraph_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::ListGraph_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::ListGraph_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::ListGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoint_ids.size() == 0) {
      out << "waypoint_ids: []\n";
    } else {
      out << "waypoint_ids:\n";
      for (auto item : msg.waypoint_ids) {
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

inline std::string to_yaml(const spot_msgs::srv::ListGraph_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::ListGraph_Response>()
{
  return "spot_msgs::srv::ListGraph_Response";
}

template<>
inline const char * name<spot_msgs::srv::ListGraph_Response>()
{
  return "spot_msgs/srv/ListGraph_Response";
}

template<>
struct has_fixed_size<spot_msgs::srv::ListGraph_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::ListGraph_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::ListGraph_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::srv::ListGraph>()
{
  return "spot_msgs::srv::ListGraph";
}

template<>
inline const char * name<spot_msgs::srv::ListGraph>()
{
  return "spot_msgs/srv/ListGraph";
}

template<>
struct has_fixed_size<spot_msgs::srv::ListGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::srv::ListGraph_Request>::value &&
    has_fixed_size<spot_msgs::srv::ListGraph_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::srv::ListGraph>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::srv::ListGraph_Request>::value &&
    has_bounded_size<spot_msgs::srv::ListGraph_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::srv::ListGraph>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::srv::ListGraph_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::srv::ListGraph_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__SRV__DETAIL__LIST_GRAPH__TRAITS_HPP_
