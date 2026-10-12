#include <iostream>

void square(int &a, int& b)
{
    a = a * a;
    b = b * b;
    std::cout << a << ' ' << b << '\n';
}

void Swap(int& a, int& b)
{
    int m = a;
    a = b;
    b = m;
}

int main()
{
    setlocale(LC_ALL, "");
    int m = 5, k = 10;
    std::cout << "До вызова функции " << m << ' ' << k << '\n';
    square(m, k);
    //square(10, 50);
    Swap(m, k);
    std::cout << "После вызова функции " << m << ' ' << k << '\n';
}
