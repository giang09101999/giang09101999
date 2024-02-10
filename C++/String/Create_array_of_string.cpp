#include<iostream>
#include <string>

int main()
{
    int i, n;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    std::string str[n];
    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        std::cout << "Array[" << i << "] = ";
        std::getline(std::cin, str[i]);
    }

    std::cout << "================================" << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Arrray[" << i << "]= " << str[i] << std::endl;
    }

}