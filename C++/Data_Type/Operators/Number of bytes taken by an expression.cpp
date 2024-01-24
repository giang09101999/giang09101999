#include<iostream>

int main()
{
    char a = 'Giang';
    int b = 2;
    double c = 4;
    long d = 5;
    short e = 10;

    std::cout << "The size of (char + int) is: " << sizeof(a + b) << std::endl;
    std::cout << "The size of (int + double) is: " << sizeof(b + c) << std::endl;
    std::cout << "The size of (char + double) is: " << sizeof(a + c) << std::endl;
    std::cout << "The size of (short + char) is: " << sizeof(e + a) << std::endl;
    std::cout << "The size of (long + char) is: " << sizeof(d + a) << std::endl;
    std::cout << "The size of short is: " << sizeof(e) << std::endl;

}