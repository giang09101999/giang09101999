#include<iostream>
using namespace std;

void sum(int a, int b)
{
    int sum = a + b;
    cout << "The sum of integer data type: " << sum << endl;
}

void sum(double a, double b)
{
    double sum = a + b;
    cout << "The sum of double data type: " << sum << endl;    
}

void sum(float a, float b)
{
    float sum = a + b;
    cout << "The sum of float data type: " << sum << endl;    
}

int main()
{
    sum(6, 7);
    sum(3.14, 5.5);
    sum(8.6, 5.7);
}