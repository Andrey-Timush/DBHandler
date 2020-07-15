cmake_minimum_required(VERSION 3.0)

find_package(Qt5 COMPONENTS Core REQUIRED)

if (NOT Qt5_FOUND)
  message(FATAL_ERROR "Qt5 not found")
endif()

add_library(jsonconf STATIC jsonconf.cpp jsonconf.h)
target_link_libraries(jsonconf Qt5::Core)
