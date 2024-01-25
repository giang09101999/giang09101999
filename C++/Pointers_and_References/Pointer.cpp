#include<iostream>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    std::cout << "The address of a is: " << p << std::endl;
    std::cout << "The value of a is: " << *p << std::endl;
    return 0;
}