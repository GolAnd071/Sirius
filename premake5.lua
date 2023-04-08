include "./vendor/premake/premake_customization/solution_items.lua"

workspace "Sirius"
	architecture "x86_64"
	startproject "Sirius-Editor"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "%{wks.location}/%{wks.location}/Sirius/vendor/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/Sirius/vendor/Glad/include"
IncludeDir["ImGui"] = "%{wks.location}/Sirius/vendor/imgui"
IncludeDir["glm"] = "%{wks.location}/Sirius/vendor/glm"
IncludeDir["stb_image"] = "%{wks.location}/Sirius/vendor/stb_image"
IncludeDir["entt"] = "%{wks.location}/Sirius/vendor/entt/include"
IncludeDir["yaml_cpp"] = "%{wks.location}/Sirius/vendor/yaml-cpp/include"
IncludeDir["ImGuizmo"] = "%{wks.location}/Sirius/vendor/ImGuizmo"

group "Dependencies"
	include "vendor/premake"
	include "Sirius/vendor/GLFW"
	include "Sirius/vendor/Glad"
	include "Sirius/vendor/imgui"
	include "Sirius/vendor/yaml-cpp"
group ""

include "Sirius"
include "Sandbox"
include "Sirius-Editor"
