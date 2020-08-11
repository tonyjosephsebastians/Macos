#pragma once
#include "Core.h"
namespace MACOS
{
	class MACOS_API Application
	{
	public:
		Application();
	virtual ~Application();

	void Run();

	};

	Application* CreateApplication();
}

