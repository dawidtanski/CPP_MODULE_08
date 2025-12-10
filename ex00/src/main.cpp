#include "../inc/easyfind.hpp"
#include <vector>

int main(void){
	std::vector<int> numbers;
	numbers.push_back(55);
	numbers.push_back(34);
	numbers.push_back(2);
	numbers.push_back(7);
	numbers.push_back(99);

	try {
		std::cout << "Found: " << *(easyfind(numbers, 7)) << std::endl;
		std::cout << "Found: " << *(easyfind(numbers, 99)) << std::endl;
		std::cout << "Searching for 100..." << std::endl;
		std::cout << *(easyfind(numbers, 100)) << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}