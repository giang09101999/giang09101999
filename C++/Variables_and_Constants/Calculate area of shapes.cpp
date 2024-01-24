#include<iostream>

int main()
{
    float width, length, radius, edge;
    float pi = 3.141593;

    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    std::cout << "Enter edge: ";
    std::cin >> edge;

    float rectangle_area = length*width;
    float square_area = edge*edge;
    float circle_area = pi*radius*radius;

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "The area of rectangle is: " << rectangle_area << std::endl;
    std::cout << "The area of square is: " << square_area << std::endl;
    std::cout << "The area of circle is: " << circle_area << std::endl;
}