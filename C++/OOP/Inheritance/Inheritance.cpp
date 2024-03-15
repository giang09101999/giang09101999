#include<iostream>
using namespace std;

class Car
{
public:
    int speed;
};

class Ferrari: public Car
{
public:
    Ferrari()
    {
        cout << "Enter speed of Ferrari car: ";
        cin >> speed;
    }
    void print()
    {
        cout << "The speed of Ferrari car is: " << speed << endl;
    }
};

class Mescedes: public Car
{
public:
    Mescedes()
    {
        cout << "Enter speed of Mescedes car: ";
        cin >> speed;
    }
    void print()
    {
        cout << "The speed of Mescedes car is: " << speed << endl;
    }
};

int main()
{
    Ferrari ferrari;
    Mescedes mescedes;
    cout << "===================================" << endl;
    ferrari.print();
    mescedes.print();

}