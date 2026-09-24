#include <iostream>
using namespace std;
// Решение уравнения вида ax^2+bx+c=0
int main()
{
    double a, b, c; // Коэффициенты уравнения
    double  x1, x2; // Возможные корни
    setlocale(LC_ALL, "");
    cout << "Программа вычисления корней уравнения ax^2+bx+c=0\n";
    cout << "Введите коэф. а: ";
    cin >> a;
    cout << "Введите коэф. b: ";
    cin >> b;
    cout << "Введите коэф. c: ";
    cin >> c;    
    if (a != 0)
    {
        // решаем квадратное уравнение
    }
    else
    {
        // решаем линейное
        if (b != 0)
        {
            x1 = -c / b;
            cout << "x = " << x1 << endl;
        }
        else if (c == 0)
        {
            cout << "x - любое ";
        }
        else
        {
            cout << "Корней нет";
        }
    }
}

