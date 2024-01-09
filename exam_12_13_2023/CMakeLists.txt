cmake_minimum_required(VERSION 3.0.0)
project(cyclic_shift VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(r_cycle_shift r_cycle_shift.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
