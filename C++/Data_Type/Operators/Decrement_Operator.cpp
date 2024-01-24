#include<iostream>

int main()
{
    int a = 20, b, c, d, e;
    b = --a;
    c = a--;
    d = --a;
    e = a--;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << ", e: " << e << std::endl;
}