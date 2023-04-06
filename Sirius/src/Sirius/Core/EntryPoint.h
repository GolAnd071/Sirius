#pragma once

#include "Sirius/Core/Core.h"

#ifdef SRS_PLATFORM_WINDOWS

extern Sirius::Application* Sirius::CreateApplication();

int main(int argc, char** argv)
{
	Sirius::Log::Init();

	SRS_PROFILE_BEGIN_SESSION("Startup", "SiriusProfile-Startup.json");
	auto app = Sirius::CreateApplication();
	SRS_PROFILE_END_SESSION();

	SRS_PROFILE_BEGIN_SESSION("Runtime", "SiriusProfile-Runtime.json");
	app->Run();
	SRS_PROFILE_END_SESSION();

	SRS_PROFILE_BEGIN_SESSION("Shutdown", "SiriusProfile-Shutdown.json");
	delete app;
	SRS_PROFILE_END_SESSION();
}

#endif