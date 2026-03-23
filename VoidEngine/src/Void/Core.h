#pragma once

#ifdef VE_PLATFORM_WINDOWS

    #ifdef VE_BUILD_DLL
        #define VOID_API __declspec(dllexport)
    #else
        #define VOID_API __declspec(dllimport)
    #endif

#elif defined(VE_PLATFORM_APPLE)

    #define VOID_API __attribute__((visibility("default")))

#else

    #error Platform not supported

#endif