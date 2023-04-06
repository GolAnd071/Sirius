#pragma once

#include "Sirius.h"

class ExampleLayer : public Sirius::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Sirius::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Sirius::Event& e) override;
private:
	Sirius::ShaderLibrary m_ShaderLibrary;
	Sirius::Ref<Sirius::Shader> m_Shader;
	Sirius::Ref<Sirius::VertexArray> m_VertexArray;

	Sirius::Ref<Sirius::Shader> m_FlatColorShader;
	Sirius::Ref<Sirius::VertexArray> m_SquareVA;

	Sirius::Ref<Sirius::Texture2D> m_Texture, m_GolAnd071LogoTexture;

	Sirius::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};