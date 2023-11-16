// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__POWER_STATE__STRUCT_HPP_
#define SPOT_MSGS__MSG__DETAIL__POWER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'locomotion_estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spot_msgs__msg__PowerState __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__msg__PowerState __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerState_
{
  using Type = PowerState_<ContainerAllocator>;

  explicit PowerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    locomotion_estimated_runtime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_power_state = 0;
      this->shore_power_state = 0;
      this->locomotion_charge_percentage = 0.0;
    }
  }

  explicit PowerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    locomotion_estimated_runtime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_power_state = 0;
      this->shore_power_state = 0;
      this->locomotion_charge_percentage = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _motor_power_state_type =
    uint8_t;
  _motor_power_state_type motor_power_state;
  using _shore_power_state_type =
    uint8_t;
  _shore_power_state_type shore_power_state;
  using _locomotion_charge_percentage_type =
    double;
  _locomotion_charge_percentage_type locomotion_charge_percentage;
  using _locomotion_estimated_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _locomotion_estimated_runtime_type locomotion_estimated_runtime;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__motor_power_state(
    const uint8_t & _arg)
  {
    this->motor_power_state = _arg;
    return *this;
  }
  Type & set__shore_power_state(
    const uint8_t & _arg)
  {
    this->shore_power_state = _arg;
    return *this;
  }
  Type & set__locomotion_charge_percentage(
    const double & _arg)
  {
    this->locomotion_charge_percentage = _arg;
    return *this;
  }
  Type & set__locomotion_estimated_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->locomotion_estimated_runtime = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_UNKNOWN =
    0u;
  static constexpr uint8_t STATE_OFF =
    1u;
  static constexpr uint8_t STATE_ON =
    2u;
  static constexpr uint8_t STATE_POWERING_ON =
    3u;
  static constexpr uint8_t STATE_POWERING_OFF =
    4u;
  static constexpr uint8_t STATE_ERROR =
    5u;
  static constexpr uint8_t STATE_UNKNOWN_SHORE_POWER =
    0u;
  static constexpr uint8_t STATE_ON_SHORE_POWER =
    1u;
  static constexpr uint8_t STATE_OFF_SHORE_POWER =
    2u;

  // pointer types
  using RawPtr =
    spot_msgs::msg::PowerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::msg::PowerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::msg::PowerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::msg::PowerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::PowerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::PowerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::PowerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::PowerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::msg::PowerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::msg::PowerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__msg__PowerState
    std::shared_ptr<spot_msgs::msg::PowerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__msg__PowerState
    std::shared_ptr<spot_msgs::msg::PowerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerState_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->motor_power_state != other.motor_power_state) {
      return false;
    }
    if (this->shore_power_state != other.shore_power_state) {
      return false;
    }
    if (this->locomotion_charge_percentage != other.locomotion_charge_percentage) {
      return false;
    }
    if (this->locomotion_estimated_runtime != other.locomotion_estimated_runtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerState_

// alias to use template instance with default allocator
using PowerState =
  spot_msgs::msg::PowerState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_OFF;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_ON;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_POWERING_ON;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_POWERING_OFF;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_UNKNOWN_SHORE_POWER;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_ON_SHORE_POWER;
template<typename ContainerAllocator>
constexpr uint8_t PowerState_<ContainerAllocator>::STATE_OFF_SHORE_POWER;

}  // namespace msg

}  // namespace spot_msgs

#endif  // SPOT_MSGS__MSG__DETAIL__POWER_STATE__STRUCT_HPP_
