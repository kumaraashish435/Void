workspace "Void"
    architecture "arm64"
    configurations { "Debug", "Release" }
    startproject "Sandbox"

outputdir = "%{cfg.buildcfg}"

-- =========================
-- VoidEngine (DLL)
-- =========================
project "VoidEngine"
    location "build-premake/VoidEngine"
    kind "SharedLib"
    language "C++"
    cppdialect "C++17"

    targetdir ("bin/" .. outputdir)
    objdir ("bin-int/" .. outputdir)

    files {
        "VoidEngine/src/**.h",
        "VoidEngine/src/**.cpp"
    }

    includedirs {
        "VoidEngine/src",
        "VoidEngine/vendor/spdlog/include"
    }

    -- 🔥 Use header-only spdlog
    defines {
        "SPDLOG_HEADER_ONLY",
        "VOID_BUILD_DLL"
    }

    filter "system:macosx"
        systemversion "26.3" 
        defines { "VE_PLATFORM_APPLE" }

    filter "configurations:Debug"
        symbols "On"
        runtime "Debug"

    filter "configurations:Release"
        optimize "On"
        runtime "Release"


-- =========================
-- Sandbox (App)
-- =========================

project "Sandbox"
    location "build-premake/Sandbox"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"

    targetdir ("bin/" .. outputdir)
    objdir ("bin-int/" .. outputdir)

    files {
        "Sandbox/src/**.h",
        "Sandbox/src/**.cpp"
    }

    includedirs {
        "VoidEngine/src",
        "VoidEngine/vendor/spdlog/include"   -- 🔥 FIX
    }

    links {
        "VoidEngine"
    }

    linkoptions {
        "-Wl,-rpath,@loader_path"
    }

    filter "system:macosx"
        systemversion "14.0"
        defines { "VE_PLATFORM_APPLE" }