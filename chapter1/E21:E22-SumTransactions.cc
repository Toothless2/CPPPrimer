#include <iostream>
#include "Sales_item.h"

int main(void) {
	Sales_item total;
	std::cin >> total; // read the first item in directly;
	Sales_item item;

	while(std::cin >> item)
		total += item;

	std::cout << total << std::endl;
	return 0;
}
