#include "Application.h"
#include <iostream>

#include "Events/ApplicationEvent.h"
#include "Void/Log.h"

namespace Void
{
    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        WindowResizeEvent e(1280, 720);
        VD_CORE_INFO(e.ToString());
        while (true);
    }
}