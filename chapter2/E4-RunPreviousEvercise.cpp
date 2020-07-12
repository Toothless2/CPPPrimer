#include <iostream>

int main(void) {
	unsigned u = 10, u2 = 42;

	std::cout << u2 - u << std::endl; // This will produce 32
	std::cout << u - u2 << std::endl; // This will produce a wrapped value

	int i = 10, i2 = 42;

	std::cout << i2 - i << std::endl; // This will produce 32
	std::cout << i - i2 << std::endl; // This will produce -32

	std::cout << i - u << std::endl; // This will produce 0
	std::cout << u - i << std::endl; // This will produce 0
	
	return 0;
}
