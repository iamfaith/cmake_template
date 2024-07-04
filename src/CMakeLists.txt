

add_library(func SHARED func.cpp)

add_executable(demo main.cpp)
target_link_libraries(demo func)


