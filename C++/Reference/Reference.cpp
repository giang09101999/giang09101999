#include<iostream>

void reference(int &a, int &b)
{
    a = a + 1;
    b = b + 1;
}

int main()
{
    int a = 5, b = 10;
    std::cout << "The original values of a and b is: " << a << " " << b << std::endl;

    reference(a, b);
    std::cout << "The of a and b is: " << a << " " << b << std::endl;
}