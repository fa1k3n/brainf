cmake_minimum_required(VERSION 2.8.12)

project(brainf LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_subdirectory("external/googletest")
add_subdirectory("test")

set(COMMON_LIBS )

set(SRC
    "src/machine.cpp"
)

set(INC
    "include/brainf.hpp"
    )

include_directories(include)
add_library(brainf ${SRC} ${INC})
