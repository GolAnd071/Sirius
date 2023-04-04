#pragma once

#include "Sirius/Core/Core.h"

#ifdef SRS_PLATFORM_WINDOWS

extern Sirius::Application* Sirius::CreateApplication();

int main(int argc, char** argv)
{
	Sirius::Log::Init();
	SRS_CORE_WARN("Initialized Log!");
	int a = 5;
	SRS_INFO("Hello! Var={0}", a);

	auto app = Sirius::CreateApplication();
	app->Run();
	delete app;
}

#endif