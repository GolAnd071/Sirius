#include <Sirius.h>
#include <Sirius/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Sirius {

	class SiriusEditor : public Application
	{
	public:
		SiriusEditor()
			: Application("Sirius Editor")
		{
			PushLayer(new EditorLayer());
		}

		~SiriusEditor()
		{
		}

	};

	Application* CreateApplication()
	{
		return new SiriusEditor();
	}

}