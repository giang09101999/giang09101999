#include<iostream>

int main()
{
    int n, i, j;
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
        for(j = i + 1; j < n; j++)
        {
            if(array[i] > array[j])
            {
                int tempt;
                tempt = array[i];
                array[i] = array[j];
                array[j] = tempt;              
            }
        }
    }
    std::cout << "=====================================" <<std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = " << array[i] <<std::endl;
    }
}