#include<iostream>

void function_1(int A)
{
    A = A + 1;
    std::cout << "a in function: " << A << std::endl;
}

int main()
{
    int a = 5;
    function_1(a);
    std::cout << "a outside funciton: " << a << std::endl;
}