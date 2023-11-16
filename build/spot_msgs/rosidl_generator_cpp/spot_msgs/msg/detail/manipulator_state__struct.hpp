// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_HPP_
#define SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'estimated_end_effector_force_in_hand'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spot_msgs__msg__ManipulatorState __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__msg__ManipulatorState __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManipulatorState_
{
  using Type = ManipulatorState_<ContainerAllocator>;

  explicit ManipulatorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimated_end_effector_force_in_hand(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_open_percentage = 0.0;
      this->is_gripper_holding_item = false;
      this->stow_state = 0;
      this->carry_state = 0;
    }
  }

  explicit ManipulatorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : estimated_end_effector_force_in_hand(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_open_percentage = 0.0;
      this->is_gripper_holding_item = false;
      this->stow_state = 0;
      this->carry_state = 0;
    }
  }

  // field types and members
  using _gripper_open_percentage_type =
    double;
  _gripper_open_percentage_type gripper_open_percentage;
  using _is_gripper_holding_item_type =
    bool;
  _is_gripper_holding_item_type is_gripper_holding_item;
  using _estimated_end_effector_force_in_hand_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _estimated_end_effector_force_in_hand_type estimated_end_effector_force_in_hand;
  using _stow_state_type =
    uint8_t;
  _stow_state_type stow_state;
  using _carry_state_type =
    uint8_t;
  _carry_state_type carry_state;

  // setters for named parameter idiom
  Type & set__gripper_open_percentage(
    const double & _arg)
  {
    this->gripper_open_percentage = _arg;
    return *this;
  }
  Type & set__is_gripper_holding_item(
    const bool & _arg)
  {
    this->is_gripper_holding_item = _arg;
    return *this;
  }
  Type & set__estimated_end_effector_force_in_hand(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->estimated_end_effector_force_in_hand = _arg;
    return *this;
  }
  Type & set__stow_state(
    const uint8_t & _arg)
  {
    this->stow_state = _arg;
    return *this;
  }
  Type & set__carry_state(
    const uint8_t & _arg)
  {
    this->carry_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STOWSTATE_UNKNOWN =
    0u;
  static constexpr uint8_t STOWSTATE_STOWED =
    1u;
  static constexpr uint8_t STOWSTATE_DEPLOYED =
    2u;
  static constexpr uint8_t CARRY_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t CARRY_STATE_NOT_CARRIABLE =
    1u;
  static constexpr uint8_t CARRY_STATE_CARRIABLE =
    3u;
  static constexpr uint8_t CARRY_STATE_CARRIABLE_AND_STOWABLE =
    3u;

  // pointer types
  using RawPtr =
    spot_msgs::msg::ManipulatorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::msg::ManipulatorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::ManipulatorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::ManipulatorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__msg__ManipulatorState
    std::shared_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__msg__ManipulatorState
    std::shared_ptr<spot_msgs::msg::ManipulatorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManipulatorState_ & other) const
  {
    if (this->gripper_open_percentage != other.gripper_open_percentage) {
      return false;
    }
    if (this->is_gripper_holding_item != other.is_gripper_holding_item) {
      return false;
    }
    if (this->estimated_end_effector_force_in_hand != other.estimated_end_effector_force_in_hand) {
      return false;
    }
    if (this->stow_state != other.stow_state) {
      return false;
    }
    if (this->carry_state != other.carry_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManipulatorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManipulatorState_

// alias to use template instance with default allocator
using ManipulatorState =
  spot_msgs::msg::ManipulatorState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::STOWSTATE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::STOWSTATE_STOWED;
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::STOWSTATE_DEPLOYED;
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::CARRY_STATE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::CARRY_STATE_NOT_CARRIABLE;
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::CARRY_STATE_CARRIABLE;
template<typename ContainerAllocator>
constexpr uint8_t ManipulatorState_<ContainerAllocator>::CARRY_STATE_CARRIABLE_AND_STOWABLE;

}  // namespace msg

}  // namespace spot_msgs

#endif  // SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_HPP_
