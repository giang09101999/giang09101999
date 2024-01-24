#include<iostream>

void Local_variable()
{
    float a = 5, b = 10;
    {
        float a = 1;
        float b = 2;
        std::cout << "The value of a inside block is: " << a << std::endl;
        std::cout << "The value of b inside block is: " << b << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "The value of a outside block is: " << a << std::endl;
    std::cout << "The value of b outside block is: " << b << std::endl;
}

int main()
{   
    Local_variable();
}