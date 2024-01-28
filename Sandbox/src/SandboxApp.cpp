#include <Stingray.h>

class Sandbox : public Stingray::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

// entry point, here we create the application for the sandbox and send it back to the engine
Stingray::Application* Stingray::CreateApplication()
{
	return new Sandbox();
}