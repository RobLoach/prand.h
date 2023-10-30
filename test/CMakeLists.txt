# prand_test
add_executable(prand_test prand_test.c)
target_compile_options(prand_test PRIVATE -Wall -Wextra -Wconversion -Wsign-conversion)
target_link_libraries(prand_test PUBLIC
    prand
)


# C11 Standard
set_property(TARGET prand_test PROPERTY C_STANDARD 90)
set_property(TARGET prand_test PROPERTY C_STANDARD_REQUIRED TRUE)

# Set up the test
list(APPEND CMAKE_CTEST_ARGUMENTS "--output-on-failure")
add_test(NAME prand_test COMMAND prand_test)
