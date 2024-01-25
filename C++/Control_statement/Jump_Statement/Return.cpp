#include<iostream>

int main()
{
    int a = 0;
    while(a < 10)
    {
        if(a == 5)
        {
            return 0;
        }
    std::cout << a << std::endl;
    a++;
    }
    std::cout << "The program will terminate the entire function after the execution " << std::endl;
    return 0;
}