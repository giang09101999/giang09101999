#include<iostream>

int main()
{
    int n, i, min, max;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }

    for(i = 0; i < n; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }

        if(max < array[i])
        {
            max = array[i];
        }
    }

    std::cout << "=====================================" << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << array[i] << std::endl;

    }
    std::cout << "=====================================" << std::endl;
    std::cout << "Min = " << min << std::endl;
    std::cout << "Max = " << max << std::endl;
}