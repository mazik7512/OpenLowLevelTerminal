#pragma once


namespace OLLT {
	enum class Styles {
		Reset = 0,
		Bold = 1,
		Underline = 4,
		Inverse = 7
	};

	// normal foreground colors
	enum class nFGColors {
		Black = 30,
		Red = 31,
		Green = 32,
		Yellow = 33,
		Blue = 34,
		Magenta = 35,
		Cyan = 36,
		White = 37
	};

	// strong foreground colors
	enum class sFGColors {
		Black = 90,
		Red = 91,
		Green = 92,
		Yellow = 93,
		Blue = 94,
		Magenta = 95,
		Cyan = 96,
		White = 97
	};

	// normal background colors
	enum class nBGColors {
		Black = 40,
		Red = 41,
		Green = 42,
		Yellow = 43,
		Blue = 44,
		Magenta = 45,
		Cyan = 46,
		White = 47
	};

	// strong background colors
	enum class sBGColors {
		Black = 100,
		Red = 101,
		Green = 102,
		Yellow = 103,
		Blue = 104,
		Magenta = 105,
		Cyan = 106,
		White = 107
	};

}

