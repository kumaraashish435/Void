#pragma once

extern Void::Application* CreateApplication();

int main()
{

    Void::Log::Init();
    Void::Log::GetCoreLogger()->warn("Initialized Log!");
    Void::Log::GetClientLogger()->info("Initialized Client Log!");

    std::cout << "Starting application..." << std::endl;
    auto app = CreateApplication();
    app->Run(); 
    delete app;
}