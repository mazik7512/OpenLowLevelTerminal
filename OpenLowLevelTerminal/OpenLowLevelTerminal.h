#pragma once
#include <string_view>
#include "Tools.h"

#ifdef _WIN32
	#include <Windows.h>
#endif // _WIN32



namespace OLLT {
	
	template<Tools::Platforms platform>
	class LLTerminal final {

	public:

		void write(std::string_view data);
		std::string_view read();

		template <class ... Args>
		void format(const Tools::Coord_<platform> &coords, const unsigned int length, Args ... args);


		void set_title(const std::string_view title);
		void set_window_size(const Tools::Size_<platform> &size);
		void set_codepage(const Tools::CodePage_<platform>& cp);
		void set_font(const Tools::Font_<platform> &font);
		

		std::string_view get_title();
		const Tools::Size_<platform>* get_windows_size();
		const Tools::CodePage_<platform>* get_codepage();
		const Tools::Font_<platform>* get_font();

	};

}
