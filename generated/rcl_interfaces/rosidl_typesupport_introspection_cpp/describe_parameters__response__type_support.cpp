// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#ifndef __rcl_interfaces__srv__describe_parameters__response__type_support__h__
#define __rcl_interfaces__srv__describe_parameters__response__type_support__h__

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "rcl_interfaces/srv/describe_parameters__response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__DescribeParameters_Response__descriptors(const void * untyped_member)
{
  const std::vector<rcl_interfaces::msg::ParameterDescriptor> * member =
    reinterpret_cast<const std::vector<rcl_interfaces::msg::ParameterDescriptor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DescribeParameters_Response__descriptors(const void * untyped_member, size_t index)
{
  const std::vector<rcl_interfaces::msg::ParameterDescriptor> & member =
    *reinterpret_cast<const std::vector<rcl_interfaces::msg::ParameterDescriptor> *>(untyped_member);
  return &member[index];
}

void * get_function__DescribeParameters_Response__descriptors(void * untyped_member, size_t index)
{
  std::vector<rcl_interfaces::msg::ParameterDescriptor> & member =
    *reinterpret_cast<std::vector<rcl_interfaces::msg::ParameterDescriptor> *>(untyped_member);
  return &member[index];
}

void resize_function__DescribeParameters_Response__descriptors(void * untyped_member, size_t size)
{
  std::vector<rcl_interfaces::msg::ParameterDescriptor> * member =
    reinterpret_cast<std::vector<rcl_interfaces::msg::ParameterDescriptor> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DescribeParameters_Response_message_member_array[1] = {
  {
    "descriptors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rcl_interfaces::msg::ParameterDescriptor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces::srv::DescribeParameters_Response, descriptors),  // bytes offset in struct
    nullptr,  // default value
    size_function__DescribeParameters_Response__descriptors,  // size() function pointer
    get_const_function__DescribeParameters_Response__descriptors,  // get_const(index) function pointer
    get_function__DescribeParameters_Response__descriptors,  // get(index) function pointer
    resize_function__DescribeParameters_Response__descriptors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DescribeParameters_Response_message_members = {
  "rcl_interfaces",  // package name
  "DescribeParameters_Response",  // message name
  1,  // number of fields
  DescribeParameters_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t DescribeParameters_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DescribeParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rcl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::srv::DescribeParameters_Response>()
{
  return &::rcl_interfaces::srv::rosidl_typesupport_introspection_cpp::DescribeParameters_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rcl_interfaces, srv, DescribeParameters_Response)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_introspection_cpp::DescribeParameters_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#endif  // __rcl_interfaces__srv__describe_parameters__response__type_support__h__
