#pragma once

#ifdef VE_PLATFORM_WINDOWS

    #ifdef VE_BUILD_DLL
        #define VOID_API __declspec(dllexport)
    #else
        #define VOID_API __declspec(dllimport)
    #endif

#elif defined(VE_PLATFORM_APPLE)

    // __attribute__((visibility("default"))) not required for premake
    #define VOID_API 

#else

    #error Platform not supported

#endif