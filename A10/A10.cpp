#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите число: ";
    int a, b;
    cin >> a;
    b = a * a;
    a = b * b;
    a = a * a;
    a = a * b;
    cout << "Результат = " << a << endl;
}
