#pragma once

#include "Sirius/Core/Base.h"
#include "Sirius/Core/KeyCodes.h"
#include "Sirius/Core/MouseCodes.h"

namespace Sirius {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static std::pair<float, float> GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};

}