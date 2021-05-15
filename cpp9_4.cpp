#include <iostream>
#include <vector>

bool test_func(std::vector<int>::iterator left, std::vector<int>::iterator right, int target) {
	if (left == right) {
		return false;
	}
	while (left != right) {
		if (*left == target) {
			return true;
		}
		++left;
	}
	return false;
}

int main() {
	std::vector<int> ivec{1, 2, 3, 4};
	bool result;
	result = test_func(ivec.begin(), ivec.end(), 4);
	std::cout << result << std::endl;
	return 0;
}
