#include<iostream>

int main()
{
    int a = 5;
    float b = 2;

    double c = double(a) + double(b);

    std::cout << "The value of c is: " << c << std::endl;
}