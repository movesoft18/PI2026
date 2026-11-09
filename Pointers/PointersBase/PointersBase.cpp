// PointersBase.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int age = 20;
    int& age1 = age;
    int* pAge = &age;
    std::cout << pAge << ' ' << *pAge << std::endl;
    double* d = nullptr;
    //std::cout << *d;
    int* age2 = new int{ 30 };
    std::cout << age2 << ' ' << *age2 << std::endl;
    //char* s = 0;
    //long* l = NULL;
    delete age2;
    //std::cout << age2 << ' ' << *age2 << std::endl;
    age2 = nullptr;
}


/*
    Динамическая память
    Куча - Heap
    0x1f095500
    Динамические переменные
    &

*/