#pragma once

#include "Platforms.h"

#ifdef _WIN32
#include <wincon.h>
#endif


namespace OLLT {
	namespace Styles {

// main templates
		// foreground colors
		template <OLLT::Platforms platform>
		struct FColors_ final {

		};
		// background colors
		template <OLLT::Platforms platform>
		struct BColors_ final {

		};
		// font styles (bold, underline, reverse ... etc.)
		template <OLLT::Platforms platform>
		struct FStyles_ final {

		};
// Windows spec
#ifdef _WIN32

		// foreground windows spec
		template<> struct FColors_<OLLT::Platforms::Windows> final {
			static constexpr auto Red = FOREGROUND_RED;
			static constexpr auto Blue = FOREGROUND_BLUE;
			static constexpr auto Green = FOREGROUND_GREEN;
			static constexpr auto Intensity = FOREGROUND_INTENSITY;
		};
		
		// background windows spec
		template<> struct BColors_<OLLT::Platforms::Windows> final {
			static constexpr auto Red = BACKGROUND_RED;
			static constexpr auto Blue = BACKGROUND_BLUE;
			static constexpr auto Green = BACKGROUND_GREEN;
			static constexpr auto Intensity = BACKGROUND_INTENSITY;
		};

		// font styles windows spec
		template<> struct FStyles_<OLLT::Platforms::Windows> final {
			static constexpr auto Underline = COMMON_LVB_UNDERSCORE;
			static constexpr auto Reverse_colors = COMMON_LVB_REVERSE_VIDEO;
			static constexpr auto Italic = COMMON_LVB_GRID_LVERTICAL;
			static constexpr auto Normal = COMMON_LVB_GRID_HORIZONTAL;
		};

		// windows usings
		using FColors = FColors_<OLLT::Platforms::Windows>;
		using BColors = BColors_<OLLT::Platforms::Windows>;
		using FStyles = FStyles_<OLLT::Platforms::Windows>;
#endif
	}

}

