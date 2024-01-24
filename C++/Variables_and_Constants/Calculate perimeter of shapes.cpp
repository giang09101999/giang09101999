#include<iostream>
#include "myfile.h"

int main()
{
    float width, length, radius, edge;

    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    std::cout << "Enter edge: ";
    std::cin >> edge;

    float rectangle_perimeter = 2*(length + width);
    float square_perimeter = 4*edge;
    float circle_perimeter = 2*pi*radius;

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "The perimeter of rectangle is: " << rectangle_perimeter << std::endl;
    std::cout << "The perimeter of square is: " << square_perimeter << std::endl;
    std::cout << "The perimeter of circle is: " << circle_perimeter << std::endl;
}