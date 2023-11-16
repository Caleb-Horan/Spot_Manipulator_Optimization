// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_msgs:srv/ConstrainedArmJointMovement.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__STRUCT_HPP_
#define SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Request __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Request __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConstrainedArmJointMovement_Request_
{
  using Type = ConstrainedArmJointMovement_Request_<ContainerAllocator>;

  explicit ConstrainedArmJointMovement_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_execution_time = 0.0;
      this->max_velocity = 0.0;
      this->max_acceleration = 0.0;
    }
  }

  explicit ConstrainedArmJointMovement_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_execution_time = 0.0;
      this->max_velocity = 0.0;
      this->max_acceleration = 0.0;
    }
  }

  // field types and members
  using _joint_target_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_target_type joint_target;
  using _max_execution_time_type =
    double;
  _max_execution_time_type max_execution_time;
  using _max_velocity_type =
    double;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    double;
  _max_acceleration_type max_acceleration;

  // setters for named parameter idiom
  Type & set__joint_target(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_target = _arg;
    return *this;
  }
  Type & set__max_execution_time(
    const double & _arg)
  {
    this->max_execution_time = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const double & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const double & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Request
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Request
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedArmJointMovement_Request_ & other) const
  {
    if (this->joint_target != other.joint_target) {
      return false;
    }
    if (this->max_execution_time != other.max_execution_time) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedArmJointMovement_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedArmJointMovement_Request_

// alias to use template instance with default allocator
using ConstrainedArmJointMovement_Request =
  spot_msgs::srv::ConstrainedArmJointMovement_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_msgs


#ifndef _WIN32
# define DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Response __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Response __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConstrainedArmJointMovement_Response_
{
  using Type = ConstrainedArmJointMovement_Response_<ContainerAllocator>;

  explicit ConstrainedArmJointMovement_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ConstrainedArmJointMovement_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Response
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__srv__ConstrainedArmJointMovement_Response
    std::shared_ptr<spot_msgs::srv::ConstrainedArmJointMovement_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedArmJointMovement_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedArmJointMovement_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedArmJointMovement_Response_

// alias to use template instance with default allocator
using ConstrainedArmJointMovement_Response =
  spot_msgs::srv::ConstrainedArmJointMovement_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_msgs

namespace spot_msgs
{

namespace srv
{

struct ConstrainedArmJointMovement
{
  using Request = spot_msgs::srv::ConstrainedArmJointMovement_Request;
  using Response = spot_msgs::srv::ConstrainedArmJointMovement_Response;
};

}  // namespace srv

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__CONSTRAINED_ARM_JOINT_MOVEMENT__STRUCT_HPP_
