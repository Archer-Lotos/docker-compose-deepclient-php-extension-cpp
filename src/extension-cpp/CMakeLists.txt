CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(deep_client_php_extension)

INCLUDE_DIRECTORIES(
  "${CMAKE_SOURCE_DIR}/"
  "${CMAKE_SOURCE_DIR}/php_headers"
  "${CMAKE_SOURCE_DIR}/zend_headers"
  "${CMAKE_SOURCE_DIR}/TSRM"
  "${CMAKE_SOURCE_DIR}/ext"
  "${CMAKE_SOURCE_DIR}/build/main"
  "${CMAKE_SOURCE_DIR}/build/Zend"
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/python_headers"
)

# Find Boost package
find_package(Boost REQUIRED COMPONENTS python)

# Add the Boost include directory
include_directories(${Boost_INCLUDE_DIRS})

# Define your source files
set(SOURCES
        phpcpp.h
        # DeepClient.cpp
        # BoostPythonBindings.cpp
        deep_client_php_wrapper.cpp
)

# Create the Python/PHP module
add_library(deep_client_php_extension MODULE ${SOURCES})

# Link against Boost libraries
target_link_libraries(deep_client_php_extension ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
set_target_properties(deep_client_php_extension PROPERTIES PREFIX "")
