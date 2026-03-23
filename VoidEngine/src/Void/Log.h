#pragma once
#include "Core.h"
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>

namespace Void {

    class VOID_API Log
    {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;  
    };

}

#define VD_CORE_TRACE(...) ::Void::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VD_CORE_INFO(...) ::Void::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VD_CORE_WARN(...) ::Void::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VD_CORE_ERROR(...) ::Void::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VD_CORE_CRITICAL(...) ::Void::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define VD_TRACE(...) ::Void::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VD_INFO(...) ::Void::Log::GetClientLogger()->info(__VA_ARGS__)
#define VD_WARN(...) ::Void::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VD_ERROR(...) ::Void::Log::GetClientLogger()->error(__VA_ARGS__)
#define VD_CRITICAL(...) ::Void::Log::GetClientLogger()->critical(__VA_ARGS__)