#include <iostream>
using namespace std;
// bx+c=0
// rootsCount = 0 - нет решений
// rootsCount = 1 - 1 корень root
// rootsCount = -1 - бесконечное кол-во корней
void linearEquation(double b, double c,
    int& rootsCount, double& root)
{
    if (b != 0)
    {
        root = -c / b;
        rootsCount = 1;
    }
    else if (c == 0)
    {
        rootsCount = -1;
        root = 0;
    }
    else
    {
        rootsCount = 0;
        root = 0;
    }
}

struct Data
{
    double b, c;
};
int main()
{
    setlocale(LC_ALL, "");
    int roots;
    double root;
    Data data[5]
    {
        {0,0}, //0х+0 = 1
        {-1,0},//-1х+0 = 0
        {0,-1},
        {4,7}, // 4х+7 = 0
        {12,-10},
    };
    for (int i = 0; i < 5; i++)
    {
        linearEquation(data[i].b, data[i].c, roots, root);
        if (roots == 1)
        {
            cout << "Один корень, x = " << root << '\n';
        }
        else if (roots == 0)
        {
            cout << "Нет корней \n";
        }
        else
        {
            cout << "Бесконечное количество корней \n";
        }
    }
}

