#include<iostream>
using namespace std;
class Sum
{
private:
    int sum, a, b;
public:
    Sum()
    {
        cout << "Enter value of a: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;        
    }
    void display()
    {
        sum = a + b;
        cout << "The sum is: " << sum << endl;
    }
};