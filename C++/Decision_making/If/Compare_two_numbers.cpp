#include<iostream>

int main()
{
    int a, b;
    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;

    if(a > b)
    {
        std::cout << "a is greater than b" << std::endl;
    }
    else if(a < b)
    {
        std::cout << "a is less than b" << std::endl;
    }
    else
    {
        std::cout << "a equals to b" << std::endl;
    }
}