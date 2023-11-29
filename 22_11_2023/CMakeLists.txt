cmake_minimum_required(VERSION 3.0.0)
project(dump VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(dump dump.cpp)
add_executable(binary_dump BinaryDump.cpp)
add_executable(hexa_dump HexadecimalDump.cpp)
add_executable(octal_dump OctalDump.cpp)
add_executable(problem7_08 problem7_08.cpp)
add_executable(problem7_09 problem7_09.cpp)
add_executable(problem7_10 problem7_10.cpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
