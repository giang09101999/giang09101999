#include<iostream>

struct number
{
    int a = 2;
    int b = 1;
    int c = a * b;
};

int main()
{
    struct number Num;
    int d = Num.a + Num.b;
    int e = Num.c;
    std::cout << "The value of d: " << d << std::endl; 
    std::cout << "The value of e: " << e << std::endl; 
}
