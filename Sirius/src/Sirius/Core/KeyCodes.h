#pragma once

namespace Sirius
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space				= 32,
		Apostrophe			= 39, /* ' */
		Comma				= 44, /* , */
		Minus				= 45, /* - */
		Period				= 46, /* . */
		Slash				= 47, /* / */

		D0					= 48, /* 0 */
		D1					= 49, /* 1 */
		D2					= 50, /* 2 */
		D3					= 51, /* 3 */
		D4					= 52, /* 4 */
		D5					= 53, /* 5 */
		D6					= 54, /* 6 */
		D7					= 55, /* 7 */
		D8					= 56, /* 8 */
		D9					= 57, /* 9 */

		Semicolon			= 59, /* ; */
		Equal				= 61, /* = */

		A					= 65,
		B					= 66,
		C					= 67,
		D					= 68,
		E					= 69,
		F					= 70,
		G					= 71,
		H					= 72,
		I					= 73,
		J					= 74,
		K					= 75,
		L					= 76,
		M					= 77,
		N					= 78,
		O					= 79,
		P					= 80,
		Q					= 81,
		R					= 82,
		S					= 83,
		T					= 84,
		U					= 85,
		V					= 86,
		W					= 87,
		X					= 88,
		Y					= 89,
		Z					= 90,

		LeftBracket			= 91,  /* [ */
		Backslash			= 92,  /* \ */
		RightBracket		= 93,  /* ] */
		GraveAccent			= 96,  /* ` */

		World1				= 161, /* non-US #1 */
		World2				= 162, /* non-US #2 */

		/* Function keys */
		Escape				= 256,
		Enter				= 257,
		Tab					= 258,
		Backspace			= 259,
		Insert				= 260,
		Delete				= 261,
		Right				= 262,
		Left				= 263,
		Down				= 264,
		Up					= 265,
		PageUp				= 266,
		PageDown			= 267,
		Home				= 268,
		End					= 269,
		CapsLock			= 280,
		ScrollLock			= 281,
		NumLock				= 282,
		PrintScreen			= 283,
		Pause = 284,
		F1					= 290,
		F2					= 291,
		F3					= 292,
		F4					= 293,
		F5					= 294,
		F6					= 295,
		F7					= 296,
		F8					= 297,
		F9					= 298,
		F10					= 299,
		F11					= 300,
		F12					= 301,
		F13					= 302,
		F14					= 303,
		F15					= 304,
		F16					= 305,
		F17					= 306,
		F18					= 307,
		F19					= 308,
		F20					= 309,
		F21					= 310,
		F22					= 311,
		F23					= 312,
		F24					= 313,
		F25					= 314,

		/* Keypad */
		KP0					= 320,
		KP1					= 321,
		KP2					= 322,
		KP3					= 323,
		KP4					= 324,
		KP5					= 325,
		KP6					= 326,
		KP7					= 327,
		KP8					= 328,
		KP9					= 329,
		KPDecimal			= 330,
		KPDivide			= 331,
		KPMultiply			= 332,
		KPSubtract			= 333,
		KPAdd				= 334,
		KPEnter				= 335,
		KPEqual				= 336,

		LeftShift			= 340,
		LeftControl			= 341,
		LeftAlt				= 342,
		LeftSuper			= 343,
		RightShift			= 344,
		RightControl		= 345,
		RightAlt			= 346,
		RightSuper			= 347,
		Menu				= 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define SRS_KEY_SPACE			::Sirius::Key::Space
