#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
long long add(long long a, long long b)
{
    return a + b;
}

double add(double  a, double b)
{
    return a + b;
}

float add(float  a, float b)
{
    return a + b;
}

float add(float  a, float b, float c)
{
    return a + b + c;
}

string add(string a, string b)
{
    return a + b;
}

void circle(int xc, int yc, int radius){}
void circle (int x1, int y1, int x2, int y2,
    int x3, int y3){ }

int main()
{
    cout << add(4, 5) << endl;
    cout << add(4.6, 5.9) << endl;
    cout << add(4.6f, 5.9f) << endl;
    cout << add("Hello", "world!") << endl;
    cout << add(3, 4, 5) << endl;
}

