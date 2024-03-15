#include<iostream>
using namespace std;

class Circle_area
{
private:
    float radius, area;
public:
    Circle_area()
    {
        cout << "Enter value of radius: ";
        cin >> radius;
    }

    void display()
    {
        area = radius*3.14;
        cout << "The area of circle is: " << area << endl;
    }
    
};

