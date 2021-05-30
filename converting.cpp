#include <iostream>
#include <string>
#include <numbers>

int main() {
	int i = 2;
	char c = 97;
	std::string cvtFromInt = std::to_string(i);
	std::string cvtFromChar = std::to_string(c);
	double douFromString = std::stod(cvtFromInt);
	std::cout << cvtFromInt << std::endl;
	std::cout << cvtFromChar << std::endl;
	std::cout << douFromString << std::endl;
	return 0;
}
