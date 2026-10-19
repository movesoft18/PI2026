#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T, typename V>
auto sub(T a, V b)
{
    return a - b;
}

//auto Max(auto a, auto b)
//{
//    return (a > b) ? a : b;
//}

int main()
{
    cout << add(4, 5) << endl;
    cout << add(4.6, 5.9) << endl;
    cout << add(4.6f, 5.9f) << endl;
    cout << add<string>("Hello", "world!") << endl;
    cout << sub(500.0, 5) << endl;
    //cout << Max(45, 98.4) << endl;
}

