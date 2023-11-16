# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_optimization_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED optimization_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(optimization_FOUND FALSE)
  elseif(NOT optimization_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(optimization_FOUND FALSE)
  endif()
  return()
endif()
set(_optimization_CONFIG_INCLUDED TRUE)

# output package information
if(NOT optimization_FIND_QUIETLY)
  message(STATUS "Found optimization: 0.0.0 (${optimization_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'optimization' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${optimization_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(optimization_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${optimization_DIR}/${_extra}")
endforeach()
