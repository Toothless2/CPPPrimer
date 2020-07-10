#include <iostream>

//EOF ctrl+z (windows) ctrl+d (mac)
int main(void){
	int sum = 0, v = 0;

	while(std::cin >> v)
		sum += v;

	std::cout << sum << std::endl;
	return 0;
}
