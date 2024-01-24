#include<iostream>

int a = 10;  

void function_1()
{
    int a = 9;
    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of global a is: " << ::a << std::endl;
}

int main()
{
    function_1();
    std::cout << "The value of global a is: " << a << std::endl;
}