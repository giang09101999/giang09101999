#include<iostream>

int main()
{
    int a = 5;
    float b = 2;

    double c = double(a) + double(b);

    std::cout << "The value of c is: " << c << std::endl;
    std::cout << "The datatype of a is: " << typeid(a).name() << std::endl;
    std::cout << "The datatype of b is: " << typeid(b).name() << std::endl;
    std::cout << "The datatype of c is: " << typeid(c).name() << std::endl;
}