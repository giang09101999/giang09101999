#include<iostream>

int main()
{
    int a, b;
    std::cout << "Enter value of a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter value of b: " << std::endl;
    std::cin >> b;

    int tempt;
    tempt = b;
    b = a;
    a = tempt;
    
    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of b is: " << b << std::endl;
}
