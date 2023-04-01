workspace "Sirius"
	architecture "x64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "Sirius/vendor/GLFW/include"
IncludeDir["Glad"] = "Sirius/vendor/Glad/include"
IncludeDir["ImGui"] = "Sirius/vendor/imgui"
IncludeDir["glm"] = "Sirius/vendor/glm"

include "Sirius/vendor/GLFW"
include "Sirius/vendor/Glad"
include "Sirius/vendor/imgui"

project "Sirius"
	location "Sirius"
	kind "SharedLib"
	language "C++"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/${prj.name}")

	pchheader "srspch.h"
	pchsource "Sirius/src/srspch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}"
	}

	links 
	{ 
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		systemversion "latest"

		defines
		{
			"SRS_PLATFORM_WINDOWS",
			"SRS_BUILD_DLL",
			"GLFW_INCLUDE_NONE"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} \"../bin/" .. outputdir .. "/Sandbox\"")
		}

	filter "configurations:Debug"
		defines "SRS_DEBUG"
		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "SRS_RELEASE"
		runtime "Release"
		optimize "On"

	filter "configurations:Dist"
		defines "SRS_DIST"
		runtime "Release"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/${prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Sirius/vendor/spdlog/include",
		"Sirius/src",
		"Sirius/vendor",
		"%{IncludeDir.glm}"
	}

	links
	{
		"Sirius"
	}

	filter "system:windows"
		cppdialect "C++17"
		systemversion "latest"

		defines
		{
			"SRS_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "SRS_DEBUG"
		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "SRS_RELEASE"
		runtime "Release"
		optimize "On"

	filter "configurations:Dist"
		defines "SRS_DIST"
		runtime "Release"
		optimize "On"