#include<iostream>

int main()
{
    std::string str;
    std::cout << "Enter string: ";
    std::getline(std::cin, str);
    std::cout << str << std::endl;

    str.clear();
    std::cout << "The string: " << str << std::endl;
}