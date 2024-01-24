#include<iostream>

void function()
{
    int static a = 10; 
    a = a + 1;
    std::cout << a << std::endl;
}

int main()
{
    for(int i = 0; i < 5; i++)
    {
        function();
    }
}