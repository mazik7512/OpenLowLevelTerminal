#pragma once
#include <string_view>
#include "Tools.h"

#ifdef _WIN32
	#include <Windows.h>
#endif // _WIN32



namespace OLLT {
	
	class LLTerminal final {

	public:

		void write(std::string_view data);
		std::string_view read();

		template <Tools::Platforms platform, class ... Args>
		void format(const Tools::Coord_<platform> &coords, const unsigned int length, Args ... args);


		void set_title(const std::string_view title);

		template <Tools::Platforms platform>
		void set_window_size(const Tools::Size_<platform> &size);

		template <Tools::Platforms platform>
		void set_codepage(const Tools::CodePage_<platform>& cp);

		template <Tools::Platforms platform>
		void set_font(const Tools::Font_<platform> &font);
		

		std::string_view get_title();

		template <Tools::Platforms platform>
		const Tools::Size_<platform>* get_windows_size();

		template <Tools::Platforms platform>
		const Tools::CodePage_<platform>* get_codepage();

		template<Tools::Platforms platform>
		const Tools::Font_<platform>* get_font();

	};

}
