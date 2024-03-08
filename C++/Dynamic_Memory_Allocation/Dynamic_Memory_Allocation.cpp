#include<iostream>

int main()
{
    int *ptr = new int;
    int a = 5;
    ptr = &a;
    std::cout << "The value is: " << *ptr << std::endl;

    delete ptr;
}