#include <iostream>
using namespace std;

const double EPS = 1e-6;

int main()
{
    double sum = 0;
    for (double i = -10; i <= 10; i += 0.1)
    {
        if (abs(i) < EPS)
            sum += 1000;
        else
            sum += i;
        cout << i << endl;
    }
    cout << endl << sum << endl;

    double a = 0.00001;
    double b = 0.0000001;
    if (a == b) {} // неверно !!!
    if (abs(a - b) < EPS)
    {
        //... значит числа примерно равны
    }
    else
    {
        //... значит числа не равны
    }
}