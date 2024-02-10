#include<iostream>

int main()
{
    std::string str, str_2;
    std::cout << "Enter string: ";

    std::getline(std::cin, str);
    std::cout << "The original string: " << str << std::endl;

    std::cout << "Append characters into string: ";
    std::getline(std::cin, str_2);

    str.append(str_2);
    std::cout << "The updated string: " << str << std::endl;
}