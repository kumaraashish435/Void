cmake_minimum_required(VERSION 3.20)
project(VoidEngine)

file(GLOB_RECURSE ENGINE_SRC
    src/Void/*.cpp
    Events/*.cpp
)

add_library(VoidEngine SHARED ${ENGINE_SRC})

add_subdirectory(vendor/spdlog)

target_include_directories(VoidEngine PUBLIC src)
target_link_libraries(VoidEngine PUBLIC spdlog)

# Export symbols
target_compile_definitions(VoidEngine PRIVATE VOID_BUILD_DLL)

# Platform
if(APPLE)
    target_compile_definitions(VoidEngine PUBLIC VE_PLATFORM_APPLE)
elseif(WIN32)
    target_compile_definitions(VoidEngine PUBLIC VE_PLATFORM_WINDOWS)
endif()