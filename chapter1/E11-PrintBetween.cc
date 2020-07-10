#include <iostream>

int main(void){
	int v1 = 0, v2 = 0;

	std::cin >> v1 >> v2;

	while(v1 <= v2){
		std::cout << v1-- << std::endl;
	}
	return 0;
}
