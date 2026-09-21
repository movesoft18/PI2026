#include <iostream>
using namespace std;


int main()
{
    double a, b, x;
    setlocale(LC_ALL, "");
    cout << "Программа вычисления корней уравнения ax+b=0\n";
    cout << "Введите коэф. а: ";
    cin >> a;
    cout << "Введите коэф. b: ";
    cin >> b;
    if (a != 0)
    {
        double x = -b / a;
        cout << "x = " << x << endl;
    }
    else
    {
        if (b == 0)
        {
            cout << "x - любое\n ";
        }
        else
        {
            cout << "Корней нет\n ";
        }
    }  
}

/*

if (условие)
{
    команды;
}

if (условие) команда;


if (условие)
{
    команды1;
}
else
{
    команды2;
}

if (условие) 
    команда1; 
else 
    команда2;
*/