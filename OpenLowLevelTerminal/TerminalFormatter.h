#pragma once
#include <sstream>
#include "TerminalStyles.h"

namespace OLLT {

	template <class T = std::ostringstream>
	class TerminalFormatter final {
	private:
		T strstream;

		constexpr std::string _format(int format);

	public:

		constexpr std::string format(int format);

		constexpr std::string foreground_color(nFGColors color);
		constexpr std::string foreground_color(sFGColors color);

		constexpr std::string background_color(nBGColors color);
		constexpr std::string background_color(sBGColors color);

		constexpr std::string style_text(Styles style);

		constexpr std::string reset();
	};

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::_format(int format)
	{
		strstream << '\033' << '[' << format << 'm';
		return strstream.str();
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::format(int format)
	{
		return _format(format);
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::foreground_color(nFGColors color)
	{
		return _format(static_cast<int>(color));
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::foreground_color(sFGColors color)
	{
		return _format(static_cast<int>(color));
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::background_color(nBGColors color)
	{
		return _format(static_cast<int>(color));
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::background_color(sBGColors color)
	{
		return _format(static_cast<int>(color));
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::style_text(Styles style)
	{
		return _format(static_cast<int>(style));
	}

	template<class T>
	inline constexpr std::string TerminalFormatter<T>::reset()
	{
		return _format(static_cast<int>(Styles::Reset));
	}

}
