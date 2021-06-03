#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 10; ++i) {
		vec.push_back(i);
	}
	for (auto tmp : vec) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	std::fill_n(vec.begin(), vec.size(), 0);
	for (auto tmp : vec) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	return 0;
}
