#pragma once

#include "Core.h"

#include "Window.h"
#include "Sirius/LayerStack.h"
#include "Sirius/Events/Event.h"
#include "Sirius/Events/ApplicationEvent.h"

namespace Sirius {

	class SIRIUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}