cmake_minimum_required(VERSION 3.12)
project(deep_client_php_extension)

set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR})


ADD_DEFINITIONS(-D_MSC_STDINT_H_)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(-DBUILDING_PHPCPP)
ADD_DEFINITIONS(-DZEND_WIN32_KEEP_INLINE)


INCLUDE_DIRECTORIES(
  "${CMAKE_SOURCE_DIR}/"
  "${CMAKE_SOURCE_DIR}/php_headers"
  "${CMAKE_SOURCE_DIR}/zend_headers"
  "${CMAKE_SOURCE_DIR}/TSRM"
  "${CMAKE_SOURCE_DIR}/ext"
  "${CMAKE_SOURCE_DIR}/build/main"
  "${CMAKE_SOURCE_DIR}/build/Zend"
)

SET(PHPCPP_COMMON_SOURCES
  common/modifiers.cpp
  common/streambuf.cpp
)

SET(PHPCPP_COMMON_HEADERS
  common/extensionbase.h
  common/includes.h
  common/streambuf.h
)

ADD_LIBRARY(phpcpp-common STATIC
  ${PHPCPP_COMMON_HEADERS}
  ${PHPCPP_COMMON_SOURCES}
)

set_target_properties(phpcpp-common
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

# Define your source files
set(SOURCES
        # phpcpp/phpcpp.h
        # DeepClient.cpp
        # BoostPythonBindings.cpp
        deep_client_php_wrapper.cpp
)
# Create the Python/PHP module
add_library(deep_client_php_extension MODULE ${SOURCES})

#TARGET_LINK_LIBRARIES(deep_client_php_extension phpcpp-common)

SET_TARGET_PROPERTIES(deep_client_php_extension
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  PREFIX ""
)
