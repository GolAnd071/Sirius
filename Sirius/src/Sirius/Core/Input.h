#pragma once

#include "Sirius/Core/KeyCodes.h"
#include "Sirius/Core/MouseCodes.h"

#include <glm/glm.hpp>

namespace Sirius {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};

}
