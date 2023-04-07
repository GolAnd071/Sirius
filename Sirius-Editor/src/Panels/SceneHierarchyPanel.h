#pragma once

#include "Sirius/Core/Base.h"
#include "Sirius/Core/Log.h"
#include "Sirius/Scene/Scene.h"
#include "Sirius/Scene/Entity.h"

namespace Sirius {

	class SceneHierarchyPanel
	{
	public:
		SceneHierarchyPanel() = default;
		SceneHierarchyPanel(const Ref<Scene>& scene);

		void SetContext(const Ref<Scene>& scene);

		void OnImGuiRender();
	private:
		void DrawEntityNode(Entity entity);
	private:
		Ref<Scene> m_Context;
		Entity m_SelectionContext;
	};

}
