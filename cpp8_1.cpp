#include <iostream>
#include <stdexcept>

std::istream &test_func(std::istream &is) {
	int val;
	while (is >> val, !is.eof()) {
		if (is.bad()) {
			throw std::runtime_error("IO flow wrong.");
		}
		if (is.fail()) {
			std::cerr << "wrong data." << std::endl;
			is.clear();
			is.ignore(100, '\n');
			continue;
		}
		std::cout << val << std::endl;
	}
	is.clear();
	return is;
}

int main() {
	std::cout << "Please input some integers(enter CTRL+Z to end input.) : " << std::endl;
	test_func(std::cin);
	return 0;
}
