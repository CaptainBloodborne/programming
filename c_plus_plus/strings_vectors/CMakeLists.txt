cmake_minimum_required(VERSION 3.0.0)
project(string_vectors_hw VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_compile_options(-Wtautological-overlap-compare -Wtautological-overlap-compare)

add_executable(password_check password_check.cpp)
add_executable(soundex soundex.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
