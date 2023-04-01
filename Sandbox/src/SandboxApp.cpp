#include <Sirius.h>

#include "imgui/imgui.h"

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

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello World");
		ImGui::End();
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
	}

	~Sandbox()
	{

	}

};

Sirius::Application* Sirius::CreateApplication()
{
	return new Sandbox();
}