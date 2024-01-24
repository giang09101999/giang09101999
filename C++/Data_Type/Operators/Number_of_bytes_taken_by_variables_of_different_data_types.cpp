#include<iostream>

int main()
{
    int a = 1;
    double b = 5;
    long c = 9;
    short d = 10;
    char e = 'Giang';


    std::cout << "Size of datatype a is: " << sizeof(a) << std::endl;
    std::cout << "Size of datatype b is: " << sizeof(b) << std::endl;
    std::cout << "Size of datatype c is: " << sizeof(c) << std::endl;
    std::cout << "Size of datatype d is: " << sizeof(d) << std::endl;
    std::cout << "Size of datatype e is: " << sizeof(e) << std::endl;
}