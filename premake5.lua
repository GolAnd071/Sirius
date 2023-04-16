include "./vendor/premake/premake_customization/solution_items.lua"
include "Dependencies.lua"

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

group "Dependencies"
	include "vendor/premake"
	include "Sirius/vendor/Box2D"
	include "Sirius/vendor/GLFW"
	include "Sirius/vendor/Glad"
	include "Sirius/vendor/imgui"
	include "Sirius/vendor/yaml-cpp"
group ""

group "Core"
	include "Sirius"
	include "Sirius-ScriptCore"
group ""

group "Tools"
	include "Sirius-Editor"
group ""

group "Misc"
	include "Sandbox"
group ""
