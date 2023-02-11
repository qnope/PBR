cmake_minimum_required(VERSION 3.20)

project(PBR LANGUAGES CXX)

option(PBR_USE_ASAN "PBR is built against ASAN" OFF)

if(MSVC)
    option(PBR_USE_MULTI_THREAD "PBR is built against /MT" OFF)
endif()

if(MSVC AND PBR_USE_MULTI_THREAD)
    message(STATUS "Use Multi Threaded Library")
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

add_subdirectory(src)
add_subdirectory(examples)
