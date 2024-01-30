#include<iostream>

int main()
{
    int n, i;

    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n];
    for(i=0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }

    int array_2[n];
    for(i = 0; i < n; i++)
    {
        array_2[i] = array[i];
    }

    std::cout << "=========================================" << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array_2[" << i << "] = " << array_2[i] << std::endl;
    }
}