#include<iostream>
#include"Calculate_area_and_perimeter_of_shapes.cpp"

class Shape_perimeter : public Shape_area
{
public:
    float rectangle_perimeter, square_perimeter, circle_perimeter;
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
        cout << "===================================" << endl;
        cout << "The perimeter of shapes:" << endl;
        rectangle_perimeter = (length + width)*2;
        square_perimeter = edge*4;
        circle_perimeter = 2*3.14*radius;
        cout << "The perimeter of rectangle is: " << rectangle_perimeter << endl;
        cout << "The perimeter of square is: " << square_perimeter << endl;
        cout << "The perimeter of cirlce is: " << circle_perimeter << endl;
        cout << "===========================================" << endl;
    }
};

int main()
{
    Shape_area shape_area;
    Shape_perimeter shape_perimeter;
    shape_area.input();
    
    shape_area.output();  
    shape_perimeter.input();
    shape_perimeter.output();
}