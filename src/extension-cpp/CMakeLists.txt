cmake_minimum_required(VERSION 3.12)
project(deep_client_php_extension)

set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

INCLUDE_DIRECTORIES(
  "${CMAKE_SOURCE_DIR}/"
  "${CMAKE_SOURCE_DIR}/php_headers"
  "${CMAKE_SOURCE_DIR}/zend_headers"
  "${CMAKE_SOURCE_DIR}/TSRM"
  "${CMAKE_SOURCE_DIR}/ext"
  "${CMAKE_SOURCE_DIR}/build/main"
  "${CMAKE_SOURCE_DIR}/build/Zend"
  "${CMAKE_SOURCE_DIR}/python"
)

# Find Boost package
find_package(Boost REQUIRED COMPONENTS python)

# Add the Boost include directory
include_directories(${Boost_INCLUDE_DIRS})

# Define your source files
set(SOURCES
        # phpcpp.h
        # DeepClient.cpp
        # BoostPythonBindings.cpp
        deep_client_php_wrapper.cpp
)
# Create the Python/PHP module
add_library(deep_client_php_extension MODULE ${SOURCES})

target_link_libraries(deep_client_php_extension ${Boost_LIBRARIES})

SET_TARGET_PROPERTIES(deep_client_php_extension
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  PREFIX ""
)
