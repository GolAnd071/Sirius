#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Sirius {

	class SIRIUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define SRS_CORE_TRACE(...)		::Sirius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SRS_CORE_INFO(...)		::Sirius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SRS_CORE_WARN(...)		::Sirius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SRS_CORE_ERROR(...)		::Sirius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SRS_CORE_FATAL(...)		::Sirius::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client log macros
#define SRS_TRACE(...)			::Sirius::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SRS_INFO(...)			::Sirius::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SRS_WARN(...)			::Sirius::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SRS_ERROR(...)			::Sirius::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SRS_FATAL(...)			::Sirius::Log::GetClientLogger()->trace(__VA_ARGS__)