#define SRS_KEY_APOSTROPHE		::Sirius::Key::Apostrophe	/* ' */
#define SRS_KEY_COMMA			::Sirius::Key::Comma        /* , */
#define SRS_KEY_MINUS			::Sirius::Key::Minus        /* - */
#define SRS_KEY_PERIOD			::Sirius::Key::Period       /* . */
#define SRS_KEY_SLASH			::Sirius::Key::Slash        /* / */
#define SRS_KEY_0				::Sirius::Key::D0
#define SRS_KEY_1				::Sirius::Key::D1
#define SRS_KEY_2				::Sirius::Key::D2
#define SRS_KEY_3				::Sirius::Key::D3
#define SRS_KEY_4				::Sirius::Key::D4
#define SRS_KEY_5				::Sirius::Key::D5
#define SRS_KEY_6				::Sirius::Key::D6
#define SRS_KEY_7				::Sirius::Key::D7
#define SRS_KEY_8				::Sirius::Key::D8
#define SRS_KEY_9				::Sirius::Key::D9
#define SRS_KEY_SEMICOLON		::Sirius::Key::Semicolon    /* ; */
#define SRS_KEY_EQUAL			::Sirius::Key::Equal        /* = */
#define SRS_KEY_A				::Sirius::Key::A
#define SRS_KEY_B				::Sirius::Key::B
#define SRS_KEY_C				::Sirius::Key::C
#define SRS_KEY_D				::Sirius::Key::D
#define SRS_KEY_E				::Sirius::Key::E
#define SRS_KEY_F				::Sirius::Key::F
#define SRS_KEY_G				::Sirius::Key::G
#define SRS_KEY_H				::Sirius::Key::H
#define SRS_KEY_I				::Sirius::Key::I
#define SRS_KEY_J				::Sirius::Key::J
#define SRS_KEY_K				::Sirius::Key::K
#define SRS_KEY_L				::Sirius::Key::L
#define SRS_KEY_M				::Sirius::Key::M
#define SRS_KEY_N				::Sirius::Key::N
#define SRS_KEY_O				::Sirius::Key::O
#define SRS_KEY_P				::Sirius::Key::P
#define SRS_KEY_Q				::Sirius::Key::Q
#define SRS_KEY_R				::Sirius::Key::R
#define SRS_KEY_S				::Sirius::Key::S
#define SRS_KEY_T				::Sirius::Key::T
#define SRS_KEY_U				::Sirius::Key::U
#define SRS_KEY_V				::Sirius::Key::V
#define SRS_KEY_W				::Sirius::Key::W
#define SRS_KEY_X				::Sirius::Key::X
#define SRS_KEY_Y				::Sirius::Key::Y
#define SRS_KEY_Z				::Sirius::Key::Z
#define SRS_KEY_LEFT_BRACKET	::Sirius::Key::LeftBracket	/* [ */
#define SRS_KEY_BACKSLASH		::Sirius::Key::Backslash    /* \ */
#define SRS_KEY_RIGHT_BRACKET	::Sirius::Key::RightBracket /* ] */
#define SRS_KEY_GRAVE_ACCENT	::Sirius::Key::GraveAccent  /* ` */
#define SRS_KEY_WORLD_1			::Sirius::Key::World1       /* non-US #1 */
#define SRS_KEY_WORLD_2			::Sirius::Key::World2       /* non-US #2 */

