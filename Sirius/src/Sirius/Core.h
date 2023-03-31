#pragma once

#ifdef SRS_PLATFORM_WINDOWS
	#ifdef SRS_BUILD_DLL
		#define SIRIUS_API __declspec(dllexport)
	#else
		#define SIRIUS_API __declspec(dllimport)
	#endif
#else
	#error Sirius only supports Windows!
#endif

#define BIT(x) (1 << x)