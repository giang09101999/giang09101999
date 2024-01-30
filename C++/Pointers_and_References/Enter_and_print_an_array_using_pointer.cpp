#include<iostream>

int main()
{
    int n;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n], i;
    int *p;
    p = array;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];

    }

    std::cout << "-------------------------------------------" << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << *(p + i) << std::endl;
        
    }

}