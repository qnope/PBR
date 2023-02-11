add_library(3rdparties INTERFACE)

add_subdirectory(glm)
add_subdirectory(assimp)
add_subdirectory(SDL)

target_include_directories(3rdparties INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(3rdparties INTERFACE glm::glm assimp::assimp SDL2::SDL2 SDL2::SDL2main)

add_library(3rdparties_pch INTERFACE)

target_precompile_headers(3rdparties_pch INTERFACE
    <memory>
    <vector>
    <string>
    <iostream>
    <type_traits>
    <glm/glm.hpp>)
