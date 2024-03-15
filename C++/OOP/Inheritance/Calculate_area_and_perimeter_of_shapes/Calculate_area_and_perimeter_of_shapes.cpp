#include<iostream>
using namespace std;
class Shape_area
{
public:
    float rectangle_area, square_area, circle_area;
    float length, width, radius, edge;
    void input()
    {
        cout << "Input length: ";
        cin >> length;
        cout << "Input width: ";
        cin >> width;
        cout << "Input radius: ";
        cin >> radius;  
        cout << "Input edge: ";
        cin >> edge;                
    }
    void output()
    {
       rectangle_area = length*width;
       square_area = edge*edge;
       circle_area = 3.14*radius;
       cout << "===========================================" << endl;
       cout << "The area of shapes:" << endl;
       cout << "The area of rectangle is: " << rectangle_area << endl;
       cout << "The area of square is: " << square_area << endl;
       cout << "The area of circle is: " << circle_area << endl;
       cout << "===========================================" << endl;
    }
};

