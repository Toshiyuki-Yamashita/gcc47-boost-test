cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/CMakeFiles/modules/")

PROJECT(tddbc)

include (CheckIncludeFiles)

# compile option
set(CMAKE_CXX_FLAGS "-g -Wall -std=gnu++11")

set(CMAKE_VERBOSE_MAKEFILE OFF)

# Boost
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_FILESYSTEM ON)
set(Boost_USE_TEST ON)
find_package(Boost 1.54.0 REQUIRED system filesystem unit_test_framework)
if(NOT Boost_FOUND)
  message(SEND_ERROR "Boost not found")
endif (NOT Boost_FOUND)

find_package(Threads REQUIRED)

include_directories(${Boost_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_BINARY_DIR}/include "${PROJECT_SOURCE_DIR}/src")

link_directories(${Boost_LIBRARY_DIRS})

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/test)

add_test(test sample_test)
