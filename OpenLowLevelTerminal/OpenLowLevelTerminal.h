#pragma once
#include <string_view>

namespace OLLT {
	class LLTerminal {

	public:

		void set_title(const std::string_view title);
		void set_window_size(const unsigned int x, const unsigned int y);
		void set_pixel(const unsigned int x, const unsigned int y);
	};
}
