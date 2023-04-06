#include "srspch.h"
#include "Sirius/Core/Input.h"

#ifdef SRS_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsInput.h"
#endif

namespace Sirius {

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
	#ifdef SRS_PLATFORM_WINDOWS
		return CreateScope<WindowsInput>();
	#else
		SRS_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}
}