#include <iostream>
#include <conio.h>
int main()
{
    while (true)
    {
        bool isPressed = _kbhit();
        if (isPressed)
        {
            char key = _getch();
            if (key == 27) break;
            std::cout << "Pressed! " << key << " key\n";
        }
    }
}