// Box.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void printLine(int width, char start, 
    char fill, char end)
{
    if (width <= 0) return;
    if (width > 0) cout << start;
    for (int w = 1; w < width - 1; w++)
    {
       std::cout << fill;
    }
    if (width > 1) cout << end;
    std::cout << '\n';
}

void Box(int width, int height)
{
    if (height > 0) printLine(width, 218, 196, 191);
    for (int h = 1; h < height - 1; h++)
    {
        printLine(width, 179, ' ', 179);
    }
    if (height > 1) printLine(width, 192, 196, 217);
}

int main()
{
    Box(10,5);
    //for (int i = 0; i < 255; i++)
    //    cout << char(i) << i << ' ';
}

