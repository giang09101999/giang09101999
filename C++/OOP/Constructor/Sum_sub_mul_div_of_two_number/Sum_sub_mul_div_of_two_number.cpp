#include<iostream>

class Calculate
{
public:
    float num1, num2, sum, sub, mul, division;
    Calculate(float num1, float num2)
    {
        std::cout <<"Enter value of number 1: ";
        std::cin >> num1;
        std::cout <<"Enter value of number 2: ";
        std::cin >> num2;     
        this->num1 = num1;   
        this->num2 = num2;   
    }
    void Display()
    {
        sum = num1 + num2;
        sub = num1 - num2;
        mul = num1 * num2;
        division = num1 / num2;
        std::cout << "The sum of two numbers: " << sum << std::endl;
        std::cout << "The substraction of two numbers: " << sub << std::endl;
        std::cout << "The multiple of two numbers: " << mul << std::endl;
        std::cout << "The division of two numbers: " << division << std::endl;
    }


};

int main()
{
    float num1, num2;
    Calculate calculate(num1, num2);
    std::cout << "==================================" << std::endl;
    calculate.Display();
}