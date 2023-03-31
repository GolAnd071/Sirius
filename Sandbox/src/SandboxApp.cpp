#include <Sirius.h>

class ExampleLayer : public Sirius::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		SRS_INFO("ExampleLayer::Update");
	}

	void OnEvent(Sirius::Event& event) override
	{
		SRS_TRACE("{0}", event);
	}

};

class Sandbox : public Sirius::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

Sirius::Application* Sirius::CreateApplication()
{
	return new Sandbox();
}