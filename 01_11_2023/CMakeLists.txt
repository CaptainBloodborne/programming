cmake_minimum_required(VERSION 3.0.0)
project(bit_mask_v2 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(bit_mask bit_mask_user_input.cpp)

add_executable(hex_arithmetic_expression hex_arithmetic_expression_problem.cpp)
add_executable(example 8_1_1.cpp)

add_executable(test_hex test.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
