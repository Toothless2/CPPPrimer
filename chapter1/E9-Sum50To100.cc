#include <iostream>

int main(void)
{
	int sum = 0, val = 50;
	while(val <= 100){
		sum += val++; // adds val to sum then increments val
	}
	std::cout << "Total value is: " << sum << std::endl;
	return 0;
}
