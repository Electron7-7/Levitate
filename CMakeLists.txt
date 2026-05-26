cmake_minimum_required(VERSION 4.0.0 FATAL_ERROR)
project(Levitate VERSION 0.0.0 LANGUAGES CXX)

option(LEVITATE_GENERATE_COMPILE_COMMANDS "Generate a compile_commands.json file, fix it, and export it to the source directory" OFF)

if(MSVC OR "${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    set(CMAKE_DEBUG_POSTFIX "d" CACHE STRING "Append this to the debug executable's name")
endif()

if(MSVC)
    set(CMAKE_CONFIGURATION_TYPES "Debug;Release")
    message(STATUS "Available Configurations: Debug, Release")
else()
    if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        option(NOSTALGIA_USE_ADDRESS_SANITIZER "Use address sanitizer when building Nostalgia and the included testing apps" OFF)
    endif()
    if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build" FORCE)
    endif()
    message(STATUS "Build type is '${CMAKE_BUILD_TYPE}'")
endif()

if(NOT CMAKE_EXPORT_COMPILE_COMMANDS)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ${LEVITATE_GENERATE_COMPILE_COMMANDS})
endif()

if(CMAKE_EXPORT_COMPILE_COMMANDS)
    if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json)
        include(FixCompileCommands.cmake)
        fix_compile_commands()
    else()
        message(STATUS "NOTE:: If you want to fix cmake's \"compile_commands.json\" file (and copy it to the source directory) please re-run the previous cmake command (or press either \"configure\" or \"generate\" if using cmake-gui)")
    endif()
endif()

find_package(PkgConfig)
pkg_check_modules(GTK4 REQUIRED gtk4)

set(LEVITATE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/src/Levitate)

include_directories(${GTK4_INCLUDE_DIRS})
link_directories(${GTK4_LIBRARY_DIRS})
add_definitions(${GTK4_CFLAGS_OTHER})

include(Sources.cmake)

add_executable(Levitate ${LEVITATE_SRCS})
target_link_libraries(Levitate PRIVATE ${GTK4_LIBRARIES})
target_include_directories(Levitate PRIVATE ${LEVITATE_ROOT} ${LEVITATE_ROOT}/thirdparty)
target_compile_definitions(Levitate PUBLIC $<$<CONFIG:Debug>:LEVITATE_DEBUGGING>)
target_compile_options(Levitate
    PUBLIC $<$<CONFIG:Debug>:-Wall -O0>
    PUBLIC $<$<BOOL:${LEVITATE_USE_ADDRESS_SANITIZER}>:-g -fsanitize=address>)

if(MSVC)
    target_compile_features(Levitate PUBLIC cxx_std_23)
    set_property(TARGET Levitate PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else()
    target_compile_features(Levitate PUBLIC cxx_std_26)
endif()
