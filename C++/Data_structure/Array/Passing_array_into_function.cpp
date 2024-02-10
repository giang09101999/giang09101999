#include<iostream>

void function_array(int Array[], int N, int I)
{
    for(I = 0; I < N; I++)
    {
        std::cout << "Array[" << I << "] = " << Array[I] << std::endl;
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
    std::cout << "========================" << std::endl;
    function_array(array, n, i);

}