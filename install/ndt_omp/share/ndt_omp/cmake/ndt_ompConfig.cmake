# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ndt_omp_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ndt_omp_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ndt_omp_FOUND FALSE)
  elseif(NOT ndt_omp_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ndt_omp_FOUND FALSE)
  endif()
  return()
endif()
set(_ndt_omp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ndt_omp_FIND_QUIETLY)
  message(STATUS "Found ndt_omp: 0.0.0 (${ndt_omp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ndt_omp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ndt_omp_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ndt_omp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${ndt_omp_DIR}/${_extra}")
endforeach()
