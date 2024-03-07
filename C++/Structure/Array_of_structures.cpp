#include<iostream>

struct struct_array
{
    int a1, a2;

};

int main()
{
    struct struct_array Array[2];
    Array[0].a1 = 4;
    Array[0].a2 = 5;
    Array[1].a1 = 2;
    Array[1].a2 = 6;

    std::cout << "The value of a1 in Array 0 is: " << Array[0].a1 << std::endl;
    std::cout << "The value of a2 in Array 0 is: " << Array[0].a2 << std::endl;
    std::cout << "The value of a1 in Array 1 is: " << Array[1].a1 << std::endl;
    std::cout << "The value of a1 in Array 1 is: " << Array[1].a2 << std::endl;
}