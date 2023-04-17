#include "srspch.h"
#include "ScriptGlue.h"

#include "mono/metadata/object.h"

namespace Sirius {

#define SRS_ADD_INTERNAL_CALL(Name) mono_add_internal_call("Sirius.InternalCalls::" #Name, Name)

	static void NativeLog(MonoString* string, int parameter)
	{
		char* cStr = mono_string_to_utf8(string);
		std::string str(cStr);
		mono_free(cStr);
		std::cout << str << ", " << parameter << std::endl;
	}

	static void NativeLog_Vector(glm::vec3* parameter, glm::vec3* outResult)
	{
		SRS_CORE_WARN("Value: {0}", *parameter);
		*outResult = glm::normalize(*parameter);
	}

	static float NativeLog_VectorDot(glm::vec3* parameter)
	{
		SRS_CORE_WARN("Value: {0}", *parameter);
		return glm::dot(*parameter, *parameter);
	}

	void ScriptGlue::RegisterFunctions()
	{
		SRS_ADD_INTERNAL_CALL(NativeLog);
		SRS_ADD_INTERNAL_CALL(NativeLog_Vector);
		SRS_ADD_INTERNAL_CALL(NativeLog_VectorDot);
	}

}
