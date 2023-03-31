#include "Application.h"

#include "Sirius/Events/ApplicationEvent.h"
#include "Sirius/Log.h"

namespace Sirius {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			SRS_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			SRS_TRACE(e);
		}

		while (true);
	}

}