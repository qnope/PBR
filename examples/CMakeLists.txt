add_executable(SimpleSphere main.cpp)
target_link_libraries(SimpleSphere PRIVATE PBR)
target_precompile_headers(SimpleSphere REUSE_FROM PBR)

