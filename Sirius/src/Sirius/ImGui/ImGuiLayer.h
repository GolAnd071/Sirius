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
		virtual void OnEvent(Event& e) override;

		void Begin();
		void End();

		void BlockEvents(bool block) { m_BlockEvents = block; }

		void SetDarkThemeColors();

		uint32_t GetActiveWidgetID() const;
	private:
		bool m_BlockEvents = true;
	};

}
