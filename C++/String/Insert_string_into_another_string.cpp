#include<iostream>

int main()
{
    std::string str, str_2;
    std::cout << "Enter string: ";
    std::getline(std::cin, str);

    std::cout << "The original string: " << str << std::endl;

    int pos;
    std::cout << "Enter characters into string: ";
    std::getline(std::cin, str_2);

    std::cout << "Enter position to insert characters: ";
    std::cin >> pos;

    str.insert(pos, str_2);
    std::cout << "The inserted string: " << str << std::endl;
}