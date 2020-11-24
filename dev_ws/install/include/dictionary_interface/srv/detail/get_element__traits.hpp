// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice

#ifndef DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__TRAITS_HPP_
#define DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__TRAITS_HPP_

#include "dictionary_interface/srv/detail/get_element__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dictionary_interface::srv::GetElement_Request>()
{
  return "dictionary_interface::srv::GetElement_Request";
}

template<>
inline const char * name<dictionary_interface::srv::GetElement_Request>()
{
  return "dictionary_interface/srv/GetElement_Request";
}

template<>
struct has_fixed_size<dictionary_interface::srv::GetElement_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dictionary_interface::srv::GetElement_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dictionary_interface::srv::GetElement_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dictionary_interface::srv::GetElement_Response>()
{
  return "dictionary_interface::srv::GetElement_Response";
}

template<>
inline const char * name<dictionary_interface::srv::GetElement_Response>()
{
  return "dictionary_interface/srv/GetElement_Response";
}

template<>
struct has_fixed_size<dictionary_interface::srv::GetElement_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dictionary_interface::srv::GetElement_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dictionary_interface::srv::GetElement_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dictionary_interface::srv::GetElement>()
{
  return "dictionary_interface::srv::GetElement";
}

template<>
inline const char * name<dictionary_interface::srv::GetElement>()
{
  return "dictionary_interface/srv/GetElement";
}

template<>
struct has_fixed_size<dictionary_interface::srv::GetElement>
  : std::integral_constant<
    bool,
    has_fixed_size<dictionary_interface::srv::GetElement_Request>::value &&
    has_fixed_size<dictionary_interface::srv::GetElement_Response>::value
  >
{
};

template<>
struct has_bounded_size<dictionary_interface::srv::GetElement>
  : std::integral_constant<
    bool,
    has_bounded_size<dictionary_interface::srv::GetElement_Request>::value &&
    has_bounded_size<dictionary_interface::srv::GetElement_Response>::value
  >
{
};

template<>
struct is_service<dictionary_interface::srv::GetElement>
  : std::true_type
{
};

template<>
struct is_service_request<dictionary_interface::srv::GetElement_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dictionary_interface::srv::GetElement_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__TRAITS_HPP_
