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
		if (Sirius::Input::IsKeyPressed(SRS_KEY_TAB))
			SRS_TRACE("Tab key is pressed (poll)!");
	}

	void OnEvent(Sirius::Event& event) override
	{
		if (event.GetEventType() == Sirius::EventType::KeyPressed)
		{
			Sirius::KeyPressedEvent& e = (Sirius::KeyPressedEvent&)event;
			if (e.GetKeyCode() == SRS_KEY_TAB)
				SRS_TRACE("Tab key is pressed (event)!");
			SRS_TRACE("{0}", (char)e.GetKeyCode());
		}
	}

};

class Sandbox : public Sirius::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Sirius::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Sirius::Application* Sirius::CreateApplication()
{
	return new Sandbox();
}