#include<iostream>

int main()
{
    int a = 5;
    int *p1, **p2;
    p1 = &a;
    p2 = &p1;

    std::cout << "Value of a: " << *p1 << std::endl;
    std::cout << "Value of a using double pointer **p2: " << **p2 << std::endl;
    std::cout << "Address of a: " << p1 << std::endl;
    std::cout << "Address of pointer that contains address of a: " << p2 << std::endl;
    
}