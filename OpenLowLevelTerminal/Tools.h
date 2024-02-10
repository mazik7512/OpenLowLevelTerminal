#pragma once
#ifdef _WIN32

#include <Windows.h>

#endif


namespace OLLT {
	namespace Tools {
		enum class Platforms {
			Windows = 0
		};

		// main templates
		template <Tools::Platforms platform>
		class CodePage_ final {

		};

		template <Tools::Platforms platform>
		class Coord_ final {

		};

		template <Tools::Platforms platform>
		class Font_ final {

		};

		template <Tools::Platforms platform>
		class Size_ final {

		};

#ifdef _WIN32

		// win specific data
		enum CodePages {
			UTF8 = 65001,
			CP866 = 866,
			CP1251 = 1251,
			CP855 = 855,
		}; // Win codepages


		// Win specs
		template <>
		class CodePage_<Tools::Platforms::Windows> final {
			int cp;

		public:
			CodePage_(int cp_) : cp(cp_) {}
			const int get_cp() const {
				return cp;
			}
		};

		template <>
		class Coord_<Tools::Platforms::Windows> final {
			COORD coords;
		public:
			const COORD get_coords() const {
				return coords;
			}
		};

		template <>
		class Font_<Tools::Platforms::Windows> final {
			CONSOLE_FONT_INFO font;

		public:
			const CONSOLE_FONT_INFO* get_font() {
				return &font;
			}

		};

		template <>
		class Size_<Tools::Platforms::Windows> final {
			COORD size;
		public:
			const COORD get_size() const {
				return size;
			}
		};

		// win usings
		using CodePage = CodePage_<Tools::Platforms::Windows>;
		using Coord = Coord_<Tools::Platforms::Windows>;
		using Font = Font_<Tools::Platforms::Windows>;
		using Size = Size_<Tools::Platforms::Windows>;
#endif

	}


}
