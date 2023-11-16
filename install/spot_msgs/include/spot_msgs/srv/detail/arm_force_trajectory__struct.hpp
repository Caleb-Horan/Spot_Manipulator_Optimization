// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_msgs:srv/ArmForceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__STRUCT_HPP_
#define SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Request __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmForceTrajectory_Request_
{
  using Type = ArmForceTrajectory_Request_<ContainerAllocator>;

  explicit ArmForceTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->forces_pt0.begin(), this->forces_pt0.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->torques_pt0.begin(), this->torques_pt0.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->forces_pt1.begin(), this->forces_pt1.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->torques_pt1.begin(), this->torques_pt1.end(), 0.0);
    }
  }

  explicit ArmForceTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : forces_pt0(_alloc),
    torques_pt0(_alloc),
    forces_pt1(_alloc),
    torques_pt1(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->forces_pt0.begin(), this->forces_pt0.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->torques_pt0.begin(), this->torques_pt0.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->forces_pt1.begin(), this->forces_pt1.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->torques_pt1.begin(), this->torques_pt1.end(), 0.0);
    }
  }

  // field types and members
  using _forces_pt0_type =
    std::array<double, 3>;
  _forces_pt0_type forces_pt0;
  using _torques_pt0_type =
    std::array<double, 3>;
  _torques_pt0_type torques_pt0;
  using _forces_pt1_type =
    std::array<double, 3>;
  _forces_pt1_type forces_pt1;
  using _torques_pt1_type =
    std::array<double, 3>;
  _torques_pt1_type torques_pt1;

  // setters for named parameter idiom
  Type & set__forces_pt0(
    const std::array<double, 3> & _arg)
  {
    this->forces_pt0 = _arg;
    return *this;
  }
  Type & set__torques_pt0(
    const std::array<double, 3> & _arg)
  {
    this->torques_pt0 = _arg;
    return *this;
  }
  Type & set__forces_pt1(
    const std::array<double, 3> & _arg)
  {
    this->forces_pt1 = _arg;
    return *this;
  }
  Type & set__torques_pt1(
    const std::array<double, 3> & _arg)
  {
    this->torques_pt1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Request
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Request
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmForceTrajectory_Request_ & other) const
  {
    if (this->forces_pt0 != other.forces_pt0) {
      return false;
    }
    if (this->torques_pt0 != other.torques_pt0) {
      return false;
    }
    if (this->forces_pt1 != other.forces_pt1) {
      return false;
    }
    if (this->torques_pt1 != other.torques_pt1) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmForceTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmForceTrajectory_Request_

// alias to use template instance with default allocator
using ArmForceTrajectory_Request =
  spot_msgs::srv::ArmForceTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_msgs


#ifndef _WIN32
# define DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Response __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmForceTrajectory_Response_
{
  using Type = ArmForceTrajectory_Response_<ContainerAllocator>;

  explicit ArmForceTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ArmForceTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Response
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__srv__ArmForceTrajectory_Response
    std::shared_ptr<spot_msgs::srv::ArmForceTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmForceTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmForceTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmForceTrajectory_Response_

// alias to use template instance with default allocator
using ArmForceTrajectory_Response =
  spot_msgs::srv::ArmForceTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_msgs

namespace spot_msgs
{

namespace srv
{

struct ArmForceTrajectory
{
  using Request = spot_msgs::srv::ArmForceTrajectory_Request;
  using Response = spot_msgs::srv::ArmForceTrajectory_Response;
};

}  // namespace srv

}  // namespace spot_msgs

#endif  // SPOT_MSGS__SRV__DETAIL__ARM_FORCE_TRAJECTORY__STRUCT_HPP_
