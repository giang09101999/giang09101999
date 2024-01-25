#include<iostream>

int main()
{
    int a, *p;
    p = &a;
    *p = 10;
    std::cout << "The value of a is: " << a << std::endl;
}