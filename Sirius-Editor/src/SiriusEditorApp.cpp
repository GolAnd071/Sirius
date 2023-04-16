#include <Sirius.h>
#include <Sirius/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Sirius {

	class SiriusEditor : public Application
	{
	public:
		SiriusEditor(const ApplicationSpecification& spec)
			: Application(spec)
		{
			PushLayer(new EditorLayer());
		}

	};

	Application* CreateApplication(ApplicationCommandLineArgs args)
	{
		ApplicationSpecification spec;
		spec.Name = "Sirius-Editor";
		spec.CommandLineArgs = args;

		return new SiriusEditor(spec);
	}

}
