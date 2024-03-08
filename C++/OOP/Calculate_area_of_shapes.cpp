#include<iostream>

class Shape
{
public:
    float length, width, edge, radius;
    float rectangle_area, square_area, cirlce_area;

    void Rectangle()
    {
        rectangle_area = length*width;
        std::cout << "The area of rectangle: " << rectangle_area << std::endl;
    }

    void Square()
    {
        square_area = edge*edge;
        std::cout << "The area of square: " << square_area << std::endl;
    }

    void Circle()
    {
        cirlce_area = radius*3.14;
        std::cout << "The area of circle: " << cirlce_area << std::endl;
    }

};

int main()
{
    Shape shape;
    float a1, a2, a3, a4;
    std::cout << "Enter value of length: ";
    std::cin >> a1;
    std::cout << "Enter value of width: ";
    std::cin >> a2;
    std::cout << "Enter value of edge: ";
    std::cin >> a3;
    std::cout << "Enter value of radius: ";
    std::cin >> a4;
    shape.length = a1;
    shape.width = a2;
    shape.edge = a3;
    shape.radius = a4;
    std::cout << "==================================" << std::endl;
    shape.Rectangle();
    shape.Square();
    shape.Circle();

}