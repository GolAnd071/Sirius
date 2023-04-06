#include "srspch.h"
#include "Sirius/Core/Window.h"

#ifdef SRS_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Sirius
{

	Scope<Window> Window::Create(const WindowProps& props)
	{
	#ifdef SRS_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
	#else
		SRS_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}

}