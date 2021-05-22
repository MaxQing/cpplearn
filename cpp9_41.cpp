#include <iostream>
#include <vector>

int main() {
	std::vector<char> vec;
	for (int i = 65; i < 91; ++i) {
		vec.push_back(i);
	}
	std::string result(vec.data(), vec.size());
	for (auto tmp : vec) {
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
	std::cout << result << std::endl;
	return 0;
}
