cmake_minimum_required(VERSION 3.19)
project(rcs_example)

set(CMAKE_CXX_STANDARD 14)

add_executable(rcs_example read.cpp)
target_link_libraries(rcs_example
        rcs)