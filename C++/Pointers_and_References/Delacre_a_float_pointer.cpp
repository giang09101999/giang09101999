#include<iostream>

int main()
{
    float a = 5, *p;
    p = &a;

    std::cout << "Value of a: " << *p << std::endl;
    std::cout << "Address of a: " << p << std::endl;
}