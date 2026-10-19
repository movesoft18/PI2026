#include <iostream>
using namespace std;

int sum(int a, int b = 10)
{
    int c = a + b;
    return c;
}

void sum(int a, int b, int& result)
{
    result = a + b;
}

void Swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int x = sum(4, 7);
    x = sum(100);
    int& refX = x;
    refX = 2;
    int x1 = 100, x2 = 200;
    int y = sum(x1, x2);
    Swap(x1, x2);
    sum(40, 90, y);
}

