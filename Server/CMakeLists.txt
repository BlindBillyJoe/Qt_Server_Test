cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME Qt_Server)

project(${PROJECT_NAME})

set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Network)
qt_standard_project_setup()

set(SRC 
    src/mainwindow.cpp

    src/clientmodel.cpp
    src/clientview.cpp
    src/clientcontroller.cpp

    src/listener.cpp
)

set(INCLUDE
    src/mainwindow.h

    src/clientmodel.h
    src/clientview.h
    src/clientcontroller.h

    src/listener.h
)

qt_add_executable(${PROJECT_NAME} main.cpp ${SRC} ${INCLUDE})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Widgets Qt6::Network)
