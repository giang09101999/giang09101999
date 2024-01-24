#include <iostream> 

int main() 
{ 
	int x = 5; 

	// Increment Operator (++) 
	std::cout << "Initial value of x: " << x << std::endl; 
	x++; // Increment x by 1 
	std::cout << "After x++, x is now: " << x << std::endl; 

	// Prefix and Postfix Increment/Decrement 
	int a = 10; 
	int b, c, d; 

	b = ++a; // Prefix increment: first, increment a, then 
			// assign to b 
	c = a++; // Postfix increment: first, assign a to c, 
			// then increment a 
    d = ++a;
	std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d 
		<< std::endl; 

	return 0; 
}
