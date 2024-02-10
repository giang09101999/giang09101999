#include<iostream>

void function_array(int (&Array)[], int N, int I)
{
    for(I = 0; I < N; I++)
    {
        Array[I] = Array[I] + 2;
    }
}

int main()
{
    int i, n;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;

    int array[n];
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }

    std::cout << "======================================" << std::endl;
    std::cout << "The original array: " << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << array[i] << std::endl;
    }

    function_array(array, n, i);

    std::cout << "======================================" << std::endl;
    std::cout << "The updated array: " << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << array[i] << std::endl;
    }
}