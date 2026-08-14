#------------------------------------------------------------------------------
# Settings
#------------------------------------------------------------------------------
enable_language(CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#------------------------------------------------------------------------------
# Google Test
#------------------------------------------------------------------------------
include(GoogleTest)
enable_testing()

#------------------------------------------------------------------------------
# Target: c_type_traits_test_obj
# Alias: c_type_traits::c_type_traits_test_obj
# Type: Executable
# Dependencies: GTest::gtest_main,
#               GTest::gmock_main, 
#               c_type_traits::c_type_traits_headers
#------------------------------------------------------------------------------
add_library(c_type_traits_test_obj OBJECT)
add_library(c_type_traits::c_type_traits_test_obj ALIAS c_type_traits_test_obj)

target_sources(c_type_traits_test_obj
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/c_type_traits_test.c"
)

target_include_directories(c_type_traits_test_obj
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_link_libraries(c_type_traits_test_obj
    PRIVATE
        c_type_traits::c_type_traits_headers
)

#------------------------------------------------------------------------------
# Target: c_type_traits_test
# Alias: c_type_traits::c_type_traits_test
# Type: Executable
# Dependencies: GTest::gtest_main,
#               GTest::gmock_main, 
#               c_type_traits::c_type_traits_headers
#               c_type_traits::c_type_traits_test_obj
#------------------------------------------------------------------------------
# Target definition
add_executable(c_type_traits_test)

# Target alias
add_executable(c_type_traits::c_type_traits_test ALIAS c_type_traits_test)

# Target sources
target_sources(c_type_traits_test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/c_type_traits_test.cpp
)

# Target dependencies
target_link_libraries(c_type_traits_test
    PRIVATE
        c_type_traits::c_type_traits_headers
        c_type_traits::c_type_traits_test_obj
        GTest::gtest_main
        GTest::gmock_main
)

# Test discovery
gtest_discover_tests(c_type_traits_test)
