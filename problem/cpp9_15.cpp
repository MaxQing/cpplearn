#include <iostream>
#include <vector>

bool compara_vector(std::vector<int> &a, std::vector<int> &b) {
	return a == b;
}

int main() {
	std::vector<int> vec1 = {1, 2, 3, 4};
	std::vector<int> vec2 = {4, 3, 2, 1};
	std::cout << compara_vector(vec1, vec2);
	return 0;
}
