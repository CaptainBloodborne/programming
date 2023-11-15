cmake_minimum_required(VERSION 3.0.0)
project(n_len_number VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(n_len_number 3_len_number_digits_swap.cpp)
add_executable(n_len_number_v2 n_len_number.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
