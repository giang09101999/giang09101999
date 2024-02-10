#include<iostream>

void function_array(int *P, int I, int N)
{
    for(I = 0; I < N; I++)
    {
        std::cout << "Array[" << I << "] = " << *(P + I) << std::endl;
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

    int *p = array;
    std::cout << "==========================" << std::endl;
    function_array(p, i, n);
}