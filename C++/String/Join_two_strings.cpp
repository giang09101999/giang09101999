#include<iostream>
#include <string.h>

int main()
{
    std::string str, str_2, str_3;
    std::cout << "Enter string: ";
    std::getline(std::cin, str);    
    
    std::cout << "Enter string_2: ";
    std::getline(std::cin, str_2);

    str_3 = str + str_2;

    std::cout << "The concatenation: " << str_3 << std::endl;



}