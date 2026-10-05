#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 7 == 0) continue;
        sum += i;
        // ...
    }

    std::cout << "Сумма не крантых 7 = " << sum << endl;
    sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (sum + i > 400000) 
            break;
        sum += i;
    }
    std::cout << "Сумма = " << sum << endl;

    while (true)
    {
        // ...
        // if (условие) break;
        // ...
    }

}

