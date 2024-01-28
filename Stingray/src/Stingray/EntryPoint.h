#pragma once

#ifdef SR_PLATFORM_WINDOWS

extern Stingray::Application* Stingray::CreateApplication();

int main(int argc, char** argv)
{
	// instantiate and run the application (delete at the end)
	auto app = Stingray::CreateApplication();
	app->Run();
	delete app;
}

#endif