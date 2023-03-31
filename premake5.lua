workspace "Sirius"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Sirius"
	location "Sirius"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/${prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"SRS_PLATFORM_WINDOWS",
			"SRS_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "SRS_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "SRS_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "SRS_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

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
		"Sirius/src"
	}

	links
	{
		"Sirius"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"SRS_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "SRS_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "SRS_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "SRS_DIST"
		optimize "On"