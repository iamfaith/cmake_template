cmake_minimum_required(VERSION 3.0.0)
project(demo 
        VERSION 0.1.0
        DESCRIPTION "cmake template"
        HOMEPAGE_URL "https://github.com/iamfaith/cmake_template"
        LANGUAGES C CXX
        )

set(CMAKE_CXX_STANDARD 11)
set(LIB_HEADER ${CMAKE_SOURCE_DIR}/src/lib)

add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
