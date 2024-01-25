#include<iostream>

int main()
{
    float minutes, fee;

    std::cout << "Input number of minutes: ";
    std::cin >> minutes;

    if(minutes <= 50)
    {
        fee = minutes*600 + 25000;
    }

    if((minutes > 50)&(minutes <= 150))
    {
        fee = 50*600 + (minutes - 50)*400 + 25000;
    }

    if(minutes > 200)
    {
        fee = 50*600 + 150*400 + (minutes - 200)*200 + 25000;
    }

    std::cout << "The phone charges is: "<< fee << std::endl;
}