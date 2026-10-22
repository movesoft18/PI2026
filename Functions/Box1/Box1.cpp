#include <iostream>
using namespace std;

void drawLine(int width, char first, 
    char fill, char last)
{
    if (width > 0) cout << first;
    for (int col = 1; col < width - 1; col++)
    {
        cout << fill;
    }
    if (width > 1) cout << last;
    cout << '\n';
}

void Box(int width, int height)
{
    if (height > 0) drawLine(width, 218, 196, 191);
    for (int row = 1; row < height - 1; row++)
    {
        drawLine(width, 179, ' ', 179);
    }
    if (height > 1) drawLine(width, 192, 196, 217);
}

int main()
{
    //for (int i = 0; i < 255; i++)
    //    cout << (char)i << i << ' ';

    Box(1,1);
    cout << '\n';
    Box(1, 2);
    cout << '\n';
    Box(2, 1);
    cout << '\n';
    Box(1, 3);
    cout << '\n';
    Box(3, 1);
    cout << '\n';
    Box(2, 2);
    cout << '\n';
    Box(3, 2);
    cout << '\n';
    Box(2, 3);
    cout << '\n';
    Box(3, 3);
    cout << '\n';
    Box(15, 8);
}


/*

+-----+
|     |
|     |
+-----+

*/

