cmake_minimum_required(VERSION 3.20)
project(VoidEngine)

file(GLOB_RECURSE ENGINE_SRC
    src/Void/*.cpp
)

add_library(VoidEngine SHARED ${ENGINE_SRC})

target_include_directories(VoidEngine PUBLIC src)

# Export symbols
target_compile_definitions(VoidEngine PRIVATE VOID_BUILD_DLL)

# Platform
if(APPLE)
    target_compile_definitions(VoidEngine PUBLIC VE_PLATFORM_APPLE)
elseif(WIN32)
    target_compile_definitions(VoidEngine PUBLIC VE_PLATFORM_WINDOWS)
endif()