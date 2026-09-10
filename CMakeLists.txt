cmake_minimum_required(VERSION 3.20)

project(program
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(program
    src/source.cc
)

target_link_libraries(program
    PRIVATE
        Qt6::Widgets
)

set_target_properties(program PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)