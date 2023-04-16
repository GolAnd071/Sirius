#include <Sirius.h>
#include <Sirius/Core/EntryPoint.h>

#include "Sandbox2D.h"

#include "ExampleLayer.h"

class Sandbox : public Sirius::Application
{
public:
	Sandbox(const Sirius::ApplicationSpecification& specification)
		: Sirius::Application(specification)
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}

};

Sirius::Application* Sirius::CreateApplication(Sirius::ApplicationCommandLineArgs args)
{
	ApplicationSpecification spec;
	spec.Name = "Sandbox";
	spec.WorkingDirectory = "../Sirius-Editor";
	spec.CommandLineArgs = args;

	return new Sandbox(spec);
}
