#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Программа - калькулятор.\n";
    double a, b, result;
    char operation;
    cout << "Введите через пробел первое число, знак операции, второе число:\n";
    cin >> a >> operation >> b;
    if (operation == '+')
    {
        result = a + b;
    }
    else if (operation == '-')
    {
        result = a - b;
    }
    else if (operation == '*')
    {
        result = a * b;
    }
    else if (operation == '/')
    {
        result = a / b;
    }
    else if (operation == '^')
    {
        result = pow(a,b);
    }
    else
    {
        cout << "Неподдерживаемая операция " << operation << endl;
        return 0;
    }
    cout << a << ' ' << operation << ' ' << b << " = " << result << endl;
}
