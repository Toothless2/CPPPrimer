#include <iostream>
#include "Sales_item.h" // " for non stdlib files

int main(void)
{
	Sales_item book;
	while(std::cin >> book)
		std::cout << book << std::endl;

	return 0;
}
