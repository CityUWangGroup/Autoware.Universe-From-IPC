#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release--cmake-args".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "autoware_common_msgs::autoware_common_msgs__rosidl_typesupport_cpp" for configuration "Release--cmake-args"
set_property(TARGET autoware_common_msgs::autoware_common_msgs__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE--CMAKE-ARGS)
set_target_properties(autoware_common_msgs::autoware_common_msgs__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE--CMAKE-ARGS "${_IMPORT_PREFIX}/lib/libautoware_common_msgs__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELEASE--CMAKE-ARGS "libautoware_common_msgs__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS autoware_common_msgs::autoware_common_msgs__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_autoware_common_msgs::autoware_common_msgs__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libautoware_common_msgs__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)