#include "OpenLowLevelTerminal.h"
#include "TerminalFormatter.h"
#include "TerminalStyles.h"
#include <iostream>

int main()
{
    OLLT::TerminalFormatter<> tf;
    std::cout << tf.foreground_color(OLLT::sFGColors::Green) << "test" << std::endl;
    std::cout << tf.reset() << std::endl;
    std::cin.get();
    return 0;
}

