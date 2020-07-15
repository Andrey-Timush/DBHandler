
cmake_minimum_required(VERSION 3.5)


project(dbhandler LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)
find_package(Qt5Sql REQUIRED)

set( project_sources
    ../main.cpp
    dbhandler.cpp
    dbhandler.h
    jsonconf.cpp
    jsonconf.h
 )


add_executable(${PROJECT_NAME}
    ${project_sources}
)

target_link_libraries(dbhandler Qt5::Core Qt5::Sql)
