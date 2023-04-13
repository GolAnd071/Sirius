#include <Sirius.h>
#include <Sirius/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Sirius {

	class SiriusEditor : public Application
	{
	public:
		SiriusEditor(ApplicationCommandLineArgs args)
			: Application("Sirius Editor", args)
		{
			PushLayer(new EditorLayer());
		}

		~SiriusEditor()
		{
		}

	};

	Application* CreateApplication(ApplicationCommandLineArgs args)
	{
		return new SiriusEditor(args);
	}

}
