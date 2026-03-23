#pragma once

extern Void::Application* CreateApplication();

int main()
{
    std::cout << "Starting application..." << std::endl;
    auto app = CreateApplication();
    app->Run(); 
    delete app;
}