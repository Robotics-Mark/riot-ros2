// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__DURATION__STRUCT_HPP_
#define BUILTIN_INTERFACES__MSG__DURATION__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_builtin_interfaces_msg_Duration __attribute__((deprecated))
#else
# define DEPRECATED_builtin_interfaces_msg_Duration __declspec(deprecated)
#endif

namespace builtin_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Duration_
{
  using Type = Duration_<ContainerAllocator>;

  Duration_()
  {
  }
  explicit Duration_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _sec_type =
      int32_t;
  _sec_type sec;
  using _nanosec_type =
      uint32_t;
  _nanosec_type nanosec;

  // setters for named parameter idiom
  Type * set__sec(
    const int32_t & _arg)
  {
    this->sec = _arg;
    return this;
  }
  Type * set__nanosec(
    const uint32_t & _arg)
  {
    this->nanosec = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      builtin_interfaces::msg::Duration_<ContainerAllocator> *;
  using ConstRawPtr =
      const builtin_interfaces::msg::Duration_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    builtin_interfaces::msg::Duration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    builtin_interfaces::msg::Duration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_builtin_interfaces_msg_Duration
    std::shared_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_builtin_interfaces_msg_Duration
    std::shared_ptr<builtin_interfaces::msg::Duration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Duration_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    return true;
  }
  bool operator!=(const Duration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Duration_

// alias to use template instance with default allocator
using Duration =
    builtin_interfaces::msg::Duration_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace builtin_interfaces

#endif  // BUILTIN_INTERFACES__MSG__DURATION__STRUCT_HPP_
