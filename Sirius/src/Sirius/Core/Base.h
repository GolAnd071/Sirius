#pragma once

#include "Sirius/Core/PlatformDetection.h"

#include <memory>

#ifdef SRS_DEBUG
	#if defined(SRS_PLATFORM_WINDOWS)
		#define SRS_DEBUGBREAK() __debugbreak()
	#elif defined(SRS_PLATFORM_LINUX)
		#include <signal.h>
		#define SRS_DEBUGBREAK() raise(SIGTRAP)
	#else
		#error "Platform doesn't support debugbreak yet!"
	#endif
	#define SRS_ENABLE_ASSERTS
#else
	#define SRS_DEBUGBREAK()
#endif

#define SRS_EXPAND_MACRO(x) x
#define SRS_STRINGIFY_MACRO(x) #x

#define BIT(x) (1 << x)

#define SRS_BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }

namespace Sirius {

	template<typename T>
	using Scope = std::unique_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Scope<T> CreateScope(Args&& ... args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template<typename T>
	using Ref = std::shared_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Ref<T> CreateRef(Args&& ... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}

}

#include "Sirius/Core/Log.h"
#include "Sirius/Core/Assert.h"
