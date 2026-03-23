#pragma once

extern Void::Application* CreateApplication();

int main()
{

    Void::Log::Init();
    VD_INFO("Initialized Log!");
    VD_INFO("Hello! This is Void Engine!");
    VD_WARN("This is a warning!");
    VD_ERROR("This is an error!");
    VD_CRITICAL("This is a critical error!");

    std::cout << "Starting application..." << std::endl;
    auto app = CreateApplication();
    app->Run(); 
    delete app;
}