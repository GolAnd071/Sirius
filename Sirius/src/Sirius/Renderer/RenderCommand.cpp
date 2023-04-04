#include "srspch.h"
#include "Sirius/Renderer/RenderCommand.h"

namespace Sirius {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}