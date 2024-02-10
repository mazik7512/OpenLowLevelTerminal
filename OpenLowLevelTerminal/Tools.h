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
		struct Coord_ final {

		};

		template <Tools::Platforms platform>
		struct Font_ final {

		};

		template <Tools::Platforms platform>
		struct Size_ final {

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
		struct Coord_<Tools::Platforms::Windows> final {
			int x, y;
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
		struct Size_<Tools::Platforms::Windows> final {
			int width, height;
		};

		// win usings
		using CodePage = CodePage_<Tools::Platforms::Windows>;
		using Coord = Coord_<Tools::Platforms::Windows>;
		using Font = Font_<Tools::Platforms::Windows>;
		using Size = Size_<Tools::Platforms::Windows>;
#endif

	}


}
