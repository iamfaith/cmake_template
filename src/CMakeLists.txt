

# add_library(func SHARED func.cpp)
add_subdirectory(lib)

add_executable(demo main.cpp)
target_link_libraries(demo func)
target_include_directories(demo PUBLIC ${LIB_HEADER})

