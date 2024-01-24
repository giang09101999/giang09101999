#include<iostream>

signed int a = 9; // signed modifier can store positive, negative number, or zero
signed int b = -10; // signed modifier can store positive, negative number, or zero
signed int c = 0; // signed modifier can store positive, negative number, or zero


unsigned int d = 5; // unsigned only store non-negative number
unsigned int e = 0; // unsigned only store non-negative number


int main()
{
    std::cout << "The signed modifiers: " << std::endl;
    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of b is: " << b << std::endl;
    std::cout << "The value of c is: " << c << std::endl;
    std::cout << "------------------------" << std::endl;
    
    std::cout << "The unsigned modifiers: " << std::endl;
    std::cout << "The value of d is: " << d << std::endl;
    std::cout << "The value of e is: " << e << std::endl;
}