/* Function keys */
#define SRS_KEY_ESCAPE          ::Sirius::Key::Escape
#define SRS_KEY_ENTER           ::Sirius::Key::Enter
#define SRS_KEY_TAB             ::Sirius::Key::Tab
#define SRS_KEY_BACKSPACE       ::Sirius::Key::Backspace
#define SRS_KEY_INSERT          ::Sirius::Key::Insert
#define SRS_KEY_DELETE          ::Sirius::Key::Delete
#define SRS_KEY_RIGHT           ::Sirius::Key::Right
#define SRS_KEY_LEFT            ::Sirius::Key::Left
#define SRS_KEY_DOWN            ::Sirius::Key::Down
#define SRS_KEY_UP              ::Sirius::Key::Up
#define SRS_KEY_PAGE_UP         ::Sirius::Key::PageUp
#define SRS_KEY_PAGE_DOWN       ::Sirius::Key::PageDown
#define SRS_KEY_HOME            ::Sirius::Key::Home
#define SRS_KEY_END             ::Sirius::Key::End
#define SRS_KEY_CAPS_LOCK       ::Sirius::Key::CapsLock
#define SRS_KEY_SCROLL_LOCK     ::Sirius::Key::ScrollLock
#define SRS_KEY_NUM_LOCK        ::Sirius::Key::NumLock
#define SRS_KEY_PRINT_SCREEN    ::Sirius::Key::PrintScreen
#define SRS_KEY_PAUSE           ::Sirius::Key::Pause
#define SRS_KEY_F1              ::Sirius::Key::F1
#define SRS_KEY_F2              ::Sirius::Key::F2
#define SRS_KEY_F3              ::Sirius::Key::F3
#define SRS_KEY_F4              ::Sirius::Key::F4
#define SRS_KEY_F5              ::Sirius::Key::F5
#define SRS_KEY_F6              ::Sirius::Key::F6
#define SRS_KEY_F7              ::Sirius::Key::F7
#define SRS_KEY_F8              ::Sirius::Key::F8
#define SRS_KEY_F9              ::Sirius::Key::F9
#define SRS_KEY_F10             ::Sirius::Key::F10
#define SRS_KEY_F11             ::Sirius::Key::F11
#define SRS_KEY_F12             ::Sirius::Key::F12
#define SRS_KEY_F13             ::Sirius::Key::F13
#define SRS_KEY_F14             ::Sirius::Key::F14
#define SRS_KEY_F15             ::Sirius::Key::F15
#define SRS_KEY_F16             ::Sirius::Key::F16
#define SRS_KEY_F17             ::Sirius::Key::F17
#define SRS_KEY_F18             ::Sirius::Key::F18
#define SRS_KEY_F19             ::Sirius::Key::F19
#define SRS_KEY_F20             ::Sirius::Key::F20
#define SRS_KEY_F21             ::Sirius::Key::F21
#define SRS_KEY_F22             ::Sirius::Key::F22
#define SRS_KEY_F23             ::Sirius::Key::F23
#define SRS_KEY_F24             ::Sirius::Key::F24
#define SRS_KEY_F25             ::Sirius::Key::F25

/* Keypad */
#define SRS_KEY_KP_0            ::Sirius::Key::KP0
#define SRS_KEY_KP_1            ::Sirius::Key::KP1
#define SRS_KEY_KP_2            ::Sirius::Key::KP2
#define SRS_KEY_KP_3            ::Sirius::Key::KP3
#define SRS_KEY_KP_4            ::Sirius::Key::KP4
#define SRS_KEY_KP_5            ::Sirius::Key::KP5
#define SRS_KEY_KP_6            ::Sirius::Key::KP6
#define SRS_KEY_KP_7            ::Sirius::Key::KP7
#define SRS_KEY_KP_8            ::Sirius::Key::KP8
#define SRS_KEY_KP_9            ::Sirius::Key::KP9
#define SRS_KEY_KP_DECIMAL      ::Sirius::Key::KPDecimal
#define SRS_KEY_KP_DIVIDE       ::Sirius::Key::KPDivide
#define SRS_KEY_KP_MULTIPLY     ::Sirius::Key::KPMultiply
#define SRS_KEY_KP_SUBTRACT     ::Sirius::Key::KPSubtract
#define SRS_KEY_KP_ADD          ::Sirius::Key::KPAdd
#define SRS_KEY_KP_ENTER        ::Sirius::Key::KPEnter
#define SRS_KEY_KP_EQUAL        ::Sirius::Key::KPEqual

#define SRS_KEY_LEFT_SHIFT      ::Sirius::Key::LeftShift
#define SRS_KEY_LEFT_CONTROL    ::Sirius::Key::LeftControl
#define SRS_KEY_LEFT_ALT        ::Sirius::Key::LeftAlt
#define SRS_KEY_LEFT_SUPER      ::Sirius::Key::LeftSuper
#define SRS_KEY_RIGHT_SHIFT     ::Sirius::Key::RightShift
#define SRS_KEY_RIGHT_CONTROL   ::Sirius::Key::RightControl
#define SRS_KEY_RIGHT_ALT       ::Sirius::Key::RightAlt
#define SRS_KEY_RIGHT_SUPER     ::Sirius::Key::RightSuper
#define SRS_KEY_MENU            ::Sirius::Key::Menu