#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "Введите размер массива:";
    int size;
    cin >> size;
    int* array = new int[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    cout << "Сумма = " << sum << endl;
    delete[] array;
}
