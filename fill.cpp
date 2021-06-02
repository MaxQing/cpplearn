#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> vec;
	vec.resize(20);
	std::fill_n(vec.begin(), 5, 1);
	for (auto tmp : vec) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	return 0;
}
