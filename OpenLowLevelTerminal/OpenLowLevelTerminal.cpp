#include "OpenLowLevelTerminal.h"
#include "TerminalStyles.h"
#include <iostream>

int main()
{
    std::cout << OLLT::Styles::BColors::Blue << std::endl;
    std::cin.get();
    return 0;
}

