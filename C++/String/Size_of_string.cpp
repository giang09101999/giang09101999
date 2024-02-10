#include<iostream>

int main()
{
    std::string str;
    std::cout << "Enter string: ";
    std::getline(std::cin, str);

    std::cout << str << std::endl;
    std::cout << "Size of string: " << size(str) << std::endl;
}