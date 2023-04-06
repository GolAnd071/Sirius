#pragma once

namespace Sirius
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0					= 0,
		Button1					= 1,
		Button2					= 2,
		Button3					= 3,
		Button4					= 4,
		Button5					= 5,
		Button6					= 6,
		Button7					= 7,

		ButtonLast				= Button7,
		ButtonLeft				= Button0,
		ButtonRight				= Button1,
		ButtonMiddle			= Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define SRS_MOUSE_BUTTON_0		::Sirius::Mouse::Button0
#define SRS_MOUSE_BUTTON_1      ::Sirius::Mouse::Button1
#define SRS_MOUSE_BUTTON_2      ::Sirius::Mouse::Button2
#define SRS_MOUSE_BUTTON_3      ::Sirius::Mouse::Button3
#define SRS_MOUSE_BUTTON_4      ::Sirius::Mouse::Button4
#define SRS_MOUSE_BUTTON_5      ::Sirius::Mouse::Button5
#define SRS_MOUSE_BUTTON_6      ::Sirius::Mouse::Button6
#define SRS_MOUSE_BUTTON_7      ::Sirius::Mouse::Button7
#define SRS_MOUSE_BUTTON_LAST   ::Sirius::Mouse::ButtonLast
#define SRS_MOUSE_BUTTON_LEFT   ::Sirius::Mouse::ButtonLeft
#define SRS_MOUSE_BUTTON_RIGHT  ::Sirius::Mouse::ButtonRight
#define SRS_MOUSE_BUTTON_MIDDLE ::Sirius::Mouse::ButtonMiddle