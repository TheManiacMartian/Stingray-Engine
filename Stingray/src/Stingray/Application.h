#pragma once

#include "Core.h"

namespace Stingray
{
	class STINGRAY_API Application
	{
	public:
		Application();
		virtual ~Application();

		/// <summary>
		/// Run the application.
		/// </summary>
		void Run();
	};
	
	// To be defined in the CLIENT
	Application* CreateApplication();
}


