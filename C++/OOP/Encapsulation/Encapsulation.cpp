#include<iostream>

using namespace std;
class Calculate
{
int a, b;
public:
    Calculate(int input)
    {
        a = input;
        b = a/2;
    }
    void display()
    {
        cout << "b = " << b << endl;
    }

};

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Calculate calculate(n);
    calculate.display();
}