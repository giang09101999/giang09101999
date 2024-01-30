#include<iostream>

int main()
{
    int n, i;
    std::cout << "Enter number of elements in array: ";
    std::cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }

    std::cout << "------------------------------------" << std::endl;
    for(i = 0; i < n; i++)
    {
       std::cout << "Array[" << i << "] = " << array[i] << std::endl;
    }
}