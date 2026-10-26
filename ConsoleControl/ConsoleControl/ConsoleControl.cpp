#include <iostream>
#include "Windows.h"
using namespace std;

int main()
{
    // 1. 
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    // 2.
    SetConsoleTextAttribute(hStdOut, (14 << 4) + 11);
    SetConsoleTitle(L"Это мое окно");
    COORD cursorPos{10, 4};
    //cursorPos.X = 10;
    //cursorPos.Y = 4;
    SetConsoleCursorPosition(hStdOut, cursorPos);
    std::cout << "Hello World!\n";
    cin.get();
}

