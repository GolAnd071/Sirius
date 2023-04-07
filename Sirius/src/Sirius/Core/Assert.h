#pragma once

#include "Sirius/Core/Base.h"
#include "Sirius/Core/Log.h"
#include <filesystem>

#ifdef SRS_ENABLE_ASSERTS

	// Alteratively we could use the same "default" message for both "WITH_MSG" and "NO_MSG" and
	// provide support for custom formatting by concatenating the formatting string instead of having the format inside the default message
	#define SRS_INTERNAL_ASSERT_IMPL(type, check, msg, ...) { if(!(check)) { SRS##type##ERROR(msg, __VA_ARGS__); SRS_DEBUGBREAK(); } }
	#define SRS_INTERNAL_ASSERT_WITH_MSG(type, check, ...) SRS_INTERNAL_ASSERT_IMPL(type, check, "Assertion failed: {0}", __VA_ARGS__)
	#define SRS_INTERNAL_ASSERT_NO_MSG(type, check) SRS_INTERNAL_ASSERT_IMPL(type, check, "Assertion '{0}' failed at {1}:{2}", SRS_STRINGIFY_MACRO(check), std::filesystem::path(__FILE__).filename().string(), __LINE__)

	#define SRS_INTERNAL_ASSERT_GET_MACRO_NAME(arg1, arg2, macro, ...) macro
	#define SRS_INTERNAL_ASSERT_GET_MACRO(...) SRS_EXPAND_MACRO( SRS_INTERNAL_ASSERT_GET_MACRO_NAME(__VA_ARGS__, SRS_INTERNAL_ASSERT_WITH_MSG, SRS_INTERNAL_ASSERT_NO_MSG) )

	// Currently accepts at least the condition and one additional parameter (the message) being optional
	#define SRS_ASSERT(...) SRS_EXPAND_MACRO( SRS_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_, __VA_ARGS__) )
	#define SRS_CORE_ASSERT(...) SRS_EXPAND_MACRO( SRS_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_CORE_, __VA_ARGS__) )
#else
	#define SRS_ASSERT(...)
	#define SRS_CORE_ASSERT(...)
#endif
