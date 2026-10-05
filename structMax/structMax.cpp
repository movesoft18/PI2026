#include <iostream>
using namespace std;

struct Product
{
    string name;
    double price;
    double count;
};

Product pr[10]
{
    {"Яблоки", 120, 200},
    {"Груши", 250, 20},
    {"Картофель", 56.99, 20.10},
    {"Морковь", 33.50, 30},
    {"Капуста", 12, 100},
    {"Апельсины", 190, 54},
    {"Виноград киш-миш", 138, 464},
    {"Бананы", 250, 300},
    {"Огурцы", 155, 76},
    {"Помидоры", 231, 52},
};

int main()
{
    setlocale(LC_ALL, "");
    int size = sizeof(pr) / sizeof(Product);
    int indexMax = 0;
    for (int i = 1; i < size; i++)
    {
        if (pr[i].price > pr[indexMax].price)
        {
            indexMax = i;
        }
    }
    cout << "самый дорогой товар с номером " <<
        indexMax << "\nНазвание: " << pr[indexMax].name <<
        " цена: " << pr[indexMax].price <<
        " руб. количество: " << pr[indexMax].count << endl;
}
