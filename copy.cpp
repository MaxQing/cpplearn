#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> vec1{1, 2, 3, 4, 5};
	std::vector<int> vec2;
	vec2.resize(vec1.size());
	std::copy(vec1.begin(), vec1.end(), vec2.begin());
	for (auto tmp : vec2) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	return 0;
}
