// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_HPP_
#define SPOT_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__spot_msgs__msg__DockState __attribute__((deprecated))
#else
# define DEPRECATED__spot_msgs__msg__DockState __declspec(deprecated)
#endif

namespace spot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockState_
{
  using Type = DockState_<ContainerAllocator>;

  explicit DockState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->dock_type = 0;
      this->dock_id = 0ul;
      this->power_status = 0;
    }
  }

  explicit DockState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->dock_type = 0;
      this->dock_id = 0ul;
      this->power_status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _dock_type_type =
    uint8_t;
  _dock_type_type dock_type;
  using _dock_id_type =
    uint32_t;
  _dock_id_type dock_id;
  using _power_status_type =
    uint8_t;
  _power_status_type power_status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__dock_type(
    const uint8_t & _arg)
  {
    this->dock_type = _arg;
    return *this;
  }
  Type & set__dock_id(
    const uint32_t & _arg)
  {
    this->dock_id = _arg;
    return *this;
  }
  Type & set__power_status(
    const uint8_t & _arg)
  {
    this->power_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DOCK_STATUS_UNKNOWN =
    0u;
  static constexpr uint8_t DOCK_STATUS_DOCKED =
    1u;
  static constexpr uint8_t DOCK_STATUS_DOCKING =
    2u;
  static constexpr uint8_t DOCK_STATUS_UNDOCKED =
    3u;
  static constexpr uint8_t DOCK_STATUS_UNDOCKING =
    4u;
  static constexpr uint8_t DOCK_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t DOCK_TYPE_CONTACT_PROTOTYPE =
    2u;
  static constexpr uint8_t DOCK_TYPE_SPOT_DOCK =
    3u;
  static constexpr uint8_t LINK_STATUS_UNKNOWN =
    0u;
  static constexpr uint8_t LINK_STATUS_CONNECTED =
    1u;
  static constexpr uint8_t LINK_STATUS_ERROR =
    2u;
  static constexpr uint8_t LINK_STATUS_DETECTING =
    3u;

  // pointer types
  using RawPtr =
    spot_msgs::msg::DockState_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_msgs::msg::DockState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_msgs::msg::DockState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_msgs::msg::DockState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::DockState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::DockState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_msgs::msg::DockState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_msgs::msg::DockState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_msgs::msg::DockState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_msgs::msg::DockState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_msgs__msg__DockState
    std::shared_ptr<spot_msgs::msg::DockState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_msgs__msg__DockState
    std::shared_ptr<spot_msgs::msg::DockState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockState_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->dock_type != other.dock_type) {
      return false;
    }
    if (this->dock_id != other.dock_id) {
      return false;
    }
    if (this->power_status != other.power_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockState_

// alias to use template instance with default allocator
using DockState =
  spot_msgs::msg::DockState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_STATUS_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_STATUS_DOCKED;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_STATUS_DOCKING;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_STATUS_UNDOCKED;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_STATUS_UNDOCKING;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_TYPE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_TYPE_CONTACT_PROTOTYPE;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::DOCK_TYPE_SPOT_DOCK;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::LINK_STATUS_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::LINK_STATUS_CONNECTED;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::LINK_STATUS_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t DockState_<ContainerAllocator>::LINK_STATUS_DETECTING;

}  // namespace msg

}  // namespace spot_msgs

#endif  // SPOT_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_HPP_
