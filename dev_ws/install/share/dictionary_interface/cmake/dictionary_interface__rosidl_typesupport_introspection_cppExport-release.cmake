#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dictionary_interface::dictionary_interface__rosidl_typesupport_introspection_cpp" for configuration "Release"
set_property(TARGET dictionary_interface::dictionary_interface__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dictionary_interface::dictionary_interface__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/dictionary_interface__rosidl_typesupport_introspection_cpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dictionary_interface__rosidl_typesupport_introspection_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS dictionary_interface::dictionary_interface__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_dictionary_interface::dictionary_interface__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/dictionary_interface__rosidl_typesupport_introspection_cpp.lib" "${_IMPORT_PREFIX}/bin/dictionary_interface__rosidl_typesupport_introspection_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
