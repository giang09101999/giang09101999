#include<iostream>
using namespace std;

class Car
{
private:
    int a;
public:
    int speed;
    void input()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
    void print()
    {
        speed = a + 5;
        cout << "The speed of Car: " << speed << endl;
    }
};




