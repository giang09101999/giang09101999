#include<iostream>

void Addition(float &A, float &B, float Sum)
{
    Sum = A + B;
    std::cout << "Sum: " << Sum << std::endl;

}

void Substraction(float &A, float &B, float Sub)
{
    Sub = A - B;
    std::cout << "Substraction: " << Sub << std::endl;    
}

void Multiply(float &A, float &B, float Mul)
{
    Mul = A*B;
    std::cout << "Multiply: " << Mul << std::endl; 
}

void Division(float &A, float &B, float Div)
{
    Div = A/B;
    std::cout << "Division: " << Div << std::endl;     
}

int main()
{
    float a = 5, b = 3;
    float sum, sub, mul, div;

    Addition(a, b, sum);
    Substraction(a, b, sub);
    Multiply(a, b, mul);
    Division(a, b, div);
}