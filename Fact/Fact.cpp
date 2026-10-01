#include <iostream>
using namespace std;

const int NUMBER_LIMIT = 20; // Предел для вычисления факториала 
                             // без переполнения

int main()
{
    setlocale(LC_ALL, "");
    cout << "Вычисление n!\n";
    int n;
    do
    {
        cout << "Введите n в диапазоне 0.." <<
            NUMBER_LIMIT << ": ";
        cin >> n;
        if (n < 0 || n > NUMBER_LIMIT)
            cout << "Необходимо ввести число из заданного диапазона.\n";
    } while (n < 0 || n > NUMBER_LIMIT);
    long long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << n << "! = " << f << endl;
}

