#include "OpenLowLevelTerminal.h"
#include "TerminalStyles.h"
#include <iostream>

int main()
{
    OLLT::LLTerminal term;
    const OLLT::Tools::CodePage utf8 = OLLT::Tools::CodePages::UTF8;
    std::cout << OLLT::Styles::BColors::Blue << std::endl;
    std::cin.get();
    return 0;
}

