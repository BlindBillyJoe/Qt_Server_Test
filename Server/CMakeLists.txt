cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME Qt_Server)

project(${PROJECT_NAME})

set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)
qt_standard_project_setup()

set(SRC 
    src/mainwindow.cpp)
set(INCLUDE
    src/mainwindow.h)

qt_add_executable(${PROJECT_NAME} main.cpp ${SRC} ${INCLUDE})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)