#pragma once

#include "Sirius/Core/Buffer.h"

namespace Sirius {

	class FileSystem
	{
	public:
		// TODO: move to FileSystem class
		static Buffer ReadFileBinary(const std::filesystem::path& filepath);
	};

}
