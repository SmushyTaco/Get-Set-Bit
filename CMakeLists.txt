cmake_minimum_required(VERSION 3.25)
project(get_set_bit C)

set(CMAKE_C_STANDARD 23)

if(MSVC)
    add_compile_options(/Wall /O2)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -O3)
endif()

add_library(get_set_bit INTERFACE)
target_include_directories(get_set_bit INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
