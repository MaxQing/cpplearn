#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> test_vec;

	// Creates an element with value or constructed from parameter at the end of container.
	// return void.
	test_vec.push_back("1");
	test_vec.push_back("2");

	// Creates by iterator
	test_vec.insert(test_vec.begin(), "0");

	// inserts a set of elements
	test_vec.insert(test_vec.end(), {"3", "4", "5"});

	for (auto temp : test_vec) {
		std::cout << temp <<  " ";
	}
	std::cout << std::endl;
	return 0;
}
