#include<iostream>

using namespace std;
class Value
{
int a;
public:
    Value()
    {
        cout << "Enter a: ";
        cin >> a;
        
    }
    ~Value()
    {
        cout << "Destructor" << endl;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
    }

};



int main()
{
    Value value;
    value.display();
}