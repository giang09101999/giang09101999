#include<iostream>

void Sum(int *P1, int *P2, int Add)
{
    Add = (*P1) + (*P2);
    std::cout << "Add: " << Add << std::endl;
}

void Substraction(int *P1, int *P2, int Sub)
{
    Sub = (*P1) - (*P2);
    std::cout << "Substraction: " << Sub << std::endl;
}

void Multiply(int *P1, int *P2, int Mul)
{
    Mul = (*P1)*(*P2);
    std::cout << "Multiply: " << Mul << std::endl;
}

void Division(int *P1, int *P2, int Div)
{
    Div = (*P1)/(*P2);
    std::cout << "Division: " << Div << std::endl;
}

int main()
{
    int a, b;
    std::cout << "Enter value of a: ";
    std::cin >> a;    
    
    std::cout << "Enter value of b: ";
    std::cin >> b;

    int *p1, *p2, add, sub, multiply, division;

    p1 = &a;
    p2 = &b;

    Sum(p1, p2, add);
    Substraction(p1, p2, sub);
    Multiply(p1, p2, multiply);
    Division(p1, p2, division);

}