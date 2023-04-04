#include "srspch.h"
#include "Sirius/Renderer/GraphicsContext.h"

#include "Sirius/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Sirius {

	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    SRS_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		SRS_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}