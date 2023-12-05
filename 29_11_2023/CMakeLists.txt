cmake_minimum_required(VERSION 3.0.0)
project(real_number_dump VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(real_number_dump_float real_number_dump_float.cpp)
add_executable(real_number_dump_double real_number_dump_double.cpp)
add_executable(dump1 Dump_1.cpp)
add_executable(dump2 Dump_2.cpp)
add_executable(dump3 Dump_3.cpp)
add_executable(dump4 Dump_4.cpp)
add_executable(dump6 Dump_6.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
