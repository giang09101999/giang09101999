#include<iostream>
#include <cstring> 

int main()
{
    std::string str, str_2;
    std::getline(std::cin, str);

    std::cout << "The original string: " << str << std::endl;

    str_2 = str.c_str();
    std::cout << "The copied string: " << str_2 << std::endl;

}