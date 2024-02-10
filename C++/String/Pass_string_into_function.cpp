#include<iostream>

void string_function(std::string Str)
{
    std::cout << Str << std::endl;
}

int main()
{
    std::string str;
    std::cout << "Enter string: ";
    std::getline(std::cin, str);

    string_function(str);

}