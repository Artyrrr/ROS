// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice

#ifndef DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__BUILDER_HPP_
#define DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__BUILDER_HPP_

#include "dictionary_interface/srv/detail/get_element__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dictionary_interface
{

namespace srv
{

namespace builder
{

class Init_GetElement_Request_n
{
public:
  Init_GetElement_Request_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dictionary_interface::srv::GetElement_Request n(::dictionary_interface::srv::GetElement_Request::_n_type arg)
  {
    msg_.n = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dictionary_interface::srv::GetElement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dictionary_interface::srv::GetElement_Request>()
{
  return dictionary_interface::srv::builder::Init_GetElement_Request_n();
}

}  // namespace dictionary_interface


namespace dictionary_interface
{

namespace srv
{

namespace builder
{

class Init_GetElement_Response_elm
{
public:
  Init_GetElement_Response_elm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dictionary_interface::srv::GetElement_Response elm(::dictionary_interface::srv::GetElement_Response::_elm_type arg)
  {
    msg_.elm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dictionary_interface::srv::GetElement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dictionary_interface::srv::GetElement_Response>()
{
  return dictionary_interface::srv::builder::Init_GetElement_Response_elm();
}

}  // namespace dictionary_interface

#endif  // DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__BUILDER_HPP_
