#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release--cmake-args".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_cpp" for configuration "Release--cmake-args"
set_property(TARGET tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE--CMAKE-ARGS)
set_target_properties(tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE--CMAKE-ARGS "${_IMPORT_PREFIX}/lib/libtier4_debug_msgs__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELEASE--CMAKE-ARGS "libtier4_debug_msgs__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libtier4_debug_msgs__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
