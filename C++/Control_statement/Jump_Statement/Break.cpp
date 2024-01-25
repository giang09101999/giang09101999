#include<iostream>

int main()
{
    int i = 0;

    while(i < 10){
        if(i == 5)
        {
            break;
        }
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}