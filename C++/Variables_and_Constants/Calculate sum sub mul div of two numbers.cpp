#include<iostream>

int main()
{
	float a, b;
	
	std::cout << "Input value of a: ";
	std::cin >> a;
	
	std::cout << "Input value of b: ";
	std::cin >> b;
	
	float sum = a + b;
	float sub = a - b;
	float mul = a*b;
	float divide = a/b;
	
	std::cout << "------------------------------"<< std::endl;
	std::cout << "Value of sum is: " << sum << std::endl;
	std::cout << "Value of sub is: " << sub << std::endl;
	std::cout << "Value of mul is: " << mul << std::endl;
	std::cout << "Value of divide is: " << divide << std::endl;
}