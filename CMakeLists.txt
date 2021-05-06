cmake_minimum_required(VERSION 3.19)
project(rcs_example)

set(CMAKE_CXX_STANDARD 14)

add_executable(client
        client.cpp
        message.hpp
        message_n.cc
        message_n_codegen_protos.hh
        )
target_link_libraries(client
        rcs)
add_dependencies(client copy_config)

add_executable(server server.cpp
        message.hpp
        message_n.cc
        message_n_codegen_protos.hh
        )
target_link_libraries(server
        rcs)
add_dependencies(server copy_config)

add_custom_target(copy_config
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/example.nml ${CMAKE_BINARY_DIR}/example.nml)

