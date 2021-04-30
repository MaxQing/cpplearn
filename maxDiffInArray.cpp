#include <iostream>
#include <vector>
#include <limits>

//find out the minimum value in array that traversed.

int find_maxDiff(const std::vector<int>& int_set) {
	int min_temp = std::numeric_limits<int>::max();
	int result = 0;
	for (int i = 0; i < int_set.size(); ++i) {
		if (int_set[i] < min_temp) {
			min_temp = int_set[i];
		}
		else if (int_set[i] - min_temp > result) {
			result = int_set[i] - min_temp;
		}
	}
	return result;
}

int main() {
	std::vector<int> int_set{1, 2, 3, 4, 5};
	int result = 0;
	result = find_maxDiff(int_set);
	std::cout << "Test result is : " << result << std::endl;
	return 0;
}
