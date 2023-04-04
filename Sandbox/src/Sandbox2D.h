#pragma once

#include "Sirius.h"

class Sandbox2D : public Sirius::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Sirius::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Sirius::Event& e) override;
private:
	Sirius::OrthographicCameraController m_CameraController;

	// Temp
	Sirius::Ref<Sirius::VertexArray> m_SquareVA;
	Sirius::Ref<Sirius::Shader> m_FlatColorShader;

	Sirius::Ref<Sirius::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};