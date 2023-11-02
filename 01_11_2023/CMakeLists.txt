cmake_minimum_required(VERSION 3.0.0)
project(bit_mask_v2 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(bit_mask_v2_1 8_1_2_1.cpp)
add_executable(bit_mask_v2_2 8_1_2_2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
