cmake_minimum_required(VERSION 3.20)
project(Sandbox)

file(GLOB_RECURSE SANDBOX_SRC
    src/*.cpp
)

add_executable(Sandbox ${SANDBOX_SRC})

target_link_libraries(Sandbox PRIVATE VoidEngine)

# macOS runtime fix
set_target_properties(Sandbox PROPERTIES
    BUILD_RPATH "@loader_path"
)

if(APPLE)
    target_compile_definitions(Sandbox PRIVATE VE_PLATFORM_APPLE)
elseif(WIN32)
    target_compile_definitions(Sandbox PRIVATE VE_PLATFORM_WINDOWS)
endif()