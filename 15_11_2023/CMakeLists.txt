cmake_minimum_required(VERSION 3.0.0)
project(n_len_number_swap VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(n_len_number_swap n_len_number.cpp)
add_executable(n_len_number_swap_uint n_len_number_uint.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
