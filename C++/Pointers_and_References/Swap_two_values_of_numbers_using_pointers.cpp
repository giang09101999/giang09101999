#include<iostream>

int main()
{
    int a = 5, b = 10;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;

    p3 = p1;
    p1 = p2;
    p2 = p3;
    
    std::cout << "a: " << a << " b: " << b << std::endl;
}