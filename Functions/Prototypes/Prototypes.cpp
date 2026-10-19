#include <iostream>

int add(int, int); // Прототип функции

int main()
{
    int a = 4, b = 5;
    std::cout << add(a, b) <<"\n";
}

int add(int a, int b)
{
    return a + b;
}
