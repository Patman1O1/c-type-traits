#-----------------------------------------------------------------------------------------------------------------------
# Information
#-----------------------------------------------------------------------------------------------------------------------
cmake_minimum_required(VERSION 4.3.0)
project("c_type_traits"
        VERSION 0.1.0
        DESCRIPTION ""
        LANGUAGES C
)

# CMake Information
cmake_file_api(
        QUERY
        API_VERSION 1
        CODEMODEL 2.3
)

#-----------------------------------------------------------------------------------------------------------------------
# Settings
#-----------------------------------------------------------------------------------------------------------------------
if(PROJECT_IS_TOP_LEVEL)
    # C Settings
    set(CMAKE_C_STANDARD 23)
    set(CMAKE_C_STANDARD_REQUIRED ON)
    set(CMAKE_C_EXTENSIONS OFF)
    set(CMAKE_C_VISIBILITY_PRESET hidden)
    set(CMAKE_VISIBILITY_INLINES_HIDDEN ON)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

    # Project Settings
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

    # Project Options
    option(BUILD_TESTS "Build the project's test suite" OFF)

    # Set default build type if not specified
    if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT DEFINED CMAKE_CONFIGURATION_TYPES)
        set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
        set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
    endif()
endif()

#-----------------------------------------------------------------------------------------------------------------------
# Dependencies
#-----------------------------------------------------------------------------------------------------------------------
if(BUILD_TESTS)
    find_package(GTest REQUIRED)
endif()

include(GNUInstallDirs)

#-----------------------------------------------------------------------------------------------------------------------
# Installation
#-----------------------------------------------------------------------------------------------------------------------
if(NOT CMAKE_SKIP_INSTALL_RULES)
    # Install headers
    install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
            TYPE INCLUDE)
endif()

#-----------------------------------------------------------------------------------------------------------------------
# Target: c_type_traits_headers
# Alias: c_type_traits::c_type_traits_headers
# Type: Interface Library
#-----------------------------------------------------------------------------------------------------------------------
# Target definition
add_library(c_type_traits_headers INTERFACE)

# Target alias
add_library(c_type_traits::c_type_traits_headers ALIAS c_type_traits_headers)

# Target headers
target_include_directories(c_type_traits_headers
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

#-----------------------------------------------------------------------------------------------------------------------
# Target: c_type_traits
# Alias: c_type_traits::c_type_traits
# Type: Interface Library
# Dependencies: c_type_traits::c_type_traits_headers
#-----------------------------------------------------------------------------------------------------------------------
# Target definition
add_library(c_type_traits INTERFACE)

# Target alias
add_library(c_type_traits::c_type_traits ALIAS c_type_traits)

# Target dependencies
target_link_libraries(c_type_traits
    INTERFACE
        c_type_traits::c_type_traits_headers
)

# Target properties
set_target_properties(c_type_traits PROPERTIES
        OUTPUT_NAME c_type_traits
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION_MAJOR}
        C_VISIBILITY_PRESET hidden
        VISIBILITY_INLINES_HIDDEN ON
)

if(NOT CMAKE_SKIP_INSTALL_RULES)
    # Install c_type_traits
    install(TARGETS c_type_traits
            RUNTIME COMPONENT c_type_traits
            LIBRARY COMPONENT c_type_traits
            NAMELINK_COMPONENT c_type_traits
            ARCHIVE COMPONENT c_type_traits
            INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
endif()

#-----------------------------------------------------------------------------------------------------------------------
# Subdirectories
#-----------------------------------------------------------------------------------------------------------------------
if(BUILD_TESTS)
    add_subdirectory(tests)
endif()