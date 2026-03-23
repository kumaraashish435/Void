#pragma once
#include "Core.h"


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