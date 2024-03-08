#include<iostream>

class Num
{
    public:
    float num1, num2, sum, sub, mul, division;
    void Sum()
    {
        sum = num1 + num2;
        std::cout << "The sum is: " << sum << std::endl;
    }

    void Sub()
    {
        sub = num1 - num2;
        std::cout << "The sub is: " << sub << std::endl;
    }

    void Mul()
    {
        mul = num1 * num2;
        std::cout << "The multiply is: " << mul << std::endl;
    }

    void Division()
    {
        division = num1 / num2;
        std::cout << "The division is: " << division << std::endl;
    }
};

int main()
{
    float a, b;
    std::cout << "Enter value of a: "; 
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;
    Num num;
    num.num1 = a;
    num.num2 = b;
    num.Sum();
    num.Sub();
    num.Mul();
    num.Division();
    
}