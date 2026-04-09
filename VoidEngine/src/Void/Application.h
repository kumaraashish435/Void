#pragma once
#include "Core.h"

#include "Events/Event.h"

namespace Void
{
    class VOID_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };  

    //tobe defined in client
    Application* CreateApplication();
}