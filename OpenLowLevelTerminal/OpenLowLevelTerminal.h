#pragma once
#include <string_view>

#ifdef _WIN32
	#include <Windows.h>
#endif // _WIN32



namespace OLLT {
	
	class LLTerminal final {

	public:

		void set_title(const std::string_view title);
		void set_window_size(const unsigned int x, const unsigned int y);
		template <class U>
		void set_background_color(const unsigned int x, const unsigned int y, U fcolor);
		template <class U>
		void set_foreground_color(const unsigned int x, const unsigned int y, U bcolor);
		template <class U>
		void set_font_style(U font_style);
		template <class U>
		void set_format(U format_data);
		void set_codepage();
		
	};

}
