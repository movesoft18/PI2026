#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        //cout << i << ' ' << sum << endl;
    }
    cout << "sum = " << sum << endl;

    sum = 0;
    int i = 1;
    for (;sum < 100;)
    {
        sum += i;
        i++;
    }
    cout << "sum = " << sum << " i = " << i - 1 << endl;

    sum = 0;
    i = 1;
    while (sum < 100)
    {
        sum += i;
        i++;
    }
    cout << "sum = " << sum << " i = " <<  i - 1 << endl;
}

/*
 for - цикл со счетчиком
 int i;
 for (i = 1; i <= 10; i++)
 {

 }

 for(;;)
 {

 }

 while - цикл с предусловием

 while (false) {}
 while (0) {}
 while (1) {}
 while (true) {}

 do - while - цикл с постусловием




*/