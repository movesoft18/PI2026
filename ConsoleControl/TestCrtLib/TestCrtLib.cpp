#include <iostream>
#include "CrtLib.h"
using namespace crt;
using namespace std;

int main()
{
    HideCursor();
    GotoXY(10, 5);
    SetTextColor(COLOR_LIGHT_CYAN);
    std::cout << "Hello World!\n";
    GotoXY(10, 7);
    SetTextBackground(COLOR_RED);
    std::cout << "Hello World!\n";
    cin.get();
    ShowCursor();
    cin.get();
}

