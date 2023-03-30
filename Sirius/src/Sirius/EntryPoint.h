#pragma once

#ifdef SRS_PLATFORM_WINDOWS

extern Sirius::Application* Sirius::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Sirius::CreateApplication();
	app->Run();
	delete app;
}

#endif