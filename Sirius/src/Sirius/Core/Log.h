#pragma once

#include "Sirius/Core/Core.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Sirius {

	class Log
	{
	public:
		static void Init();

		inline static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define SRS_CORE_TRACE(...)		::Sirius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SRS_CORE_INFO(...)		::Sirius::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SRS_CORE_WARN(...)		::Sirius::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SRS_CORE_ERROR(...)		::Sirius::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SRS_CORE_CRITICAL(...)	::Sirius::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define SRS_TRACE(...)			::Sirius::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SRS_INFO(...)			::Sirius::Log::GetClientLogger()->info(__VA_ARGS__)
#define SRS_WARN(...)			::Sirius::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SRS_ERROR(...)			::Sirius::Log::GetClientLogger()->error(__VA_ARGS__)
#define SRS_CRITICAL(...)		::Sirius::Log::GetClientLogger()->critical(__VA_ARGS__)