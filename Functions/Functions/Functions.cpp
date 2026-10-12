#include <iostream>
#include <conio.h>

int sum(int a, int b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

void printHello()
{
    std::cout << "Hello World!\n";
}

bool isLeapYear(int year)
{
    if (year < 0) return false;
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int main()
{
    setlocale(LC_ALL, "");
    printHello();
    int years[10]{
        1700, 1800, 1354, 2020, 
        2026, 2000, 2300,2000, 
        1900, 1901 
    };

    for (int i = 0; i < 10; i++)
    {
        bool leap = isLeapYear(years[i]);
        std::cout << "Год " << years[i] <<
            (leap ? " является " : " не является ")
            << "високосным\n";
    }
    //char key = _getch();
    _getch();
    //std::cout << "Нажата клавиша " << key << '\n';
    sub(45.7348, 7438.565);
    std::cout << sum(10, 500) << ' ' <<
        sub(45.7348, 7438.565) << '\n';
}



/*

тип_результата имя_функции(параметры функции)
{
    код_функции
    return значение;
}

*/