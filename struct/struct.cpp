#include <iostream>
using namespace std;

struct Product
{
    string name;
    double price;
    double count;
};

int main()
{
    Product p;
    p.name = "Яблоки";
    p.price = 150;
    p.count = 200;
    Product p1{"Груши", 250, 56.99};
    Product products[100];
    products[0].name = "Киви";
    products[0].price = 300.87;
    products[0].count = 22.2;
}
