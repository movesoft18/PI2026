#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    double a, b, s;
    char c = 'A';
    char x = 60;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    s = a + b;
    std::cout << "Сумма = " << s;
}

/*
тип_переменной имя_переменной;

int age = 0, age1, age2 = 100;

int age;
int age1 = 50;
int age2;
// int 4 байта -2^31..+2^31-1

unsigned int x;
short int y; //-32768..+32767
unsigned short int y; //0..+65535

long s;
long int s;
unsigned long us;

long long ll; // 8 байт -2^64..+2^64-1
unsigned long long ll;

float f;    // 4 байта -3.4*10^-38 .. 3.4*10^+38 
            // 7-8 разрядов

double d=8.3562E-100;   // 8 байт -1.7*10^-308 .. 1.7*10^+308 
                        // 17-18 разрядов
//8.3562*10^-100
long double ld = 1.45243256E+23; 
//1.45243256*10^23

char symbol = 32; // -128..+127
char letterA = 'A';
std::string letter_A = "A";
unsigned char rrr = 'A'; // 0..255;

bool e = true; // true false

void x;

std::string str = "Hello, world!";
std::string empty_str = "";

auto var = 12;
auto d_var = 12.0;
auto f_var = 12.0f;
auto ll_var = 12ll;

const int x = 100 + var;

int x1 = 2 + age;
int x2 = 2 - age;
int x3 = 2 * age;
int x4 = 2 / age;
int x5 = 5 / 2;
int x6 = 106 % 100; // 6
bool odd = x5 % 2;
int x7 = -x6;
x1++; // x1 = x1 + 1;
x1--; // x1 = x1 - 1;
++x1; // x1 = x1 + 1;
--x1; // x1 = x1 - 1;

x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);


int a = 10;
int b = 20;
bool c = a == b; //false
bool c1 = a = b; //true

a > b
a < b
    a >= b
    a <= b
    a != b

int a = 10;
int b = 20;
int c = 30;
int d = 40;

!(a == b) // true

(a > b) && (c > d) // false

bool q = a && b;

  a    b    a && b
true  true  true
true  false false
false true  false
false false false


(a > b) || (c > d)

bool q = a || b;

a    b      a||b
true  true  true
true  false true
false true  true
false false false

bool q1 = a || b;

bool x = true;
bool y = !x; // y - false

int a = 10; int b = 20;
bool x = a > b; // x - false;
bool y = !(a > b); // y - true;



+=
-=
*=
/=
%=

int x = 10;
x = x + 100; //110
x += 100; //210 x = x + 100
x -= 100; //110 x = x - 100
x *= 100; //11000 x = x * 100



*/