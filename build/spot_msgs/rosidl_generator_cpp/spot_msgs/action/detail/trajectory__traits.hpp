// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_msgs:action/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__ACTION__DETAIL__TRAJECTORY__TRAITS_HPP_
#define SPOT_MSGS__ACTION__DETAIL__TRAJECTORY__TRAITS_HPP_

#include "spot_msgs/action/detail/trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_yaml(msg.duration, out, indentation + 2);
  }

  // member: precise_positioning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precise_positioning: ";
    value_to_yaml(msg.precise_positioning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_Goal>()
{
  return "spot_msgs::action::Trajectory_Goal";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_Goal>()
{
  return "spot_msgs/action/Trajectory_Goal";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<spot_msgs::action::Trajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_Result & msg,
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

inline std::string to_yaml(const spot_msgs::action::Trajectory_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_Result>()
{
  return "spot_msgs::action::Trajectory_Result";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_Result>()
{
  return "spot_msgs/action/Trajectory_Result";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::action::Trajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_Feedback>()
{
  return "spot_msgs::action::Trajectory_Feedback";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_Feedback>()
{
  return "spot_msgs/action/Trajectory_Feedback";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_msgs::action::Trajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "spot_msgs/action/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_SendGoal_Request>()
{
  return "spot_msgs::action::Trajectory_SendGoal_Request";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_SendGoal_Request>()
{
  return "spot_msgs/action/Trajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<spot_msgs::action::Trajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<spot_msgs::action::Trajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<spot_msgs::action::Trajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_SendGoal_Response>()
{
  return "spot_msgs::action::Trajectory_SendGoal_Response";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_SendGoal_Response>()
{
  return "spot_msgs/action/Trajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<spot_msgs::action::Trajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::action::Trajectory_SendGoal>()
{
  return "spot_msgs::action::Trajectory_SendGoal";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_SendGoal>()
{
  return "spot_msgs/action/Trajectory_SendGoal";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::action::Trajectory_SendGoal_Request>::value &&
    has_fixed_size<spot_msgs::action::Trajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::action::Trajectory_SendGoal_Request>::value &&
    has_bounded_size<spot_msgs::action::Trajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::action::Trajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::action::Trajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::action::Trajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_GetResult_Request>()
{
  return "spot_msgs::action::Trajectory_GetResult_Request";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_GetResult_Request>()
{
  return "spot_msgs/action/Trajectory_GetResult_Request";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<spot_msgs::action::Trajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "spot_msgs/action/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_GetResult_Response>()
{
  return "spot_msgs::action::Trajectory_GetResult_Response";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_GetResult_Response>()
{
  return "spot_msgs/action/Trajectory_GetResult_Response";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<spot_msgs::action::Trajectory_Result>::value> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<spot_msgs::action::Trajectory_Result>::value> {};

template<>
struct is_message<spot_msgs::action::Trajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_msgs::action::Trajectory_GetResult>()
{
  return "spot_msgs::action::Trajectory_GetResult";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_GetResult>()
{
  return "spot_msgs/action/Trajectory_GetResult";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_msgs::action::Trajectory_GetResult_Request>::value &&
    has_fixed_size<spot_msgs::action::Trajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_msgs::action::Trajectory_GetResult_Request>::value &&
    has_bounded_size<spot_msgs::action::Trajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<spot_msgs::action::Trajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<spot_msgs::action::Trajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_msgs::action::Trajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "spot_msgs/action/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const spot_msgs::action::Trajectory_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const spot_msgs::action::Trajectory_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<spot_msgs::action::Trajectory_FeedbackMessage>()
{
  return "spot_msgs::action::Trajectory_FeedbackMessage";
}

template<>
inline const char * name<spot_msgs::action::Trajectory_FeedbackMessage>()
{
  return "spot_msgs/action/Trajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<spot_msgs::action::Trajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<spot_msgs::action::Trajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<spot_msgs::action::Trajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<spot_msgs::action::Trajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<spot_msgs::action::Trajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<spot_msgs::action::Trajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<spot_msgs::action::Trajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<spot_msgs::action::Trajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<spot_msgs::action::Trajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SPOT_MSGS__ACTION__DETAIL__TRAJECTORY__TRAITS_HPP_
