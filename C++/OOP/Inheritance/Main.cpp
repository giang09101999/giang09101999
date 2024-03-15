#include<iostream>
#include"Inheritance.cpp"
using namespace std;

class Ferrari : public Car
{
public:
    void input()
    {
        cout << "Enter speed of Ferrari: ";
        cin >> speed;
    }
    void print()
    {
        cout << "The speed of Ferrari car is: " << speed << endl;
    }
};

int main()
{
    Car car;
    Ferrari ferrari;
    car.input();
    ferrari.input();
    cout << "===================================" << endl;
    car.print();
    ferrari.print();
}