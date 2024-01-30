#include<iostream>

int Minimum(int Min, int *P1, int *P2, int *P3)
{
    if(Min > *P1)
        Min = *P1;
    if(Min > *P2)
        Min = *P2;
    if(Min > *P3)
        Min = *P3;   

    std::cout << "Min: " << Min << std::endl;     
}

int Maximum(int Max, int *P1, int *P2, int *P3)
{
    if(Max < *P1)
        Max = *P1;
    if(Max < *P2)
        Max = *P2;
    if(Max < *P3)
        Max = *P3; 
    std::cout << "Max: " << Max << std::endl; 
}


int main()
{
    int a, b, c;
    int *p1, *p2, *p3;

    std::cout << "Enter a: ";
    std::cin >> a;    
    
    std::cout << "Enter b: ";
    std::cin >> b;    
    
    std::cout << "Enter c: ";
    std::cin >> c;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    int min, max;

    Minimum(min, p1, p2, p3);
    Maximum(max, p1, p2, p3);
}