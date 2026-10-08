#include <iostream>
using namespace std;
const int rows = 3;
const int cols = 3;

int a[10];
int m[rows][cols];

int main()
{
    setlocale(LC_ALL, "");
    const int size = sizeof(a) / sizeof(int);
    // Заполнение массива с консоли
    for (int i = 0; i < size; i++)
    {
        cout << "Введите a[" << i << "]: ";
        cin >> a[i];
    }
    // Печать содержимого массива в одну строку
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    // Печать содержимого массива в с подписями
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    // Матрицы
    cout << endl;
    // Ввод данных
    for (int r = 0; r < rows; r++) // внешний цикл по строкам
    {
        cout << "Введите строку " << r + 1 << ": ";
        for (int c = 0; c < cols; c++) // внутренний цикл по столбцам
        {
            cin >> m[r][c];
        }
    }

    // Вывод матрицы
    for (int r = 0; r < rows; r++) // внешний цикл по строкам
    {
        for (int c = 0; c < cols; c++) // внутренний цикл по столбцам
        {
            cout << m[r][c] << '\t';
        }
        cout << endl;
    }

    // вычисляем определитель
    int d = m[0][0] * m[1][1] * m[2][2] +
        m[0][1] * m[1][2] * m[2][0] +
        m[1][0] * m[2][1] * m[0][2] -

        m[0][2] * m[1][1] * m[2][0] -
        m[1][0] * m[0][1] * m[2][2] -
        m[0][0] * m[1][2] * m[2][1];
    cout << "Определитель матрицы = "  << d << endl;
}

