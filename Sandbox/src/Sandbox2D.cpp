#include "Sandbox2D.h"
#include <imgui/imgui.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

Sandbox2D::Sandbox2D()
	: Layer("Sandbox2D"), m_CameraController(1280.0f / 720.0f)
{
}

void Sandbox2D::OnAttach()
{
	SRS_PROFILE_FUNCTION();

	m_CheckerboardTexture = Sirius::Texture2D::Create("assets/textures/Checkerboard.png");
}

void Sandbox2D::OnDetach()
{
	SRS_PROFILE_FUNCTION();
}

void Sandbox2D::OnUpdate(Sirius::Timestep ts)
{
	SRS_PROFILE_FUNCTION();

	// Update
	m_CameraController.OnUpdate(ts);

	// Render
	{
		SRS_PROFILE_SCOPE("Renderer Prep");
		Sirius::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
		Sirius::RenderCommand::Clear();
	}

	{
		SRS_PROFILE_SCOPE("Renderer Draw");
		Sirius::Renderer2D::BeginScene(m_CameraController.GetCamera());
		Sirius::Renderer2D::DrawQuad({ -1.0f, 0.0f }, { 0.8f, 0.8f }, { 0.8f, 0.2f, 0.3f, 1.0f });
		Sirius::Renderer2D::DrawQuad({ 0.5f, -0.5f }, { 0.5f, 0.75f }, { 0.2f, 0.3f, 0.8f, 1.0f });
		Sirius::Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 10.0f, 10.0f }, m_CheckerboardTexture);
		Sirius::Renderer2D::EndScene();
	}
}

void Sandbox2D::OnImGuiRender()
{
	SRS_PROFILE_FUNCTION();

	ImGui::Begin("Settings");
	ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));
	ImGui::End();
}

void Sandbox2D::OnEvent(Sirius::Event& e)
{
	m_CameraController.OnEvent(e);
}