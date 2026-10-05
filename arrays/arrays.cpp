#include <iostream>
using namespace std;
int main()
{
    //int a1, a2, a3, a4, a5, a6, ..., a100;
    int a[10];
    int b[10] { 1,2,3,4,5,6,7,8,9,10 };
    int sizeA = sizeof(a) / sizeof(int);

    int c[10]{ 1,2,3 };
    char ch[5] { 'H','e','l','l','o' };
    char ch1[] = "Hello";
    char symbol = ch1[3];
    for (int i = 0; i < 5; i++) 
        cout << ch[i];
    cout << endl;
    for (int i = 0; i < sizeA; i++)
    {
        cout << c[i] << ' ';
    }
    cout << endl;
    //a[0] = 1;
    //a[1] = 100;
    //a[2] = -200;
    for (int i = 0; i < sizeA; i++)
    {
        a[i] = rand();
    }
    for (int i = 0; i < sizeA; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;

    for (auto e : a)
    {
        cout << e << ' ';
    }
    cout << endl;
    //a[15] = 900;
    //cout << a[10] << endl;
}