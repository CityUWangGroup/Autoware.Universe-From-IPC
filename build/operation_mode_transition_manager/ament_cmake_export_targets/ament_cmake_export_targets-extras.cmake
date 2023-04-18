# generated from ament_cmake_export_targets/cmake/ament_cmake_export_targets-extras.cmake.in

set(_exported_targets "operation_mode_transition_manager__rosidl_generator_c;operation_mode_transition_manager__rosidl_typesupport_introspection_c;operation_mode_transition_manager__rosidl_typesupport_c;operation_mode_transition_manager__rosidl_generator_cpp;operation_mode_transition_manager__rosidl_typesupport_introspection_cpp;operation_mode_transition_manager__rosidl_typesupport_cpp")

# include all exported targets
if(NOT _exported_targets STREQUAL "")
  foreach(_target ${_exported_targets})
    set(_export_file "${operation_mode_transition_manager_DIR}/${_target}Export.cmake")
    include("${_export_file}")

    # extract the target names associated with the export
    set(_regex "foreach\\((_cmake)?_expected_?[Tt]arget (IN ITEMS )?(.+)\\)")
    file(
      STRINGS "${_export_file}" _foreach_targets
      REGEX "${_regex}")
    list(LENGTH _foreach_targets _matches)
    if(NOT _matches EQUAL 1)
      message(FATAL_ERROR
        "Failed to find exported target names in '${_export_file}'")
    endif()
    string(REGEX REPLACE "${_regex}" "\\3" _targets "${_foreach_targets}")
    string(REPLACE " " ";" _targets "${_targets}")
    list(LENGTH _targets _length)

    list(APPEND operation_mode_transition_manager_TARGETS ${_targets})
  endforeach()
endif()
