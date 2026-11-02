#include <iostream>
#include <stdint.h>


struct Foo
{
    char ch;
    int value;
};

struct Foo1
{
    char ch;
    short id;
    int value;
};

int main()
{
    std::cout << sizeof(Foo) << '\n';
    std::cout << sizeof(Foo1) << '\n';

    int x = 0;
    char c;


    int8_t byte; // -128..+127
    uint8_t byte1; // 0..255
    int16_t word; // -32768..+32767
    uint16_t word1; // 0..65536
    int32_t dword; // -2^31..+2^31-1
    uint32_t dword1; // 0..2^32
    int64_t qword; // -2^63..+2^63-1
    uint64_t qword1; // 0..2^64
}

