#include "kernel.h"
#include "player.h"
#include <os.h>

bool Kernel::init() {
    window = GetStdHandle(STD_OUTPUT_HANDLE);

	// let's change the font
    CONSOLE_FONT_INFOEX font;
    font.cbSize = sizeof font;
    font.nFont = 0;
    font.dwFontSize.X = 0;
    font.dwFontSize.Y = 20;
    font.FontFamily = FF_DONTCARE;
    font.FontWeight = FW_NORMAL;

    wcscpy_s(font.FaceName, L"Cascadia Code");

    if (!SetCurrentConsoleFontEx(window, FALSE, &font)) {
        return false;
    };

    SetConsoleTextAttribute(window, 0xf);
    std::cout << " Pupppy44's CmdOs [Version 1.0]\n Have fun!\n\n";

    return true;
}

void Kernel::input() {
    SetConsoleTextAttribute(window, 0xb);
    std::cout << " [@admin]: ";
    SetConsoleTextAttribute(window, 0xf);

    std::string x;
    std::getline(std::cin, x);
    if (x == "help") {
        std::cout << " Help:\n echo - Display a message\n";
    }
    else if (x.starts_with("echo ")) {
        x = x.substr(5);

        std::cout << ' ' << x << '\n';
    }
    else if (x == "HELLO22") {
        SetConsoleTextAttribute(window, 0xc);
        std::cout << " Hello! ;)\n";
    }
    else {
        SetConsoleTextAttribute(window, 0xc);
        std::cout << " Error: '" << x << "' not recognized as a command or program\n";
    }
    
    std::cout << ' ';
    Player plr;
    plr.init("main.x");
    //plr.run();
    //std::cout << "\n";

    input();
}