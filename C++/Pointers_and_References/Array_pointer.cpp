#include<iostream>

int main()
{
    int n, i;

    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n];

    int *p;

    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }
    p = array;

    std::cout << "*p = " << *p << std::endl;
    std::cout << "*(p + 1) = " << *(p + 1) << std::endl;
    std::cout << "*(p + 2) = " << *(p + 2) << std::endl;
}