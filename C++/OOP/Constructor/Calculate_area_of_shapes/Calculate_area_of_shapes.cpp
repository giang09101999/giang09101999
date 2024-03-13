#include<iostream>

class Shape
{
public:
    float length, width, edge, radius, rectangle_area, square_area, circle_area;

    Shape (float length, float width, float edge, float radius)
    {
        std::cout << "Enter value of length: ";
        std::cin >> length;
        std::cout << "Enter value of width: ";
        std::cin >> width;
        std::cout << "Enter value of edge: ";
        std::cin >> edge;
        std::cout << "Enter value of radius: ";
        std::cin >> radius;
        this->length = length;
        this->width = width;
        this->edge = edge;
        this->radius = radius;

    }
    void Display()
    {
        rectangle_area = length*width;
        square_area = edge*edge;
        circle_area = radius*3.14;
        std::cout << "The area of rectangle: " << rectangle_area << std::endl;
        std::cout << "The area of square: " << square_area << std::endl;
        std::cout << "The area of circle: " << circle_area << std::endl;
    }

};

int main()
{
    float length, width, edge, radius;
    Shape shape(length, width, edge, radius);
    std::cout << "==================================" << std::endl;
    shape.Display();

}