#pragma once

#include "Sirius/Core/Layer.h"

#include "Sirius/Events/ApplicationEvent.h"
#include "Sirius/Events/KeyEvent.h"
#include "Sirius/Events/MouseEvent.h"

namespace Sirius {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}