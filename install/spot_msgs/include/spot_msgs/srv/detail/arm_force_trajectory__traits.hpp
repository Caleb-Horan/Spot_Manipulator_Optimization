// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:srv/ArmForceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__TRAITS_HPP_
#define SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__TRAITS_HPP_

#include "spot_msgs/srv/detail/arm_force_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::ArmForceTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: forces_pt0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forces_pt0.size() == 0) {
      out << "forces_pt0: []\n";
    } else {
      out << "forces_pt0:\n";
      for (auto item : msg.forces_pt0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torques_pt0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torques_pt0.size() == 0) {
      out << "torques_pt0: []\n";
    } else {
      out << "torques_pt0:\n";
      for (auto item : msg.torques_pt0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: forces_pt1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forces_pt1.size() == 0) {
      out << "forces_pt1: []\n";
    } else {
      out << "forces_pt1:\n";
      for (auto item : msg.forces_pt1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torques_pt1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torques_pt1.size() == 0) {
      out << "torques_pt1: []\n";
    } else {
      out << "torques_pt1:\n";
      for (auto item : msg.torques_pt1) {
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

inline std::string to_yaml(const spot_msgs::srv::ArmForceTrajectory_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::ArmForceTrajectory_Request>()
{
  return "spot_msgs::srv::ArmForceTrajectory_Request";
}

template<>
inline const char * name<spot_msgs::srv::ArmForceTrajectory_Request>()
{
  return "spot_msgs/srv/ArmForceTrajectory_Request";
}

template<>
struct has_fixed_size<spot_msgs::srv::ArmForceTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<spot_msgs::srv::ArmForceTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<spot_msgs::srv::ArmForceTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::ArmForceTrajectory_Response & msg,
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

inline std::string to_yaml(const spot_msgs::srv::ArmForceTrajectory_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::ArmForceTrajectory_Response>()
{
  return "spot_msgs::srv::ArmForceTrajectory_Response";
}

template<>
inline const char * name<spot_msgs::srv::ArmForceTrajectory_Response>()
{
  return "spot_msgs/srv/ArmForceTrajectory_Response";
}

template<>
struct has_fixed_size<spot_msgs::srv::ArmForceTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::ArmForceTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::ArmForceTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::srv::ArmForceTrajectory>()
{
  return "spot_msgs::srv::ArmForceTrajectory";
}

template<>
inline const char * name<spot_msgs::srv::ArmForceTrajectory>()
{
  return "spot_msgs/srv/ArmForceTrajectory";
}

template<>
struct has_fixed_size<spot_msgs::srv::ArmForceTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::srv::ArmForceTrajectory_Request>::value &&
    has_fixed_size<spot_msgs::srv::ArmForceTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::srv::ArmForceTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::srv::ArmForceTrajectory_Request>::value &&
    has_bounded_size<spot_msgs::srv::ArmForceTrajectory_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::srv::ArmForceTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::srv::ArmForceTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::srv::ArmForceTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__TRAITS_HPP_
