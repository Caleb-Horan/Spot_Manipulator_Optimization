// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:srv/HandPose.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__HAND_POSE__TRAITS_HPP_
#define SPOT_MSGS__SRV__DETAIL__HAND_POSE__TRAITS_HPP_

#include "spot_msgs/srv/detail/hand_pose__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose_point'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::HandPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_point:\n";
    to_yaml(msg.pose_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::srv::HandPose_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::HandPose_Request>()
{
  return "spot_msgs::srv::HandPose_Request";
}

template<>
inline const char * name<spot_msgs::srv::HandPose_Request>()
{
  return "spot_msgs/srv/HandPose_Request";
}

template<>
struct has_fixed_size<spot_msgs::srv::HandPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<spot_msgs::srv::HandPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<spot_msgs::srv::HandPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::HandPose_Response & msg,
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

inline std::string to_yaml(const spot_msgs::srv::HandPose_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::HandPose_Response>()
{
  return "spot_msgs::srv::HandPose_Response";
}

template<>
inline const char * name<spot_msgs::srv::HandPose_Response>()
{
  return "spot_msgs/srv/HandPose_Response";
}

template<>
struct has_fixed_size<spot_msgs::srv::HandPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::HandPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::HandPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::srv::HandPose>()
{
  return "spot_msgs::srv::HandPose";
}

template<>
inline const char * name<spot_msgs::srv::HandPose>()
{
  return "spot_msgs/srv/HandPose";
}

template<>
struct has_fixed_size<spot_msgs::srv::HandPose>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::srv::HandPose_Request>::value &&
    has_fixed_size<spot_msgs::srv::HandPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::srv::HandPose>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::srv::HandPose_Request>::value &&
    has_bounded_size<spot_msgs::srv::HandPose_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::srv::HandPose>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::srv::HandPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::srv::HandPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__SRV__DETAIL__HAND_POSE__TRAITS_HPP_
