cmake_minimum_required(VERSION 3.11)
project(prand
    DESCRIPTION "prand"
    HOMEPAGE_URL "https://github.com/robloach/prand"
    VERSION 0.1.0
    LANGUAGES C
)

# prand
add_library(prand INTERFACE)
target_include_directories(prand INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Options
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    set(PRAND_IS_MAIN TRUE)
else()
    set(PRAND_IS_MAIN FALSE)
endif()

option(PRAND_BUILD_TESTS "prand_test" ${PRAND_IS_MAIN})

if (PRAND_BUILD_TESTS)
    include(CTest)
    enable_testing()
    if (BUILD_TESTING)
        set(CTEST_CUSTOM_TESTS_IGNORE
            pkg-config--static
        )
        # Always print verbose output when tests fail if run using `make test`.
        list(APPEND CMAKE_CTEST_ARGUMENTS "--output-on-failure")
        add_subdirectory(test)
    endif()
endif()
