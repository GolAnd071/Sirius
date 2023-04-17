project "Sirius-Editor"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"%{wks.location}/Sirius/vendor/spdlog/include",
		"%{wks.location}/Sirius/src",
		"%{wks.location}/Sirius/vendor",
		"%{IncludeDir.entt}",
		"%{IncludeDir.filewatch}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGuizmo}"
	}

	links
	{
		"Sirius"
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		defines "SRS_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "SRS_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "SRS_DIST"
		runtime "Release"
		optimize "on"
