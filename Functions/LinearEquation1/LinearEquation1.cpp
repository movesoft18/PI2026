#include <iostream>
using namespace std;

struct LEResult
{
    int roots; // кол-во корней, -1 - бесконечное
    double root; // корень.
};

LEResult linearEquation(double b, double c)
{
    if (b != 0)
        return LEResult{ 1, -c / b };
    if (c == 0)
        return LEResult{ -1, 0 };
    return LEResult{ 0, 0 };
}

struct Data
{
    double b, c;
};
int main()
{
    setlocale(LC_ALL, "");
    Data data[5]
    {
        {0,0},
        {-1,0},
        {0,-1},
        {4,7},
        {12,-10},
    };
    for (int i = 0; i < 5; i++)
    {
        auto result = linearEquation(data[i].b, data[i].c);
        if (result.roots == 1)
        {
            cout << "Один корень, x = " << result.root << '\n';
        }
        else if (result.roots == 0)
        {
            cout << "Нет корней \n";
        }
        else
        {
            cout << "Бесконечное количество корней \n";
        }
    }
}

