#include<iostream>

int main()
{
    int *arr, n, i;
    std::cout << "Enter number of elements of array: ";
    std::cin >> n;
    arr = new int[n];
    
    std::cout << "Enter value of elements:" << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> arr[i];
    }
    
    std::cout << "The array: " << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << *(arr + i) << std::endl;        
    }
    delete[] arr;
}