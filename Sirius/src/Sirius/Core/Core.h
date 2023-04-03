#pragma once

#include <memory>

#ifdef SRS_PLATFORM_WINDOWS
#if SRS_DYNAMIC_LINK
	#ifdef SRS_BUILD_DLL
		#define SIRIUS_API __declspec(dllexport)
	#else
		#define SIRIUS_API __declspec(dllimport)
	#endif
#else
	#define SIRIUS_API
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

namespace Sirius {

	template<typename T>
	using Scope = std::unique_ptr<T>;

	template<typename T>
	using Ref = std::shared_ptr<T>;

}