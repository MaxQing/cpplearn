#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> vec;
	std::cout << vec[0] << std::endl;
	std::cout << vec.front() << std::endl;
	std::cout << vec.back() << std::endl;
	std::cout << vec.at(0) << std::endl;
	return 0;
}
