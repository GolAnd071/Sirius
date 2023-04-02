#include "srspch.h"
#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Sirius {

	RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;

}