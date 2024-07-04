cmake_minimum_required(VERSION 3.0.0)
project(demo VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
