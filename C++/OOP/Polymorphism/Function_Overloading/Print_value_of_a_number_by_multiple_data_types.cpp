#include<iostream>
using namespace std;

void Display(int a)
{
    cout << "The value of a: " << a << endl;
}

void Display(double a)
{
    cout << "The value of a: " << a << endl;   
}

void Display(float a)
{
    cout << "The value of a: " << a << endl;
}

int main()
{
    Display(1);
    Display(3.14);
    Display(5.5);
}