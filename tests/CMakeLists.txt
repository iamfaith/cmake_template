include_directories(${CMAKE_SOURCE_DIR}/src)

macro(cpp_add_test name)
    add_executable(test_${name} test_${name}.cpp)
    target_link_libraries(test_${name} PUBLIC func)

    add_test(NAME test_${name} COMMAND ${CMAKE_COMMAND} -DTEST_EXECUTABLE=$<TARGET_FILE:test_${name}> -P ${CMAKE_CURRENT_SOURCE_DIR}/run_test.cmake)

    # add test to a virtual project group
    set_property(TARGET test_${name} PROPERTY FOLDER "tests")
endmacro()

cpp_add_test(case1)
cpp_add_test(case2)

# add_executable(test_case1 test_case1.cpp)
# target_link_libraries(test_case1 func)