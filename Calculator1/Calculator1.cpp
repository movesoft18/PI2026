#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Программа - колькулятор.\n";
    double a, b, result;
    char operation;
    cout << "Введите через пробел первое число, знак операции, второе число:\n";
    cin >> a >> operation >> b;
    switch (operation)
    {
    case '+': 
        result = a + b; 
        break;
    case '-': 
        result = a - b; 
        break;
    case '*':
        result = a * b; 
        break;
    case '/':
        result = a / b; 
        break;
    case '^':
        result = pow(a,b); 
        break;
    default:
        cout << "Неподдерживаемая операция " << operation << endl;
        return 0;
    }
    cout << a << ' ' << operation << ' ' << b << " = " << result << endl;
}
