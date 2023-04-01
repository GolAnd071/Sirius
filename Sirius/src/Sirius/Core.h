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

#ifdef SRS_DEBUG
	#define SRS_ENABLE_ASSERTS
#endif

#ifdef SRS_ENABLE_ASSERTS
	#define SRS_ASSERT(x, ...) { if(!(x)) { SRS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define SRS_CORE_ASSERT(x, ...) { if(!(x)) { SRS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define SRS_ASSERT(x, ...)
	#define SRS_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define SRS_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)