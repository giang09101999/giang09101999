#include<iostream>

int main()
{
    int a;
    std::cout << "Input value of a: ";
    std::cin >> a;

    if(a % 2 == 0)
    {
        std::cout << "a is even" << std::endl;
    }
    else
    {
        std::cout << "a is odd" << std::endl;
    }   
}