#include <Sirius.h>
#include <Sirius/Core/EntryPoint.h>

#include "Sandbox2D.h"

#include "ExampleLayer.h"

class Sandbox : public Sirius::Application
{
public:
	Sandbox()
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}

};

Sirius::Application* Sirius::CreateApplication()
{
	return new Sandbox();
}