#pragma once

#include "Sirius/Core/PlatformDetection.h"

#ifdef SRS_PLATFORM_WINDOWS
	#ifndef NOMINMAX
		// See github.com/skypjack/entt/wiki/Frequently-Asked-Questions#warning-c4003-the-min-the-max-and-the-macro
		#define NOMINMAX
	#endif
#endif

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <array>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "Sirius/Core/Base.h"

#include "Sirius/Core/Log.h"

#include "Sirius/Debug/Instrumentor.h"

#ifdef SRS_PLATFORM_WINDOWS
	#include <Windows.h>
#endif
