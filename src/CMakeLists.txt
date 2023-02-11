add_subdirectory(3rdparties)

add_library(PBR STATIC)

target_compile_features(PBR PUBLIC cxx_std_23)

if(${PBR_USE_ASAN})
    message(STATUS "Use ASAN")
    if(MSVC)
        target_compile_options(PBR PUBLIC /fsanitize=address)
    endif()
else()
endif()

target_link_libraries(PBR PUBLIC 3rdparties)
target_include_directories(PBR PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(PBR PRIVATE 3rdparties_pch)

target_precompile_headers(PBR PRIVATE <fstream>)

target_sources(PBR PUBLIC
    PBR/system/Context.h
    PBR/system/Context.cpp

    PBR/system/Window.h
    PBR/system/Window.cpp

    PBR/system/not_copyable.h
)
