#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release--cmake-args".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_c" for configuration "Release--cmake-args"
set_property(TARGET tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE--CMAKE-ARGS)
set_target_properties(tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_RELEASE--CMAKE-ARGS "${_IMPORT_PREFIX}/lib/libtier4_debug_msgs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_RELEASE--CMAKE-ARGS "libtier4_debug_msgs__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_tier4_debug_msgs::tier4_debug_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libtier4_debug_msgs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
