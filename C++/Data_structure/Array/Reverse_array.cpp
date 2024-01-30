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

    std::cout << "===============================" << std::endl;
    std::cout << "The original array: " << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cout << array[i] << std::endl;

    }

    int a = n - 1;
    int b = 0;
    while(b < a)
    {
        int tempt;
        tempt = array[a];
        array[a] = array[b];
        array[b] = tempt;
        b++;
        a--;
    }

    std::cout << "===============================" << std::endl;
    std::cout << "The reversed array: " << std::endl;
    for(i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cout << array[i] << std::endl;

    }

}