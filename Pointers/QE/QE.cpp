#include <iostream>
using namespace std;

void QuadraticEquation()
{
    double *a, *b, *c;
    double *x1, *x2; // Возможные корни
    double *d;
    a = new double;
    b = new double;
    c = new double;
    d = new double;
    x1 = new double;
    x2 = new double;
    setlocale(LC_ALL, "");
    cout << "Программа вычисления корней уравнения ax^2+bx+c=0\n";
    cout << "Введите коэф. а: ";
    cin >> *a;
    cout << "Введите коэф. b: ";
    cin >> *b;
    cout << "Введите коэф. c: ";
    cin >> *c;
    if (*a != 0)
    {
        // решаем квадратное уравнение
        *d = *b * *b - 4 * *a * *c;
        if (*d >= 0)
        {
            *x1 = (-*b - sqrt(*d)) / (2 * *a);
            *x2 = (-*b + sqrt(*d)) / (2 * *a);
            cout << *x1 << ' ' << *x2;
        }
        else cout << "Корней нет";
    }
    else
    {
        // решаем линейное
        if (*b != 0)
        {
            *x1 = -(*c)/(*b);
            cout << "x = " << *x1 << endl;
        }
        else if (*c == 0)
        {
            cout << "x - любое ";
        }
        else
        {
            cout << "Корней нет";
        }
    }
    delete a;
    delete b;
    delete c;
    delete d;
    delete x1;
    delete x2;
}


int main()
{
    QuadraticEquation();
}

