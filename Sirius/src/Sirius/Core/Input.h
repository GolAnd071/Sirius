#pragma once

#include <glm/glm.hpp>

#include "Sirius/Core/KeyCodes.h"
#include "Sirius/Core/MouseCodes.h"

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
