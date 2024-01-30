#include<iostream>

void Addiction(float A, float B, float Sum)
{
    Sum = A + B;
    std::cout << "Sum: " << Sum << std::endl;
}

void Substraction(float A, float B, float Sub)
{
    Sub = A - B;
    std::cout << "Substraction: " << Sub << std::endl;    
}

void Multiply(float A, float B, float Mul)
{
    Mul = A * B;
    std::cout << "Multiply: " << Mul << std::endl;    
}

void Division(float A, float B, float Div)
{
    Div = A / B;
    std::cout << "Division: " << Div << std::endl;    
}

int main()
{
    float a, b, sum, sub, mul, div;
    std::cout << "Enter a: ";
    std::cin >> a;    
    
    std::cout << "Enter b: ";
    std::cin >> b;

    Addiction(a, b, sum);
    Substraction(a, b, sub);
    Multiply(a, b, mul);
    Division(a, b, div);
	
	std::cout << "a: " << a << "; b = " << b << std::endl;
}