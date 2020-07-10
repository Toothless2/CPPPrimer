#include <iostream>
#include "Store_item.h"

int main(void){

	Sales_item total;
	std::cin >> total; // read the first item in directly
	Sales_item new_item;

	int count = 0;
	while(std::cin >> new_item)
	{
		if(new_item.isbn() == total.isbn())
		{
			total += new_item;
			count++;
		} else {
			std::cout << "Total for book: " << total.isbn() << " is " << count << std::endl;
			count = 0;
			total = new_item;
		}
	}
	std::cout << "Total for book: " << total.isbn() << " is " << count << std::endl;
	return 0;
}
