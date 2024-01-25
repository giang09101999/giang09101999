#include<iostream>

int main()
{
    int a, b, c, min, max;

    std::cout << "Input a: ";
    std::cin >> a;    
    
    std::cout << "Input b: ";
    std::cin >> b;    
    
    std::cout << "Input c: ";
    std::cin >> c;

    min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    std::cout << "Min is: " << min << std::endl;

    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    std::cout << "Max is: " << max << std::endl;
    
}