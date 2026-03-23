#include <Void/Void.h>

class Sandbox : public Void::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

Void::Application* CreateApplication()
{
    return new Sandbox();
}



