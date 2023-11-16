// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:srv/ConstrainedArmJointMovement.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__TRAITS_HPP_
#define SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__TRAITS_HPP_

#include "spot_msgs/srv/detail/constrained_arm_joint_movement__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::ConstrainedArmJointMovement_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_target.size() == 0) {
      out << "joint_target: []\n";
    } else {
      out << "joint_target:\n";
      for (auto item : msg.joint_target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_execution_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_execution_time: ";
    value_to_yaml(msg.max_execution_time, out);
    out << "\n";
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::srv::ConstrainedArmJointMovement_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::ConstrainedArmJointMovement_Request>()
{
  return "spot_msgs::srv::ConstrainedArmJointMovement_Request";
}

template<>
inline const char * name<spot_msgs::srv::ConstrainedArmJointMovement_Request>()
{
  return "spot_msgs/srv/ConstrainedArmJointMovement_Request";
}

template<>
struct has_fixed_size<spot_msgs::srv::ConstrainedArmJointMovement_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::ConstrainedArmJointMovement_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::ConstrainedArmJointMovement_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::srv::ConstrainedArmJointMovement_Response & msg,
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

inline std::string to_yaml(const spot_msgs::srv::ConstrainedArmJointMovement_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::srv::ConstrainedArmJointMovement_Response>()
{
  return "spot_msgs::srv::ConstrainedArmJointMovement_Response";
}

template<>
inline const char * name<spot_msgs::srv::ConstrainedArmJointMovement_Response>()
{
  return "spot_msgs/srv/ConstrainedArmJointMovement_Response";
}

template<>
struct has_fixed_size<spot_msgs::srv::ConstrainedArmJointMovement_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::srv::ConstrainedArmJointMovement_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::srv::ConstrainedArmJointMovement_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::srv::ConstrainedArmJointMovement>()
{
  return "spot_msgs::srv::ConstrainedArmJointMovement";
}

template<>
inline const char * name<spot_msgs::srv::ConstrainedArmJointMovement>()
{
  return "spot_msgs/srv/ConstrainedArmJointMovement";
}

template<>
struct has_fixed_size<spot_msgs::srv::ConstrainedArmJointMovement>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::srv::ConstrainedArmJointMovement_Request>::value &&
    has_fixed_size<spot_msgs::srv::ConstrainedArmJointMovement_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::srv::ConstrainedArmJointMovement>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::srv::ConstrainedArmJointMovement_Request>::value &&
    has_bounded_size<spot_msgs::srv::ConstrainedArmJointMovement_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::srv::ConstrainedArmJointMovement>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::srv::ConstrainedArmJointMovement_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::srv::ConstrainedArmJointMovement_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__TRAITS_HPP_
