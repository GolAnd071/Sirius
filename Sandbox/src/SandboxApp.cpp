#include <Sirius.h>

class Sandbox : public Sirius::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Sirius::Application* Sirius::CreateApplication()
{
	return new Sandbox();
}