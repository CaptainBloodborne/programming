cmake_minimum_required(VERSION 3.0.0)
project(safe_input_debug_clang VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
set(CMAKE_CXX_STANDARD 20)

add_executable(safe_input_debug_clang_1 abnormal_input_C_1.cpp)
add_executable(safe_input_debug_clang_2 abnormal_input_C_2.cpp)
add_executable(safe_input_debug_clang_3 abnormal_input_С++_1.cpp)
add_executable(safe_input_debug_clang_4 abnormal_input_С++_2.cpp)

add_executable(safe_input_debug_clang_5 input_C_1.cpp)
add_executable(safe_input_debug_clang_6 input_C_2.cpp)

add_executable(safe_input_debug_clang_7 normal_input_C_1.cpp)
add_executable(safe_input_debug_clang_8 normal_input_C_2.cpp)
add_executable(safe_input_debug_clang_9 normal_input_С++_1.cpp)
add_executable(safe_input_debug_clang_10 normal_input_С++_2.cpp)
add_executable(safe_input_debug_clang_11 normal_input_С++_3.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
