cmake_minimum_required(VERSION 2.8.12)
 
project(vgpu LANGUAGES C)
 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

link_directories(${CMAKE_SOURCE_DIR}/lib)
include_directories(include)

find_package(PkgConfig REQUIRED)
pkg_check_modules(KMSDRM REQUIRED libdrm gbm egl)
link_directories(${KMSDRM_LIBRARY_DIRS})
include_directories(${KMSDRM_INCLUDE_DIRS})

add_subdirectory(src)

if(USE_CCACHE)
    find_program(CCACHE_FOUND ccache)
    if(CCACHE_FOUND)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
    endif()
endif()
