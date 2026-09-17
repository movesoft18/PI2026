#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double xa, ya; // координаты вершины А
    double xb, yb; // координаты вершины B
    double xc, yc; // координаты вершины C
    double a, b, c; // хранят длины сторон треугольника
    double p; // полупериметр
    double s; // площадь
    cout << "Программа расчета площади треугольника по длине его сторон\n";
    cout << "Введите через пробел координаты x y первой вершины: ";
    cin >> xa >> ya;
    cout << "Введите через пробел координаты x y второй вершины: ";
    cin >> xb >> yb;
    cout << "Введите через пробел координаты x y третьей вершины: ";
    cin >> xc >> yc;
    b = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));
    a = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
    c = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь треугольника = " << s << endl;
}

// Pascal case - ThisIsLongName
// Camel case - thisIsLongName
// Snake case - this_is_long_name
// this_is_long_name = this_is_long_name + thisIsLongName;