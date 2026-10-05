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
    {"Бананы", 180, 300},
    {"Огурцы", 155, 76},
    {"Помидоры", 231, 52},
};

int main()
{
    //Product p;
    //p.name = "Яблоки";
    //p.price = 150;
    //p.count = 200;
    //Product p1{"Груши", 250, 56.99};
    //Product products[100];
    //products[0].name = "Киви";
    //products[0].price = 300.87;
    //products[0].count = 22.2;
    setlocale(LC_ALL, "");
    int size = sizeof(pr) / sizeof(Product);
    cout << "Введите предел цены: ";
    double price;
    cin >> price;
    bool found = false;
    cout << "Список товаров с ценой не более " << price 
        << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        if (pr[i].price <= price)
        {
            found = true;
            cout << "Название: " << pr[i].name <<
                " цена: " << pr[i].price <<
                " руб. количество: " << pr[i].count << endl;
        }
    }
    if (!found)
        cout << "Нет товаров по вашему запросу.\n";
}
