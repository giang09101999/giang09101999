#include<iostream>
#include"Encapsulation.cpp"
using namespace std;


int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Calculate calculate(n);
    calculate.display();
}