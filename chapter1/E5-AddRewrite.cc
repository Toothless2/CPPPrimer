#include <iostream>

int main(void)
{
	std::cout << "Enter two numbers to sum: " << std::endl;
	int v1 = 0;
	int v2 = 0;
	std::cin >> v1;
	std::cin >> v2;
	std::cout << v1;
	std::cout << " + ";
	std::cout << v2;
	std::cout << " = ";
	std::cout << v1 + v2 << std::endl;
	return 0;
}
