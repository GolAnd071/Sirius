#include "srspch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace Sirius {

	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		SRS_CORE_ASSERT(windowHandle, "Window handle is null!")
	}

	void OpenGLContext::Init()
	{
		SRS_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		SRS_CORE_ASSERT(status, "Failed to initialize Glad!");

		SRS_CORE_INFO("OpenGL Info:");
		SRS_CORE_INFO("  Vendor: {0}", (char*)glGetString(GL_VENDOR));
		SRS_CORE_INFO("  Renderer: {0}", (char*)glGetString(GL_RENDERER));
		SRS_CORE_INFO("  Version: {0}", (char*)glGetString(GL_VERSION));

		SRS_CORE_ASSERT(GLVersion.major > 4 || (GLVersion.major == 4 && GLVersion.minor >= 5), "Sirius requires at least OpenGL version 4.5!");
	}

	void OpenGLContext::SwapBuffers()
	{
		SRS_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}
