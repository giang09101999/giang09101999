#include<iostream>

int main()
{
    int *p, n;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n];
    int i;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];

    }
    p = array;
    std::cout << "===================================" << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << *(p+i) << std::endl;

    }

}