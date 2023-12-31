// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_msgs:msg/SystemFaultState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__STRUCT_HPP_
#define SPOT_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'faults'
// Member 'historical_faults'
#include "spot_msgs/msg/detail/system_fault__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spot_msgs__msg__SystemFaultState __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__msg__SystemFaultState __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemFaultState_
{
  using Type = SystemFaultState_<ContainerAllocator>;

  explicit SystemFaultState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SystemFaultState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _faults_type =
    std::vector<spot_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_msgs::msg::SystemFault_<ContainerAllocator>>>;
  _faults_type faults;
  using _historical_faults_type =
    std::vector<spot_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_msgs::msg::SystemFault_<ContainerAllocator>>>;
  _historical_faults_type historical_faults;

  // setters for named parameter idiom
  Type & set__faults(
    const std::vector<spot_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_msgs::msg::SystemFault_<ContainerAllocator>>> & _arg)
  {
    this->faults = _arg;
    return *this;
  }
  Type & set__historical_faults(
    const std::vector<spot_msgs::msg::SystemFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_msgs::msg::SystemFault_<ContainerAllocator>>> & _arg)
  {
    this->historical_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_msgs::msg::SystemFaultState_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::msg::SystemFaultState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::SystemFaultState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::SystemFaultState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__msg__SystemFaultState
    std::shared_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__msg__SystemFaultState
    std::shared_ptr<spot_msgs::msg::SystemFaultState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemFaultState_ & other) const
  {
    if (this->faults != other.faults) {
      return false;
    }
    if (this->historical_faults != other.historical_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemFaultState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemFaultState_

// alias to use template instance with default allocator
using SystemFaultState =
  spot_msgs::msg::SystemFaultState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spot_msgs

#endif  // SPOT_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__STRUCT_HPP_
