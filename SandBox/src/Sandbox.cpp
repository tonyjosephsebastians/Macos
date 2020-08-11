
#include <Macos.h>

class Sandbox : public MACOS::Application
{

public:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

MACOS::Application* MACOS::CreateApplication()
{
     return new Sandbox();
}
