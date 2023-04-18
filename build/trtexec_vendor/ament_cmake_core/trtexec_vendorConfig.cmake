# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_trtexec_vendor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED trtexec_vendor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(trtexec_vendor_FOUND FALSE)
  elseif(NOT trtexec_vendor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(trtexec_vendor_FOUND FALSE)
  endif()
  return()
endif()
set(_trtexec_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT trtexec_vendor_FIND_QUIETLY)
  message(STATUS "Found trtexec_vendor: 0.1.0 (${trtexec_vendor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'trtexec_vendor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${trtexec_vendor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(trtexec_vendor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${trtexec_vendor_DIR}/${_extra}")
endforeach()
