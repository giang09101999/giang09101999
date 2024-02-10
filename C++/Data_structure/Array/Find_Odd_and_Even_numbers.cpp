#include<iostream>

int main()
{
    int n, i;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }
    std::cout << "=======================" << std::endl;
    std::cout << "The odd elements: " << std::endl;
    for(i = 0; i < n; i++)
    {
        if(array[i] % 2 != 0)
        {
            std::cout << "Array[" << i << "] = " << array[i] << std::endl;
        }
    }    

    std::cout << "=======================" << std::endl;
    std::cout << "The even elements: " << std::endl;    
    for(i = 0; i < n; i++)
    {
        if(array[i] % 2 == 0)
        {
            std::cout << "Array[" << i << "] = " << array[i] << std::endl;
        }
    }
}