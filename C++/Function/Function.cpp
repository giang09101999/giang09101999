#include<iostream>

void max(float A, float B)
{
    float max;
    if (max < A)
        max = A;
    if (max < B)
        max = B;
    std::cout << "Max is: " << max << std::endl;
}

void min(float A, float B)
{
    float min;
    if (min > A)
        min = A;
    if (min > B)
        min = B;
    std::cout << "Min is: " << min << std::endl;
}

void sum(float A, float B)
{
    float sum = A + B;
    std::cout << "Sum is: " << sum << std::endl;
}

void sub(float A, float B)
{
    float sub = A - B;
    std::cout << "Sub is: " << sub << std::endl;
}

void mul(float A, float B)
{
    float mul = A * B;
    std::cout << "Multiply is: " << mul << std::endl;
}

void divide(float A, float B)
{
    float divide = A / B;
    std::cout << "Division is: " << divide << std::endl;
}

int main()
{
    float a, b;
    std::cout << "Enter value of a: " << std::endl;
    std::cin >> a;    
    
    std::cout << "Enter value of b: " << std::endl;
    std::cin >> b;

    max(a, b);
    min(a, b);
    sum(a, b);
    sub(a, b);
    mul(a, b);
    divide(a, b);

    return 0;
}